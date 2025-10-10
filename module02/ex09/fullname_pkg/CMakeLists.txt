cmake_minimum_required(VERSION 3.8)
project(fullname_pkg)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/FullName.msg"
  "srv/SumFullName.srv"
)

ament_package()
