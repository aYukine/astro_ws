#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from ds4_driver_msgs.msg import Report
from custom_messages.msg import MotorCommand

import socket

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

server_address = ('0.0.0.0', 12300)
sock.bind(server_address)

class ControlNode(Node):
    def __init__(self):
        Node.__init__(self, 'control_node') 
        self.remote_listener = self.create_publisher(Report, '/pad', self.callback, 10)
        self.V_max = 0.5 # max velocity
        self.W_max = 2.0 # max rotation velocity
        self.r = 0.04 # radius of wheel
        self.lx = 14 # length between front and rear wheel divided by 2
        self.ly = 13 # lenhth between right and left wheel devided by 2
    
    def data_listener(self):
        while True:
            # Receive data from the client
            data, address = sock.recvfrom(1024)
            data = data.decode('utf-8')
            data = data.split(',')
            x_part = data[0].split(':')[1].strip()
            y_part = data[1].split(':')[1].strip()

            # Convert to float
            x = float(x_part)
            y = float(y_part)
            print({x}, {y})
