#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class CircleMover(Node):
    def __init__(self):
        super().__init__('circle_mover')
        # Создаем паблишер в топик /cmd_vel
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        
        # Таймер срабатывает каждые 0.1 секунды
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.get_logger().info("Circle Mover Node Started!")

    def timer_callback(self):
        msg = Twist()
        msg.linear.x = 0.5 
        msg.angular.z = 0.5
        
        # Публикуем сообщение
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = CircleMover()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        stop_msg = Twist()
        node.publisher_.publish(stop_msg)
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
