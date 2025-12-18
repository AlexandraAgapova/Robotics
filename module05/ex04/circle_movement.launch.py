import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    current_dir = os.getcwd()

    gazebo_env = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(current_dir, 'robot_gazebo.launch.py')
        )
    )

    circle_node = Node(
        package=None,
        executable='python3',
        arguments=[os.path.join(current_dir, 'circle_movement.py')],
        name='circle_mover',
        output='screen'
    )

    return LaunchDescription([
        gazebo_env,
        circle_node
    ])
