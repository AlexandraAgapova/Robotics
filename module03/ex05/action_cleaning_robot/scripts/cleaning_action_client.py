#!/usr/bin/env python3

import sys
import time
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from action_cleaning_robot.action import CleaningTask

class CleaningActionClient(Node):

    def __init__(self):
        super().__init__('cleaning_action_client')
        self._action_client = ActionClient(self, CleaningTask, 'cleaning_task')
        self.get_logger().info('Cleaning Action Client started')

    def send_goal_sync(self, task_type, x, y, size=0.0):
        if not self._action_client.wait_for_server(timeout_sec=10.0):
            self.get_logger().error('Action server not available')
            return

        goal_msg = CleaningTask.Goal()
        goal_msg.task_type = task_type
        goal_msg.target_x = float(x)
        goal_msg.target_y = float(y)
        goal_msg.area_size = float(size)

        self.get_logger().info(f'Sending goal: {task_type}')
        
        send_goal_future = self._action_client.send_goal_async(
            goal_msg, 
            feedback_callback=self.feedback_callback
        )
        
        # Ждем подтверждения приема цели
        rclpy.spin_until_future_complete(self, send_goal_future)
        goal_handle = send_goal_future.result()

        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted!')

        # Ждем результата выполнения
        get_result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, get_result_future)
        
        result = get_result_future.result().result
        status = get_result_future.result().status
        
        # Проверяем статус
        if status == 4: # STATUS_SUCCEEDED
            self.get_logger().info(f'{task_type} succeeded! Cleaned {result.cleaned_points} points, distance: {result.total_distance:.2f}')
        else:
             self.get_logger().info(f'Goal failed with status: {status}')

        # Пауза
        time.sleep(5)

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(
            f'Feedback: {feedback.progress_percent}% complete, '
            f'cleaned {feedback.current_cleaned_points} points, '
            f'at ({feedback.current_x:.2f}, {feedback.current_y:.2f})'
        )

def main(args=None):
    rclpy.init(args=args)
    
    if len(sys.argv) < 4:
        print("Usage: ros2 run action_cleaning_robot cleaning_action_client <command> <x> <y> <size>")
        print("(Ignore <size> for return_home command)")
        return 1

    client = CleaningActionClient()
    
    command = sys.argv[1]
    try:
        x = float(sys.argv[2])
        y = float(sys.argv[3])
        
        if command == 'clean_square':
            if len(sys.argv) < 5:
                print("Error: size argument required for clean_square")
                return 1
            size = float(sys.argv[4])
            client.send_goal_sync('clean_square', x, y, size)
            
        elif command == 'return_home':
            client.send_goal_sync('return_home', x, y)
            
        else:
            print(f"Unknown command: {command}")
            return 1
            
    except ValueError:
        print("Error: coordinates and size must be numbers")
        return 1
    except KeyboardInterrupt:
        pass

    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
