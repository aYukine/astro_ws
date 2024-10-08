#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from ds4_driver_msgs.msg import Report
from custom_messages.msg import MotorCommand, MotorFeedback
from nav_msgs.msg import Odometry
import numpy as np
import math

class ControlNode(Node):
    def __init__(self):
        Node.__init__(self, 'control_node') 
        self.remote_listener = self.create_subscription(Report, '/raw_report', self.callback, 10)
        self.feedback_listener = self.create_subscription(MotorFeedback, '/motor_feedback', self.encoder_callback, 10)
        self.can_publisher = self.create_publisher(MotorCommand, '/publish_motor', 10)
        self.location_pub = self.create_publisher(Odometry, '/odom', 10)
        self.V_max = 0.5 # max velocity
        self.W_max = 2.0 # max rotation velocity
        self.r = 0.04 # radius of wheel
        self.lx = 14 # length between front and rear wheel divided by 2
        self.ly = 13 # lenhth between right and left wheel devided by 2
        self.global_x = 0
        self.global_y = 0
        self.receive = [0, 0, 0, 0]
        self.wheel_array = np.array([0, 0, 0, 0])

    def callback(self, msg):

        # convert ps4 joystick value to -1 to 1
        x1 = (msg.left_analog_x - 128) / 128
        y1 = (msg.left_analog_y - 128) / 128
        x2 = (msg.right_analog_x - 128) / 128

        if abs(x1) < 0.05:
            x1 = 0
        if abs(x2) < 0.05:
            x2 = 0
        if abs(y1) < 0.05:
            y1 = 0

        self.move(x1, y1, x2)


    def desired_callback(self, msg):
        Vx = abs(self.global_x - msg.x)
        Vy = abs(self.global_y - msg.y)
        l = Vx + Vy
        Vx /= l
        Vy /= l

        self.move(Vx, Vy, 0)

    def move(self, x, y, a):
        # get desired speed value
        Vx = x*self.V_max
        Vy = y*self.V_max
        Wz = a*self.W_max

        w1 = (Vx - Vy - Wz *(self.lx + self.ly)) / self.r # Front-left
        w2 = (Vx + Vy + Wz *(self.lx + self.ly)) / self.r # Front-right
        w3 = (Vx - Vy + Wz *(self.lx + self.ly)) / self.r # Rear-right
        w4 = (Vx + Vy - Wz *(self.lx + self.ly)) / self.r # Rear-left


        can_msg1 = MotorCommand() 
        can_msg2 = MotorCommand() 
        can_msg3 = MotorCommand() 
        can_msg4 = MotorCommand() 

        can_msg1.motor_id = 1
        can_msg1.speedmode = True
        can_msg1.goal = w1

        can_msg2.motor_id = 2
        can_msg2.speedmode = True
        can_msg2.goal = w2

        can_msg3.motor_id = 3
        can_msg3.speedmode = True
        can_msg3.goal = w3

        can_msg4.motor_id = 4
        can_msg4.speedmode = True
        can_msg4.goal = w4

        self.can_publisher.publish(can_msg1)
        self.can_publisher.publish(can_msg2)
        self.can_publisher.publish(can_msg3)
        self.can_publisher.publish(can_msg4)

    def encoder_callback(self, msg):
        self.wheel_array[255-msg.motor_id-1] = msg.speed
        self.receive[255-msg.motor_id-1] = 1

        if sum(self.receive) == 4:
            self.receive
            self.calculate_global()

    def calculate_global(self):
        Vx = (self.r/4) * sum(self.wheel_array)
        Vy = -(self.r/4) * sum(self.wheel_array)
        Wz = (self.r / (2 * (self.lx + self.ly))) * (self.wheel_array[0] - self.wheel_array[2])

        self.Vx_global = math.cos(Wz) * Vx - math.sin(Wz) * Vy
        self.Vy_global = math.sin(Wz) * Vx + math.cos(Wz) * Vy
    
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
