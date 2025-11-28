## ex01
**1 терминал:**
cd ~/Robotics/module03
colcon build --packages-select tutorial_interfaces service_full_name
source install/setup.bash
ros2 run service_full_name service_name

**2 терминал:**
cd ~/Robotics/module03
source install/setup.bash
ros2 run service_full_name client_name Иванов Иван Иванович

---
## ex02
**Воспроизведение в 1x:**
**t1:** запуск turtlesim
ros2 run turtlesim turtlesim_node
**t2:** запуск записи
ros2 topic echo /turtle1/pose > pose_speed_x1.yaml
**t3:** bag-файл
ros2 bag play turtle_cmd_vel.mcap

**Воспроизведение в 2x:**
**t1:** запуск turtlesim
ros2 run turtlesim turtlesim_node
**t2: **запуск записи
ros2 topic echo /turtle1/pose > pose_speed_x2.yaml
**t3:** bag-файл
ros2 bag play turtle_cmd_vel.mcap -r 2.0

---
## ex03
**t1:** mkdir -p ~/Robotics/module03/ex03
cd ~/Robotics/module03/ex03
ros2 run turtlesim turtlesim_node
**t2:**
ros2 run teleop_twist_keyboard teleop_twist_keyboard
**t3:**
cd ~/Robotics/module03/ex03
ros2 doctor
ros2 doctor --report > doctor.txt
---

## ex04
**t1: запуск симулятора** ros2 run turtlesim turtlesim_node
**t2: ** cd ~/Robotics/module03
source install/setup.bash
ros2 run move_to_goal move_to_goal 2.0 9.0 1.57
**и после: **ros2 run move_to_goal move_to_goal 9.0 2.0 -1.57
---

## ex05
**Сборка:**
cd ~/Robotics/module03
colcon build --packages-select action_cleaning_robot
source install/setup.bash
**t1:**
ros2 run turtlesim turtlesim_node
**t2:**
cd ~/Robotics/module03
source install/setup.bash
ros2 run action_cleaning_robot cleaning_action_server.py
**t3:**
cd ~/Robotics/module03
source install/setup.bash
ros2 run action_cleaning_robot cleaning_action_client.py clean_square 5.5 5.5 2.0
