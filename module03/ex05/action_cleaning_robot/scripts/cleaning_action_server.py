#!/usr/bin/env python3

import math
import time
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from action_cleaning_robot.action import CleaningTask

DISTANCE_TOLERANCE = 0.1
ANGLE_TOLERANCE = 0.05
LINEAR_P_GAIN = 1.5
ANGULAR_P_GAIN = 6.0
MAX_LINEAR_VELOCITY = 2.0
MAX_ANGULAR_VELOCITY = 2.0

class CleaningActionServer(Node):

    def __init__(self):
        super().__init__('cleaning_action_server')
        
        self._callback_group = ReentrantCallbackGroup()

        self._action_server = ActionServer(
            self,
            CleaningTask,
            'cleaning_task',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            callback_group=self._callback_group)
        
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.subscription = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        
        self.current_pose = None
        self.get_logger().info('Cleaning Action Server started')

    def pose_callback(self, msg):
        self.current_pose = msg

    def goal_callback(self, goal_request):
        self.get_logger().info(f'Received goal: {goal_request.task_type}')
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info('Goal cancelled')
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        goal = goal_handle.request
        feedback_msg = CleaningTask.Feedback()
        result = CleaningTask.Result()

        while self.current_pose is None:
            self.get_logger().info('Waiting for pose data...')
            time.sleep(0.1)

        if goal.task_type == 'clean_square':
            self.clean_square(goal_handle, feedback_msg, result, 
                              goal.target_x, goal.target_y, goal.area_size)
        elif goal.task_type == 'return_home':
            self.return_home(goal_handle, feedback_msg, result, 
                             goal.target_x, goal.target_y)
        else:
            self.get_logger().info(f'Unknown task type: {goal.task_type}')
            goal_handle.abort()
            return CleaningTask.Result()

        if result.success:
            goal_handle.succeed()
        else:
            # Если было отменено внутри функции
            pass
            
        return result

    def clean_square(self, goal_handle, feedback, result, start_x, start_y, size):
        self.get_logger().info(f'Moving to target: {start_x:.2f}x{start_y:.2f}')
        self.move_to_point(start_x, start_y)

        self.get_logger().info(f'Cleaning square: {size:.2f}x{size:.2f}')

        total_points = 8
        points_cleaned = 0
        
        current_x = float(start_x)
        current_y = float(start_y)
        up = False
        move_x = float(size)

        for i in range(total_points):
            if not rclpy.ok() or goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result.success = False
                return

            self.move_to_point(current_x, current_y)

            if up:
                current_y += size / 4.0
            else:
                current_x += move_x
                move_x *= -1.0
            
            up = not up
            points_cleaned += 1

            feedback.progress_percent = int((i + 1) * 100 / total_points)
            feedback.current_cleaned_points = points_cleaned
            feedback.current_x = self.current_pose.x
            feedback.current_y = self.current_pose.y
            goal_handle.publish_feedback(feedback)
            
            time.sleep(0.5)

        result.success = True
        result.cleaned_points = points_cleaned
        result.total_distance = size * 4.0 

    def return_home(self, goal_handle, feedback, result, home_x, home_y):
        self.get_logger().info(f'Returning home: ({home_x:.2f}, {home_y:.2f})')
        
        self.move_to_point(home_x, home_y)
        
        feedback.progress_percent = 100
        feedback.current_cleaned_points = 0
        feedback.current_x = self.current_pose.x
        feedback.current_y = self.current_pose.y
        goal_handle.publish_feedback(feedback)
        
        result.success = True
        result.cleaned_points = 0
        result.total_distance = 0.0 

    def move_to_point(self, target_x, target_y):
        msg = Twist()
        
        while rclpy.ok():
            dx = target_x - self.current_pose.x
            dy = target_y - self.current_pose.y
            distance = math.sqrt(dx**2 + dy**2)
            
            if distance <= DISTANCE_TOLERANCE:
                msg.linear.x = 0.0
                msg.angular.z = 0.0
                self.publisher_.publish(msg)
                break

            target_angle = math.atan2(dy, dx)
            angle_error = target_angle - self.current_pose.theta

            # Normalize angle
            while angle_error > math.pi: angle_error -= 2 * math.pi
            while angle_error < -math.pi: angle_error += 2 * math.pi

            if abs(angle_error) > ANGLE_TOLERANCE:
                msg.angular.z = ANGULAR_P_GAIN * angle_error
                msg.linear.x = 0.0
            else:
                msg.linear.x = LINEAR_P_GAIN * distance
                msg.angular.z = ANGULAR_P_GAIN * angle_error

            msg.linear.x = max(min(msg.linear.x, MAX_LINEAR_VELOCITY), -MAX_LINEAR_VELOCITY)
            msg.angular.z = max(min(msg.angular.z, MAX_ANGULAR_VELOCITY), -MAX_ANGULAR_VELOCITY)

            self.publisher_.publish(msg)
            time.sleep(0.1)

def main(args=None):
    rclpy.init(args=args)
    node = CleaningActionServer()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
