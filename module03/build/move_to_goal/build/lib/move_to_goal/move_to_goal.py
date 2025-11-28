import sys
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from math import pow, atan2, sqrt, pi

class TurtleBot(Node):

    def __init__(self):
        super().__init__('move_to_goal')
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.subscriber_ = self.create_subscription(Pose, '/turtle1/pose', self.update_pose, 10)
        self.pose = Pose()
        self.timer = self.create_timer(0.1, self.move2goal)
        
        # [1] - x, [2] - y, [3] - theta
        if len(sys.argv) < 4:
            self.get_logger().error("Please provide x, y, theta arguments")
            sys.exit(1)
            
        self.goal_x = float(sys.argv[1])
        self.goal_y = float(sys.argv[2])
        self.goal_theta = float(sys.argv[3])
        
        self.get_logger().info(f"Goal received: x={self.goal_x}, y={self.goal_y}, theta={self.goal_theta}")

    def update_pose(self, data):
        self.pose = data
        self.pose.x = round(self.pose.x, 4)
        self.pose.y = round(self.pose.y, 4)

    def euclidean_distance(self, goal_x, goal_y):
        return sqrt(pow((goal_x - self.pose.x), 2) + pow((goal_y - self.pose.y), 2))

    def linear_vel(self, goal_x, goal_y, constant=1.5):
        return constant * self.euclidean_distance(goal_x, goal_y)

    def steering_angle(self, goal_x, goal_y):
        return atan2(goal_y - self.pose.y, goal_x - self.pose.x)

    def angular_vel(self, goal_angle, constant=6):
        return constant * (goal_angle - self.pose.theta)

    def move2goal(self):
        goal_pose = Pose()
        goal_pose.x = self.goal_x
        goal_pose.y = self.goal_y
        goal_pose.theta = self.goal_theta

        distance_tolerance = 0.1
        angle_tolerance = 0.05

        vel_msg = Twist()

        # Движение к точке (координатам)
        if self.euclidean_distance(goal_pose.x, goal_pose.y) >= distance_tolerance:
            
            # Линейная скорость пропорциональна расстоянию
            vel_msg.linear.x = self.linear_vel(goal_pose.x, goal_pose.y)
            
            # Мы вычисляем угол МЕЖДУ черепахой и точкой назначения
            target_angle = self.steering_angle(goal_pose.x, goal_pose.y)
            vel_msg.angular.z = self.angular_vel(target_angle)
            
        # достигли точки, теперь поворот на угол theta
        else:
            vel_msg.linear.x = 0.0
            
            # Разница межлу текущим углом и финальным
            angle_diff = goal_pose.theta - self.pose.theta
            
            if abs(angle_diff) > angle_tolerance:
                vel_msg.angular.z = self.angular_vel(goal_pose.theta, constant=2)
            else:
                vel_msg.angular.z = 0.0
                self.publisher_.publish(vel_msg)
                self.get_logger().info("Goal Reached!")
                quit()

        self.publisher_.publish(vel_msg)

def main(args=None):
    rclpy.init(args=args)
    x = TurtleBot()
    rclpy.spin(x)
    x.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
