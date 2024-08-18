#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from ds4_driver_msgs.msg import Report
from custom_messages.msg import MotorCommand

class ControlNode(Node):
    def __init__(self):
        Node.__init__(self, 'control_node') 
        self.remote_listener = self.create_subscription(Report, '/raw_report', self.callback, 10)
        self.can_publisher = self.create_publisher(MotorCommand, '/publish_motor', 10)
        self.motor_speed = 40.0

def callback(self, msg):
    x = (msg.left_analog_x - 128) / 128
    y = (msg.left_analog_y - 128) / 128
    rotation = (msg.right_analog_x - 128) / 128

    wheelbase = 0.5 # suppose to be distant between the front right and left back or whatever 

    W = rotation * 2 

    V1 = x - y - (wheelbase * W)
    V2 = x + y + (wheelbase * W)
    V3 = x + y - (wheelbase * W)
    V4 = x - y + (wheelbase * W)

    can_msg1 = MotorCommand()  # Front-left
    can_msg2 = MotorCommand()  # Front-right
    can_msg3 = MotorCommand()  # Rear-left
    can_msg4 = MotorCommand()  # Rear-right

    can_msg1.motor_id = 1
    can_msg1.speedmode = True
    can_msg1.goal = V1 * self.motor_speed

    can_msg2.motor_id = 2
    can_msg2.speedmode = True
    can_msg2.goal = V2 * self.motor_speed

    can_msg3.motor_id = 3
    can_msg3.speedmode = True
    can_msg3.goal = V3 * self.motor_speed

    can_msg4.motor_id = 4
    can_msg4.speedmode = True
    can_msg4.goal = V4 * self.motor_speed

    self.can_publisher.publish(can_msg1)
    self.can_publisher.publish(can_msg2)
    self.can_publisher.publish(can_msg3)
    self.can_publisher.publish(can_msg4)
    
def main(args=None):
    rclpy.init(args=args)
    control_node = ControlNode()
    try:
        rclpy.spin(control_node)
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()

if __name__ == '__main__':
    main()
