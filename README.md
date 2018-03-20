# TwoPololuDualVNH5012
The modified version of the Pololu Dual VNH5012 motor driver code to use two VNH5012 drivers

Pololu is a dc motor and motor driver manufacturer. In my graduation project, I used 4 Pololu DC motors and two Pololu 
Dual VNH5012 DC motor drivers. Each Dual VNH5012 is capable of driving two DC motors simultaneously. However, using the original 
driver library published by Pololu, it was not possible to operate two Dual VNH5012 drivers simultaneously. This modified version of the
library is capable of using two Dual VNH5012 drivers at the same time. You have to be using an Arduino MEGA.

IMPORTANT NOTES:
- Almost everything about the usage of this library is identical with the original version of the library. So you can still use the 
VNH5012 manual published by Pololu.

- If you want to operate two Dual VNH5012 drivers, then only thing you have to be careful about is to plug the PWM1, PWM2, PWM3 and 
PWM4 pins of two drivers to the digital pins 5, 11, 7 and 8 of the Arduino MEGA respectively.

- Do not use the default constructor if you want to use two Dual VNH5012 drivers.

Note: PWM1 and PWM2 pins are refered to your first VNH5012's pwm1 and pwm2 pins. PWM3 and PWM4 pins are refered to your second 
VNH5012's pwm1 and pwm2 pins.
