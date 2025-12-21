#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CameraInfo, PointCloud2, PointField
from sensor_msgs_py import point_cloud2
import numpy as np


class DepthToCloudNode(Node):
    def __init__(self):
        super().__init__('depth_to_cloud')

        self.camera_info = None

        self.cam_sub = self.create_subscription(
            CameraInfo,
            '/depth_camera/camera_info',
            self.info_callback,
            10
        )

        self.depth_sub = self.create_subscription(
            Image,
            '/depth_camera/image',
            self.depth_callback,
            10
        )

        self.cloud_pub = self.create_publisher(
            PointCloud2,
            '/depth/points',
            10
        )

    def info_callback(self, msg: CameraInfo):
        self.camera_info = msg

    def depth_callback(self, msg: Image):
        if self.camera_info is None:
            return

        # Параметры камеры
        fx = self.camera_info.k[0]
        fy = self.camera_info.k[4]
        cx = self.camera_info.k[2]
        cy = self.camera_info.k[5]

        h = msg.height
        w = msg.width

        depth = np.frombuffer(msg.data, dtype=np.float32).reshape(h, w)

        points = []
        for v in range(h):
            for u in range(w):
                z = depth[v, u]
                if z <= 0.0 or np.isnan(z) or np.isinf(z):
                    continue
                x = (u - cx) * z / fx
                y = (v - cy) * z / fy
                points.append((x, y, z))

        if not points:
            return

        fields = [
            PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
            PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
            PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
        ]

        cloud = point_cloud2.create_cloud(
            msg.header,
            fields,
            points
        )
        # frame_id уже glam_bot/base_link/depth_camera из depth image
        self.cloud_pub.publish(cloud)


def main(args=None):
    rclpy.init(args=args)
    node = DepthToCloudNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
