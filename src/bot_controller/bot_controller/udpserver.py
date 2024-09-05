#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from custom_messages.msg import GameSir
import socket


class GameSirNode(Node):
    def __init__(self):
        Node.__init__(self, 'gamesir_node') 
        self.datapub = self.create_publisher(GameSir, '/pad', 10)
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        server_address = ('0.0.0.0', 25000)
        self.sock.bind(server_address)
        while True:
            self.timer_callback()

    def timer_callback(self):
        msg = GameSir()
        data = self.sock.recv(20)
        msg.x1 = data[0]
        msg.y1 = data[1]
        msg.x2 = data[2]
        msg.y2 = data[3]
        msg.up = bool(data[4])
        msg.left = bool(data[5])
        msg.right = bool(data[6])
        msg.down = bool(data[7])
        msg.y = bool(data[8])
        msg.x = bool(data[9])
        msg.b = bool(data[10])
        msg.a = bool(data[11])
        msg.lt = bool(data[12])
        msg.lb = bool(data[13])
        msg.rt = bool(data[14])
        msg.rb = bool(data[15])
        msg.m1 = bool(data[16])
        msg.m2 = bool(data[17])

        self.datapub.publish(msg)

    def odom_callback(self):
        pass
    
def main(args=None):
    rclpy.init(args=args)
    gamesir_node = GameSirNode()
    try:
        rclpy.spin(gamesir_node)
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()

if __name__ == '__main__':
    main()
