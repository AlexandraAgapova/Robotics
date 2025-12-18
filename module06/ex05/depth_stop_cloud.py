#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from sensor_msgs_py import point_cloud2
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

class DepthCloudStopNode(Node):
    def __init__(self):
        super().__init__('depth_cloud_stop_node')
        
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )
        
        self.subscription = self.create_subscription(
            PointCloud2,
            '/depth/points',
            self.pc_callback,
            qos_profile
        )
        
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.stop_distance = 1.0

    def pc_callback(self, msg):
        gen = point_cloud2.read_points(msg, field_names=("x", "y", "z"), skip_nans=True)
        
        min_dist = float('inf')
        count = 0
        
        for p in gen:
            x, y, z = p
            if abs(y) < 0.2 and abs(z) < 0.5:
                if x > 0.1 and x < min_dist:
                    min_dist = x
            
            count += 1
            if count > 1000:
                break

        cmd = Twist()
        if min_dist < self.stop_distance:
            cmd.linear.x = 0.0
            self.get_logger().info(f'Obstacle {min_dist:.2f}m. Stop.')
        else:
            cmd.linear.x = 0.5
            self.get_logger().info('Go.')
            
        self.publisher.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = DepthCloudStopNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
