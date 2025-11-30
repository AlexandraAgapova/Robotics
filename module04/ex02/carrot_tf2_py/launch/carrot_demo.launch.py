from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # Declare launch arguments
    radius_arg = DeclareLaunchArgument(
        'radius',
        default_value='2.0',
        description='Radius of carrot rotation around turtle1'
    )
    
    direction_arg = DeclareLaunchArgument(
        'direction_of_rotation',
        default_value='1',
        description='Direction of rotation: 1 for clockwise, -1 for counter-clockwise'
    )
    
    radius = LaunchConfiguration('radius')
    direction = LaunchConfiguration('direction_of_rotation')
    
    return LaunchDescription([
        radius_arg,
        direction_arg,
        
        # Start turtlesim
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
        ),
        
        # Broadcast turtle1 pose
        Node(
            package='carrot_tf2_py',
            executable='turtle_tf2_broadcaster',
            name='broadcaster1',
            parameters=[{'turtlename': 'turtle1'}]
        ),
        
        # Broadcast turtle2 pose
        Node(
            package='carrot_tf2_py',
            executable='turtle_tf2_broadcaster',
            name='broadcaster2',
            parameters=[{'turtlename': 'turtle2'}]
        ),
        
        # Broadcast dynamic carrot frame
        Node(
            package='carrot_tf2_py',
            executable='carrot_broadcaster',
            name='carrot_broadcaster',
            parameters=[
                {'radius': radius},
                {'direction_of_rotation': direction}
            ]
        ),
        
        # Listen to carrot and control turtle2
        Node(
            package='carrot_tf2_py',
            executable='turtle_tf2_listener',
            name='listener',
            parameters=[{'target_frame': 'carrot'}]
        ),
    ])
