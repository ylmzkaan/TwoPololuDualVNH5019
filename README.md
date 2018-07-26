# TwoPololuDualVNH5012
The modified version of the Pololu Dual VNH5019 motor driver library to use two VNH5019 drivers simultaneously. 

Pololu is a DC motor and motor driver circiut manufacturer. In my graduation project, I used 4 Pololu DC motors and two Pololu 
Dual VNH5019 DC motor drivers. Each Dual VNH5019 is capable of driving two DC motors simultaneously. However, the original 
VNH5019 driver library published by Pololu did not allow me to operate two Dual VNH5019 drivers simultaneously so that it would be possible to drive all 4 motors simultaneously. 

This modified version of the library is capable of using two Dual VNH5019 drivers at the same time. You have to be using an Arduino MEGA.

IMPORTANT NOTES:
- Almost everything about the usage of this library is identical with the original version of the library. So you can still use the 
VNH5019 manual published by Pololu.

- If you want to operate two Dual VNH5019 drivers  simultaneously, then only thing you have to be careful about is to plug the PWM1, PWM2, PWM3 and PWM4 pins of the two Dual VNH5019 drivers to the digital pins 5, 11, 7 and 8 of the Arduino MEGA respectively.

- Do not use the default constructor if you want to use two Dual VNH5012 drivers simultaneously.

Note: In the source code, PWM1 and PWM2 pins are refered to your first VNH5019's pwm1 and pwm2 pins. PWM3 and PWM4 pins are refered to your second VNH5012's pwm1 and pwm2 pins.

For more information about Dual VNH5019 please refer to the below link:

https://www.pololu.com/product/2507
