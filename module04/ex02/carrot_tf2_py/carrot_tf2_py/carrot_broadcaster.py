import math
from geometry_msgs.msg import TransformStamped
import rclpy
from rclpy.node import Node
from tf2_ros import TransformBroadcaster


class CarrotBroadcaster(Node):

    def __init__(self):
        super().__init__('carrot_broadcaster')
        
        # Declare parameters
        self.radius = self.declare_parameter(
            'radius', 2.0).get_parameter_value().double_value
        
        self.direction_of_rotation = self.declare_parameter(
            'direction_of_rotation', 1).get_parameter_value().integer_value
        
        # Validate direction parameter
        if self.direction_of_rotation not in [1, -1]:
            self.get_logger().warn(
                f'Invalid direction_of_rotation: {self.direction_of_rotation}. '
                'Using default value 1 (clockwise)')
            self.direction_of_rotation = 1
        
        self.get_logger().info(f'Carrot radius: {self.radius}')
        self.get_logger().info(
            f'Rotation direction: {"clockwise" if self.direction_of_rotation == 1 else "counter-clockwise"}')
        
        # Initialize the transform broadcaster
        self.tf_broadcaster = TransformBroadcaster(self)
        
        # Timer for broadcasting transform
        self.timer = self.create_timer(0.1, self.broadcast_timer_callback)

    def broadcast_timer_callback(self):
        # Get current time in seconds
        seconds, nanoseconds = self.get_clock().now().seconds_nanoseconds()
        
        # Calculate angle: positive for clockwise (1), negative for counter-clockwise (-1)
        # Note: in ROS/math, positive rotation is counter-clockwise in 2D
        # So we need to negate for "clockwise" direction
        angle = -self.direction_of_rotation * (seconds * 1.0)  # radians per second
        
        # Calculate carrot position relative to turtle1
        x = self.radius * math.cos(angle)
        y = self.radius * math.sin(angle)
        
        # Create and send transform
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'turtle1'
        t.child_frame_id = 'carrot'
        
        t.transform.translation.x = x
        t.transform.translation.y = y
        t.transform.translation.z = 0.0
        
        # No rotation for carrot frame
        t.transform.rotation.x = 0.0
        t.transform.rotation.y = 0.0
        t.transform.rotation.z = 0.0
        t.transform.rotation.w = 1.0
        
        self.tf_broadcaster.sendTransform(t)


def main():
    rclpy.init()
    node = CarrotBroadcaster()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    rclpy.shutdown()


if __name__ == '__main__':
    main()
