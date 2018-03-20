#ifndef DualVNH5019MotorShield_h
#define DualVNH5019MotorShield_h

#include <Arduino.h>

class DualVNH5019MotorShield
{
  public:  
    // CONSTRUCTORS
    DualVNH5019MotorShield(); // Default pin selection.

    DualVNH5019MotorShield(unsigned char INA1, unsigned char INB1, unsigned char EN1DIAG1, unsigned char CS1, 
                           unsigned char INA2, unsigned char INB2, unsigned char EN2DIAG2, unsigned char CS2,
						   unsigned char INA3, unsigned char INB3, unsigned char EN3DIAG3, unsigned char CS3,
						   unsigned char INA4, unsigned char INB4, unsigned char EN4DIAG4, unsigned char CS4); //User-defined pin selection. 
                           
    DualVNH5019MotorShield(unsigned char INA1, unsigned char INB1, 
                           unsigned char EN1DIAG1, unsigned char CS1, 
                           unsigned char PWM1, unsigned char INA2,
                           unsigned char INB2, unsigned char EN2DIAG2, 
                           unsigned char CS2, unsigned char PWM2,
						   unsigned char INA3, unsigned char INB3,
						   unsigned char EN3DIAG3, unsigned char CS3,
						   unsigned char PWM3, unsigned char INA4,
						   unsigned char INB4, unsigned char EN4DIAG4,
						   unsigned char CS4, unsigned char PWM4); // User-defined pin selection, with PWM pins
  
    // PUBLIC METHODS
    void init(); // Initialize TIMER 1, set the PWM to 20kHZ. 
    void setM1Speed(int speed); // Set speed for M1.
    void setM2Speed(int speed); // Set speed for M2.
    void setM3Speed(int speed); // Set speed for M3.
    void setM4Speed(int speed); // Set speed for M4.
    void setSpeeds(int m1Speed, int m2Speed, int m3Speed, int m4Speed); // Set speed for all motors.
    void setM1Brake(int brake); // Brake M1. 
    void setM2Brake(int brake); // Brake M2.
    void setM3Brake(int brake); // Brake M3.
    void setM4Brake(int brake); // Brake M4.
    void setBrakes(int m1Brake, int m2Brake, int m3Brake, int m4Brake); // Brake all motors.
    unsigned int getM1CurrentMilliamps(); // Get current reading for M1. 
    unsigned int getM2CurrentMilliamps(); // Get current reading for M2.
    unsigned int getM3CurrentMilliamps(); // Get current reading for M3.
    unsigned int getM4CurrentMilliamps(); // Get current reading for M4.
    unsigned char getM1Fault(); // Get fault reading from M1.
    unsigned char getM2Fault(); // Get fault reading from M2.
    unsigned char getM3Fault(); // Get fault reading from M3.
    unsigned char getM4Fault(); // Get fault reading from M4.
    
  private:
    unsigned char _INA1;
    unsigned char _INB1;
    unsigned char _PWM1;
    unsigned char _EN1DIAG1;
    unsigned char _CS1;
    unsigned char _INA2;
    unsigned char _INB2;
    unsigned char _PWM2;
    unsigned char _EN2DIAG2;
    unsigned char _CS2;
    volatile uint16_t* _PWM1_REG;
    volatile uint16_t* _PWM2_REG;
    unsigned char _INA3;
    unsigned char _INB3;
    unsigned char _PWM3;
    unsigned char _EN3DIAG3;
    unsigned char _CS3;
    unsigned char _INA4;
    unsigned char _INB4;
    unsigned char _PWM4;
    unsigned char _EN4DIAG4;
    unsigned char _CS4;
    volatile uint16_t* _PWM3_REG;
    volatile uint16_t* _PWM4_REG;
    
};

#endif
