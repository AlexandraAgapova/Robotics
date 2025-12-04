#!/usr/bin/env python3
import math
import argparse
import numpy as np
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
from turtlesim.msg import Pose

def quaternion_from_euler(ai, aj, ak):
    ai /= 2.0
    aj /= 2.0
    ak /= 2.0
    ci = math.cos(ai); si = math.sin(ai)
    cj = math.cos(aj); sj = math.sin(aj)
    ck = math.cos(ak); sk = math.sin(ak)
    cc = ci*ck; cs = ci*sk; sc = si*ck; ss = si*sk
    q = np.empty((4, )); q[0] = cj*sc - sj*cs; q[1] = cj*ss + sj*cc; q[2] = cj*cs - sj*sc; q[3] = cj*cc + sj*ss
    return q

class FramePublisher(Node):
    def __init__(self, name='turtle1'):
        super().__init__(f'turtle_tf2_frame_publisher_{name}')
        self.turtlename = name
        self.tf_broadcaster = TransformBroadcaster(self)
        self.subscription = self.create_subscription(Pose, f'/{self.turtlename}/pose', self.handle_turtle_pose, 1)

    def handle_turtle_pose(self, msg):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'world'
        t.child_frame_id = self.turtlename
        t.transform.translation.x = msg.x
        t.transform.translation.y = msg.y
        t.transform.translation.z = 0.0
        q = quaternion_from_euler(0, 0, msg.theta)
        t.transform.rotation.x = q[0]; t.transform.rotation.y = q[1]; t.transform.rotation.z = q[2]; t.transform.rotation.w = q[3]
        self.tf_broadcaster.sendTransform(t)

class TargetSwitcher(Node):
    def __init__(self, radius, direction):
        super().__init__('target_switcher')
        self.radius = radius
        self.direction = direction
        if self.direction not in [1, -1]: self.direction = 1

        self.turtle_broadcasters = [FramePublisher('turtle1'), FramePublisher('turtle2'), FramePublisher('turtle3')]
        self.tf_broadcaster = TransformBroadcaster(self)
        self.timer = self.create_timer(0.1, self.broadcast_timer_callback)

    def broadcast_timer_callback(self):
        seconds, _ = self.get_clock().now().seconds_nanoseconds()
        angle = -self.direction * seconds
        self._send_tf('turtle1', 'carrot1', self.radius * math.cos(angle), self.radius * math.sin(angle))
        self._send_tf('turtle3', 'carrot2', self.radius * math.cos(-angle), self.radius * math.sin(-angle))
        
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'world'
        t.child_frame_id = 'static_target'
        t.transform.translation.x = 8.0; t.transform.translation.y = 2.0; t.transform.translation.z = 0.0; t.transform.rotation.w = 1.0
        self.tf_broadcaster.sendTransform(t)

    def _send_tf(self, parent, child, x, y):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = parent
        t.child_frame_id = child
        t.transform.translation.x = x; t.transform.translation.y = y; t.transform.translation.z = 0.0; t.transform.rotation.w = 1.0
        self.tf_broadcaster.sendTransform(t)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--radius", type=float, default=2.0)
    parser.add_argument("--direction_of_rotation", type=int, default=1)
    args, _ = parser.parse_known_args()
    
    rclpy.init()
    switcher = TargetSwitcher(args.radius, args.direction_of_rotation)
    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(switcher)
    for b in switcher.turtle_broadcasters: executor.add_node(b)
    
    try: executor.spin()
    except KeyboardInterrupt: pass
    finally:
        for b in switcher.turtle_broadcasters: b.destroy_node()
        switcher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
