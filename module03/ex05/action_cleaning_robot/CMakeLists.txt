cmake_minimum_required(VERSION 3.8)
project(action_cleaning_robot)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(action_msgs REQUIRED)
# Нам не нужно искать rclpy в CMake, он нужен только в runtime

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/CleaningTask.action"
)

install(PROGRAMS
  scripts/cleaning_action_server.py
  scripts/cleaning_action_client.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
