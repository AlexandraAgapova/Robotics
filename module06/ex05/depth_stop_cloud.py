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

        # Останавливаться за 1 м до препятствия
        self.stop_distance = 1.0

    def pc_callback(self, msg: PointCloud2):
        # В оптическом фрейме камеры: x – вправо, y – вниз, z – вперёд [web:112][web:115]
        gen = point_cloud2.read_points(msg, field_names=("x", "y", "z"), skip_nans=True)

        min_dist = float('inf')
        count = 0

        for x, y, z in gen:
            # Узкий сектор по центру камеры
            if abs(x) < 0.2 and abs(y) < 0.2:
                if 0.1 < z < min_dist:   # вперёд — это z
                    min_dist = z

            count += 1
            if count > 10000:
                break

        cmd = Twist()
        if min_dist < self.stop_distance:
            cmd.linear.x = 0.0
            self.get_logger().info(f'Obstacle {min_dist:.2f} m. Stop.')
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

