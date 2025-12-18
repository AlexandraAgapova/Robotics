import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    current_dir = os.getcwd()

    gazebo_env = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(current_dir, 'robot_gazebo.launch.py')
        )
    )

    movement_node = Node(
        package=None,
        executable='python3',
        arguments=[os.path.join(current_dir, 'movement_patterns.py')],
        name='unique_mover',
        output='screen'
    )

    return LaunchDescription([
        gazebo_env,
        movement_node
    ])
