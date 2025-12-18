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
    
    gz_topic_depth = '/depth_camera/image'
    gz_topic_info = '/depth_camera/camera_info'

    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/world/gpu_lidar_sensor/model/glam_bot/link/lidar_link/sensor/lidar/scan@sensor_msgs/msg/LaserScan@gz.msgs.LaserScan',
            
            f'{gz_topic_depth}@sensor_msgs/msg/Image@gz.msgs.Image',
            f'{gz_topic_info}@sensor_msgs/msg/CameraInfo@gz.msgs.CameraInfo',

            '/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist',
            '/odom@nav_msgs/msg/Odometry@gz.msgs.Odometry',
            '/tf@tf2_msgs/msg/TFMessage@gz.msgs.Pose_V',
            '/joint_states@sensor_msgs/msg/JointState@gz.msgs.Model'
        ],
        remappings=[
            ('/world/gpu_lidar_sensor/model/glam_bot/link/lidar_link/sensor/lidar/scan', '/scan'),
            (gz_topic_depth, '/depth/image_raw'),
            (gz_topic_info, '/depth/camera_info')
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
