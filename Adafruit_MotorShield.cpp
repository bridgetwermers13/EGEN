#include "Arduino.h"
#include <Wire.h>
#include "Adafruit_MotorShield.h"
#include <Adafruit_MS_PWMServoDriver.h>

//microstepping curve for the PWM output (8-bit range) with 17 points - last one is start of next step
uint8_t 	microstepcurve [] = {0, 25, 50, 74, 98, 120, 141, 162, 180, 197, 212, 225, 236, 244, 250, 253, 255}
