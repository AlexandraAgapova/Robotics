#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
import numpy as np

class DepthStopNode(Node):
    def __init__(self):
        super().__init__('depth_stop_node')
        
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )
        
        self.subscription = self.create_subscription(
            Image,
            '/depth/image_raw',
            self.image_callback,
            qos_profile
        )
        
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        
        self.stop_distance = 1.0
        self.move_speed = 0.5
        self.obstacle_detected = False

        self.get_logger().info('Depth Stop Node started.')

    def image_callback(self, msg):
        if msg.encoding == '32FC1':
            depth_image = np.frombuffer(msg.data, dtype=np.float32)
        elif msg.encoding == '16UC1':
            depth_image = np.frombuffer(msg.data, dtype=np.uint16) / 1000.0
        else:
            depth_image = np.frombuffer(msg.data, dtype=np.float32)

        try:
            depth_image = depth_image.reshape((msg.height, msg.width))
        except ValueError:
            return

        h, w = depth_image.shape
        roi_size = 100
        center_y, center_x = h // 2, w // 2
        
        y1 = max(0, center_y - roi_size // 2)
        y2 = min(h, center_y + roi_size // 2)
        x1 = max(0, center_x - roi_size // 2)
        x2 = min(w, center_x + roi_size // 2)
        
        center_crop = depth_image[y1:y2, x1:x2]
        center_crop = center_crop[np.isfinite(center_crop)]
        
        min_dist = float('inf')
        if center_crop.size > 0:
            min_dist = np.min(center_crop)

        cmd = Twist()
        
        if min_dist < self.stop_distance:
            cmd.linear.x = 0.0
            if not self.obstacle_detected:
                self.get_logger().info(f'Obstacle at {min_dist:.2f}m! Stopping.')
                self.obstacle_detected = True
        else:
            cmd.linear.x = self.move_speed
            if self.obstacle_detected:
                self.get_logger().info('Path clear. Moving.')
                self.obstacle_detected = False
                
        self.publisher.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = DepthStopNode()
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
