#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

class LidarStopNode(Node):
    def __init__(self):
        super().__init__('lidar_stop_node')
        
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )
        
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            qos_profile
        )
        
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        
        self.stop_distance = 1.0
        self.move_speed = 0.5
        self.obstacle_detected = False

        self.get_logger().info('Lidar Stop Node started.')

    def scan_callback(self, msg):
        num_readings = len(msg.ranges)
        center_index = num_readings // 2
        window_size = 20
        start_idx = max(0, center_index - window_size)
        end_idx = min(num_readings, center_index + window_size)
        
        front_ranges = msg.ranges[start_idx:end_idx]
        valid_ranges = [r for r in front_ranges if r > msg.range_min and r < msg.range_max]
        
        min_dist = float('inf')
        if valid_ranges:
            min_dist = min(valid_ranges)
            
        cmd = Twist()
        
        if min_dist < self.stop_distance:
            cmd.linear.x = 0.0
            if not self.obstacle_detected:
                self.get_logger().info(f'Obstacle detected at {min_dist:.2f}m! Stopping.')
                self.obstacle_detected = True
        else:
            cmd.linear.x = self.move_speed
            if self.obstacle_detected:
                self.get_logger().info('Path clear. Resuming motion.')
                self.obstacle_detected = False
                
        self.publisher.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = LidarStopNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        stop_cmd = Twist()
        node.publisher.publish(stop_cmd)
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
