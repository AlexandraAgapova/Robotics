#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math

class UniqueMovementNode(Node):
    def __init__(self):
        super().__init__('unique_movement_node')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.timer_callback) # 10 Гц
        
        self.state = 0
        self.state_timer = 0.0
        self.get_logger().info("Glam Drift Bot Started! 💅")

    def timer_callback(self):
        msg = Twist()
        # Увеличиваем таймер состояния (шаг 0.1 сек)
        self.state_timer += 0.1
        
        # РАЗГОН ПРЯМО (2 сек)
        if self.state == 0:
            if self.state_timer < 2.0:
                msg.linear.x = 1.0  # Газ в пол
                msg.angular.z = 0.0
                if self.state_timer < 0.2: self.get_logger().info("State 1: Full Speed Ahead!")
            else:
                self.switch_state(1)

        # ДРИФТ БОКОМ (1.5 сек) ===
        elif self.state == 1:
            if self.state_timer < 1.5:
                msg.linear.x = 0.8  # Продолжаем ехать
                msg.angular.z = 2.5 # Но резко крутим руль
                if self.state_timer < 0.2: self.get_logger().info("State 2: DRIFT! 💨")
            else:
                self.switch_state(2)

        # ВОСЬМЕРКА (8 сек)
        elif self.state == 2:
            if self.state_timer < 4.0:
                # Первая петля (влево)
                msg.linear.x = 0.6
                msg.angular.z = 1.5
                if self.state_timer < 0.2: self.get_logger().info("State 3: Figure 8 - Loop 1")
            elif self.state_timer < 8.0:
                # Вторая петля (вправо)
                msg.linear.x = 0.6
                msg.angular.z = -1.5
                if self.state_timer < 4.2: self.get_logger().info("State 3: Figure 8 - Loop 2")
            else:
                self.switch_state(3)

        # К ЭКРАНУ (назад) (2 сек) ===
        elif self.state == 3:
            if self.state_timer < 2.0:
                msg.linear.x = -0.8 # Едем задом
                msg.angular.z = 0.0
                if self.state_timer < 0.2: self.get_logger().info("State 4: Back it up!")
            else:
                self.switch_state(4)

        # РЕЗКИЙ ПОВОРОТ И СБРОС (1 сек)
        elif self.state == 4:
            if self.state_timer < 1.0:
                msg.linear.x = 0.0
                msg.angular.z = 4.0 # Волчок на месте
                if self.state_timer < 0.2: self.get_logger().info("State 5: Final Spin! 🌪️")
            else:
                self.switch_state(0) # Заново

        self.publisher_.publish(msg)

    def switch_state(self, new_state):
        self.state = new_state
        self.state_timer = 0.0

def main(args=None):
    rclpy.init(args=args)
    node = UniqueMovementNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
