import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, AppendEnvironmentVariable
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    current_dir = os.getcwd()
    
    # 1. Загрузка URDF (Xacro)
    # Используем абсолютный путь к файлу в папке ex03
    xacro_file = os.path.join(current_dir, 'robot.urdf.xacro')
    
    # Важно: Оборачиваем в ParameterValue(..., value_type=str)
    robot_description_content = ParameterValue(Command(['xacro ', xacro_file]), value_type=str)

    # 2. Robot State Publisher
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_content}]
    )

    # 3. Запуск Gazebo Harmonic (gz_sim)
    # ИСПРАВЛЕНИЕ: Более надежный способ передачи аргументов
    ros_gz_sim_pkg = get_package_share_directory('ros_gz_sim')
    gz_sim_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ros_gz_sim_pkg, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={
            'gz_args': '-r empty.sdf' # Запускаем пустой мир
        }.items(),
    )

    # 4. Спавн робота
    spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-topic', 'robot_description',
            '-name', 'glam_bot',
            '-z', '0.5'
        ],
        output='screen',
    )

    # 5. Мост (Bridge)
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist',
            '/odom@nav_msgs/msg/Odometry@gz.msgs.Odometry',
            '/tf@tf2_msgs/msg/TFMessage@gz.msgs.Pose_V',
            '/joint_states@sensor_msgs/msg/JointState@gz.msgs.Model'
        ],
        output='screen'
    )

    # 6. RViz
    rviz_config = os.path.join(current_dir, 'config.rviz')
    # Проверка на существование файла, чтобы не падать
    if os.path.exists(rviz_config):
        rviz_args = ['-d', rviz_config]
    else:
        rviz_args = []
        
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=rviz_args,
        output='screen'
    )

    return LaunchDescription([
        # Настройка окружения для корректной работы ресурсов (опционально, но полезно)
        # AppendEnvironmentVariable(
        #     name='GZ_SIM_RESOURCE_PATH',
        #     value=current_dir
        # ),
        gz_sim_launch,
        node_robot_state_publisher,
        spawn_entity,
        bridge,
        rviz_node
    ])
