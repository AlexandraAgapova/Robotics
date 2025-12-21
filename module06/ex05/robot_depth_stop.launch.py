#!/usr/bin/env python3
import os

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    current_dir = os.getcwd()

    # URDF (xacro) -> robot_description
    xacro_file = os.path.join(current_dir, 'robot.urdf.xacro')
    robot_description_content = ParameterValue(
        Command(['xacro ', xacro_file]),
        value_type=str
    )

    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_content}]
    )

    # Gazebo sim с миром gpu_lidar_sensor.sdf
    ros_gz_sim_pkg = get_package_share_directory('ros_gz_sim')
    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ros_gz_sim_pkg, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': '-r gpu_lidar_sensor.sdf'}.items(),
    )

    # Спавн робота из robot_description
    spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-topic', 'robot_description',
            '-name', 'glam_bot',
            '-z', '0.5',
            '-x', '-3.0',
            '-y', '0.0'
        ],
        output='screen',
    )

    # Bridge: depth image + camera_info по YAML, плюс базовые топики
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        # Базовые мосты:
        arguments=[
        '/depth_camera/image@sensor_msgs/msg/Image@gz.msgs.Image',
        '/depth_camera/camera_info@sensor_msgs/msg/CameraInfo@gz.msgs.CameraInfo',

        # базовые топики
        '/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist',
        '/odom@nav_msgs/msg/Odometry@gz.msgs.Odometry',
        '/tf@tf2_msgs/msg/TFMessage@gz.msgs.Pose_V',
        '/joint_states@sensor_msgs/msg/JointState@gz.msgs.Model'
        ],
        output='screen'
    )

    # Static TF: frame облака (которое строится в depth_stop_cloud.py)
    depth_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        arguments=[
            '0', '0', '0',
            '0', '0', '0',
            'camera_link_optical',              # parent
            'glam_bot/base_link/depth_camera'   # child (frame_id для /depth/points)
        ],
        output='screen'
    )

    # RViz
    rviz_config = os.path.join(current_dir, 'config.rviz')
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config] if os.path.exists(rviz_config) else [],
        output='screen'
    )

    depth_cloud_node = ExecuteProcess(
        cmd=['python3', os.path.join(current_dir, 'depth_to_cloud.py')],
        output='screen'
    )


    # Нода, которая по /depth_camera/image строит PointCloud2 на /depth/points
    # и останавливает робота
    depth_node = ExecuteProcess(
        cmd=['python3', os.path.join(current_dir, 'depth_stop_cloud.py')],
        output='screen'
    )

    return LaunchDescription([
        gz_sim,
        node_robot_state_publisher,
        spawn_entity,
        bridge,
        depth_tf,
        rviz_node,
        depth_cloud_node,
        depth_node
    ])
