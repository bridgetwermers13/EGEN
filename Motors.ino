#include <Adafruit_MotorShield.h>
// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
// Or, create it with a different I2C address (say for stacking)
// Adafruit_MotorShield AFMS = Adafruit_MotorShield(0x61);

// Select which 'port' M1, M2, M3 or M4. In this case, M1
Adafruit_DCMotor *myMotor = AFMS.getMotor(1);
// You can also make another motor on port M2
//Adafruit_DCMotor *myOtherMotor = AFMS.getMotor(2);
/* Buffer to hold incoming characters */
uint8_t packetbuffer[READ_BUFSIZE+1];

 //DC motors

 Serial.print("tick");
  myMotor->run(FORWARD);
  for (i=0; i<255; i++) {
    myMotor->setSpeed(i);  
    delay(10);
  }
    
  Serial.print("tock");
  myMotor->run(BACKWARD);
  for (i=0; i<255; i++) {
  myMotor->setSpeed(i);  
  delay(10);
 }
 for (i=255; i!=0; i--) {
    myMotor->setSpeed(i);  
    delay(10);
}

  Serial.print("tech");
  myMotor->run(RELEASE);
  delay(1000);
}
 }
