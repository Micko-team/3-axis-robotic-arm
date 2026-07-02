3-Axis Robotic Arm 🤖

A simple 3-axis robotic arm built using Arduino and servo motors as an educational embedded systems project.

Overview

This project demonstrates the design and implementation of a 3-axis robotic arm controlled by an Arduino. The goal was not only to build the robotic arm but also to understand the hardware challenges involved in powering and controlling multiple servo motors.

Hardware
Arduino Uno
4 × Servo Motors
LM2596 Buck Converter Module
External DC Adapter
Jumper Wires
Robotic Arm Chassis
Challenges
1. Servo Power Supply

At the beginning of the project, we attempted to use an L293D motor driver to drive the servo motors. This approach was unsuccessful because hobby servo motors already contain their own motor driver circuitry and require PWM control rather than an H-bridge driver.

The solution was to power the servos from an external regulated 5 V supply using an LM2596 buck converter while keeping a common ground between the Arduino and the external power supply.

2. Position Stability

One of the biggest challenges was maintaining the first (base) servo at the exact desired position. Mechanical load, servo characteristics, and small position errors required several rounds of testing and tuning.

Repository Contents
Arduino source code
Servo control logic
Project documentation
Future Improvements
Inverse kinematics implementation
Smooth trajectory planning
Joystick control
Bluetooth/Wi-Fi control using ESP32
Better mechanical precision
Team

This project was developed by the Micko Team.

Special thanks to Erfan for his valuable collaboration throughout the project.

License

This project is released under the MRL License.
