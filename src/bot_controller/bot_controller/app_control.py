#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from custom_messages.msg import MotorCommand, GameSir, EncoderFeedback
import math
import numpy as np
import time

class ControlNode(Node):
    def __init__(self):
        Node.__init__(self, 'control_node') 
        self.remote_listener = self.create_subscription(GameSir, '/pad', self.callback, 10)
        self.can_publisher = self.create_publisher(MotorCommand, '/publish_motor', 10)
        self.feedback_listener = self.create_subscription(EncoderFeedback, '/encoder_feedback', self.encoder_callback, 10)
        self.V_max = 1.0 # max velocity
        self.W_max = 1.5 # max rotation velocity
        self.r = 0.05010380622 * 3.62 / 3.74 # radius of wheel
        self.lx = 0.29 / 2 # length between front and rear wheel divided by 2
        self.ly = 0.263 / 2 # lenhth between right and left wheel devided by 2
        #self.lx = 0.2504 / 2
        #self.ly = 0.2504 / 2

        self.l = 0.26 * 6.75 / 6.28

        self.yaw = 0
        self.global_x = 0
        self.global_y = 0
        self.receive = [0, 0, 0, 0]
        self.wheel_array = np.array([0.0, 0.0, 0.0, 0.0])
        self.wheel_position_array = [0.0, 0.0, 0.0, 0.0]
        self.previous_time = time.perf_counter()


        self.w1_count = 0
        self.w2_count = 0
        self.w3_count = 0
        self.w4_count = 0
    
    def callback(self, msg):

        x1 = (msg.x1 - 128) / 128
        y1 = (msg.y1 - 128) / 128
        x2 = (msg.x2 - 128) / 128

        if abs(x1) < 0.05:
            x1 = 0
        if abs(x2) < 0.05:
            x2 = 0
        if abs(y1) < 0.05:
            y1 = 0

        self.move(x1, y1, x2)

    def move(self, x, y, a):
        # get desired speed value
        Vx = -x*self.V_max
        Vy = -y*self.V_max
        Wz = -a*self.W_max

        w1 = (Vx - Vy - Wz *(self.l)) / self.r # Front-left
        w2 = (Vx + Vy + Wz *(self.l)) / self.r # Front-right
        w3 = (Vx - Vy + Wz *(self.l)) / self.r # Rear-right
        w4 = (Vx + Vy - Wz *(self.l)) / self.r # Rear-left

        can_msg1 = MotorCommand() 
        can_msg2 = MotorCommand() 
        can_msg3 = MotorCommand() 
        can_msg4 = MotorCommand() 

        can_msg1.can_id = 1
        can_msg1.speedmode = True
        can_msg1.goal = w1

        can_msg2.can_id = 2
        can_msg2.speedmode = True
        can_msg2.goal = w2

        can_msg3.can_id = 3
        can_msg3.speedmode = True
        can_msg3.goal = w3

        can_msg4.can_id = 4
        can_msg4.speedmode = True
        can_msg4.goal = w4

        #print(w1, w2, w3, w4)

        self.can_publisher.publish(can_msg1)
        self.can_publisher.publish(can_msg2)
        self.can_publisher.publish(can_msg3)
        self.can_publisher.publish(can_msg4)


    def encoder_callback(self, msg):
        self.wheel_array[255-msg.can_id-1] = msg.speed
        self.wheel_position_array[255 - msg.can_id - 1] = msg.position
        self.receive[255-msg.can_id-1] = 1

        #print(self.wheel_position_array[3])

        if sum(self.receive) == 4:
            self.receive = [0, 0, 0, 0]
            self.calculate_global()

    def calculate_global(self):
        w1, w2, w3, w4 = self.wheel_array[0], self.wheel_array[1], self.wheel_array[2], self.wheel_array[3]
        Ts = time.perf_counter() - self.previous_time
        self.previous_time = time.perf_counter()
        Vx = (self.r/4) * (w1 + w2 + w3 + w4)
        Vy = -(self.r/4) * (w1 - w2 + w3 - w4)
        Wz = self.r / 4 / (self.l) * (-w1 + w2 + w3 - w4)
        self.yaw = self.yaw + Wz * Ts

        V_global_x = math.cos(self.yaw) * Vx - math.sin(self.yaw) * Vy
        V_global_y = math.sin(self.yaw) * Vx + math.cos(self.yaw) * Vy

        self.global_x += V_global_x * Ts
        self.global_y += V_global_y * Ts

        print(f"{self.global_x:.2f}, {self.global_y:.2f}, {self.yaw:.2f}, {Ts:.4f}")


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
