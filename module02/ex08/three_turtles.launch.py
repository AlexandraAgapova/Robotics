from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
	Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle1_sim',
            output='screen'
        ),
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle2_sim',
            output='screen'
        ),
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle3_sim',
            output='screen'
        ),
        Node(
            package='turtlesim',
            executable='mimic',
            name='turtle2_mimic',
            arguments=['/turtle1', '/turtle2']
        ),
        Node(
            package='turtlesim',
            executable='mimic',
            name='turtle3_mimic',
            arguments=['/turtle2', '/turtle3']
        ),
    ])
