from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # delay по умолчанию 2.0
        DeclareLaunchArgument(
            'delay',
            default_value='2.0',
            description='Delay in seconds for turtle follower'
        ),
        
        # Запуск turtlesim
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
        ),
        
        # broadcaster для turtle1 (которой управляем)
        Node(
            package='turtle_tf2_delay',
            executable='turtle_tf2_broadcaster',
            name='broadcaster1',
            parameters=[
                {'turtlename': 'turtle1'}
            ]
        ),
        
        # broadcaster для turtle2 (чтобы tf знал, где она)
        Node(
            package='turtle_tf2_delay',
            executable='turtle_tf2_broadcaster',
            name='broadcaster2',
            parameters=[
                {'turtlename': 'turtle2'}
            ]
        ),
        
        # слушатель, который управляет turtle2 с задержкой
        Node(
            package='turtle_tf2_delay',
            executable='turtle_tf2_listener',
            name='listener',
            parameters=[
                {'target_frame': 'turtle1'},
                {'delay': LaunchConfiguration('delay')}
            ]
        ),
    ])
