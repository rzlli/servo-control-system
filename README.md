# Servo Motor Control System

This repository contains the code and configuration for managing and controlling an array of Servo Motors using the Arduino platform.

## Overview
This project demonstrates the simultaneous control of 4 servo motors to execute specific movement patterns. The system performs a full sweep cycle followed by a stable hold state at a precise angle, serving as an effective educational model for automation and control applications.

## Components
- Microcontroller: Arduino Uno.
- Actuators: 4 Servo Motors.
- Environment: Tinkercad (for simulation and design).

## Functionality
1. Sweep Motion: The system cycles the motors from 0 to 180 degrees and back for a specific duration.
2. Home Positioning: Upon completion of the movement cycle, all motors are automatically directed to stabilize at a 90-degree angle to ensure system balance.

