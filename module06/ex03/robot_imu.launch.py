import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    current_dir = os.getcwd()
    
    xacro_file = os.path.join(current_dir, 'robot.urdf.xacro')
    robot_description_content = ParameterValue(Command(['xacro ', xacro_file]), value_type=str)

    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_content}]
    )

    ros_gz_sim_pkg = get_package_share_directory('ros_gz_sim')
    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ros_gz_sim_pkg, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': '-r gpu_lidar_sensor.sdf'}.items(),
    )

    spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-topic', 'robot_description', '-name', 'glam_bot', '-z', '0.5'],
        output='screen',
    )
    
    # Ссылка на файл bridge.yaml
    bridge_config = os.path.join(current_dir, 'bridge.yaml')
    
    # Топик лидара для ремаппинга
    gz_scan_topic = '/world/gpu_lidar_sensor/model/glam_bot/link/base_link/sensor/lidar/scan'

    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        parameters=[{'config_file': bridge_config}],
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist',
            '/odom@nav_msgs/msg/Odometry@gz.msgs.Odometry',
            '/tf@tf2_msgs/msg/TFMessage@gz.msgs.Pose_V',
            '/joint_states@sensor_msgs/msg/JointState@gz.msgs.Model'
        ],
        remappings=[
            (gz_scan_topic, '/scan'),
            ('/depth_camera/image', '/depth/image_raw'),
            ('/depth_camera/camera_info', '/depth/camera_info')
        ],
        output='screen'
    )

    rviz_config = os.path.join(current_dir, 'config.rviz')
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config] if os.path.exists(rviz_config) else [],
        output='screen'
    )

    return LaunchDescription([
        gz_sim,
        node_robot_state_publisher,
        spawn_entity,
        bridge,
        rviz_node
    ])
