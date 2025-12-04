#!/usr/bin/env python3
import math
import sys
import termios
import tty
import threading
from functools import partial
import argparse
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from tf2_ros import TransformListener, Buffer, TransformException
from turtlesim.srv import Spawn
from std_msgs.msg import String
from turtle_multi_target.msg import CurrentTarget

class TurtleController(Node):
    def __init__(self, switch_threshold):
        super().__init__('turtle_controller')
        self.switch_threshold = switch_threshold
        self.targets = ['carrot1', 'carrot2', 'static_target']
        self.current_target_index = 0
        self.current_target = self.targets[self.current_target_index]
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.cmd_pub = self.create_publisher(Twist, '/turtle2/cmd_vel', 10)
        self.target_pub = self.create_publisher(CurrentTarget, '/current_target', 10)
        self.spawner = self.create_client(Spawn, 'spawn')
        self.turtles = [('turtle2', (4.0, 2.0, 0.0)), ('turtle3', (3.0, 3.0, 0.0))]
        self.spawn_index = 0
        self.timer = self.create_timer(0.1, self.on_timer)
        threading.Thread(target=self.keyboard_listener, daemon=True).start()
        self.get_logger().info(f"Turtle controller started. Current: {self.current_target}")

    def keyboard_listener(self):
        while True:
            try:
                key = self.getch()
                if key == 'n': self.switch_target()
                elif key == 'q': sys.exit()
            except Exception: pass

    def getch(self):
        fd = sys.stdin.fileno()
        old = termios.tcgetattr(fd)
        try:
            tty.setraw(fd)
            ch = sys.stdin.read(1)
        finally: termios.tcsetattr(fd, termios.TCSADRAIN, old)
        return ch

    def switch_target(self):
        self.current_target_index = (self.current_target_index + 1) % len(self.targets)
        self.current_target = self.targets[self.current_target_index]
        self.get_logger().info(f"Switched to target: {self.current_target}")

    def on_timer(self):
        if self.spawn_index < len(self.turtles):
            name, (x, y, theta) = self.turtles[self.spawn_index]
            if not self.spawner.service_is_ready(): return
            request = Spawn.Request(name=name, x=x, y=y, theta=theta)
            future = self.spawner.call_async(request)
            future.add_done_callback(partial(self.spawn_callback, name=name))
            return
        try: trans = self.tf_buffer.lookup_transform('turtle2', self.current_target, rclpy.time.Time())
        except TransformException: return
        
        dx = trans.transform.translation.x; dy = trans.transform.translation.y
        dist = math.sqrt(dx*dx + dy*dy)
        
        cmd = Twist()
        cmd.angular.z = 2.0 * math.atan2(dy, dx)
        cmd.linear.x = 1.0 * dist
        self.cmd_pub.publish(cmd)
        
        msg = CurrentTarget()
        msg.target_name = self.current_target
        msg.target_x = trans.transform.translation.x
        msg.target_y = trans.transform.translation.y
        msg.distance_to_target = dist
        self.target_pub.publish(msg)
        
        if dist < self.switch_threshold: self.switch_target()

    def spawn_callback(self, future, name):
        try:
            if future.result(): self.get_logger().info(f"Spawned {name}"); self.spawn_index += 1
        except Exception: self.spawn_index += 1 # Игнор ошибок если уже существует

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--switch_threshold", type=float, default=1.5)
    args, _ = parser.parse_known_args()
    rclpy.init()
    node = TurtleController(args.switch_threshold)
    try: rclpy.spin(node)
    except KeyboardInterrupt: pass
    finally: rclpy.shutdown()

if __name__ == '__main__':
    main()
