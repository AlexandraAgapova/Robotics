import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    current_dir = os.getcwd()

    # 1. Запускаем окружение из ex03 (Gazebo + Robot + Bridge + RViz)
    # Поскольку мы скопировали файлы, файл лежит прямо в этой же папке
    gazebo_env = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(current_dir, 'robot_gazebo.launch.py')
        )
    )

    # 2. Запускаем наш скрипт движения
    # Так как скрипт не установлен в систему (мы не делаем setup.py build), 
    # запускаем его напрямую как процесс python3
    circle_node = Node(
        package=None, # Не используем пакетный менеджер
        executable='python3',
        arguments=[os.path.join(current_dir, 'circle_movement.py')],
        name='circle_mover',
        output='screen'
    )

    return LaunchDescription([
        gazebo_env,
        circle_node
    ])
