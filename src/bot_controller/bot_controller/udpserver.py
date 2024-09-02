#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from custom_messages.msg import GameSir
import socket


class ControlNode(Node):
    def __init__(self):
        Node.__init__(self, 'control_node') 
        self.datapub = self.create_publisher(GameSir, '/pad', 10)
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        server_address = ('0.0.0.0', 25000)
        self.sock.bind(server_address)
        self.timer = self.create_timer(0.01, self.timer_callback)

    def timer_callback(self):
        msg = GameSir()
        data = self.sock.recv(1024)
        msg.x1 = data[0]
        msg.y1 = data[1]
        msg.x2 = data[2]
        msg.y2 = data[3]
        print(data)
        self.datapub.publish(msg)

    def odom_callback(self):
        pass
    
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
