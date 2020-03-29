#include <Servo.h> 

Servo servoL;
Servo servoR;
int wait = 2000; // pause between pumps

int small_angle = 500; // servo lower limit
int big_angle = 2500; // servo higher limit

void setup() 
{ 
  servoL.attach(9);
  servoR.attach(10);
 // homing
servoL.writeMicroseconds(big_angle-150);
servoR.writeMicroseconds(small_angle);
delay(2000);
} 

void loop() { 
servoL.writeMicroseconds(big_angle-125);  // set servoL to lower_limit


servoR.writeMicroseconds(small_angle);  // set servoL to lower_limit
delay(wait);

//servoL.writeMicroseconds(1650); // set servoL to higher_limit
servoL.writeMicroseconds(small_angle+525); // set servoL to higher_limit

//servoR.writeMicroseconds(big_angle/2); // set servoL to higher_limit
servoR.writeMicroseconds(big_angle-650); // set servoL to higher_limit
delay(wait);
}
