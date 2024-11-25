/*
Servo 1 pin 9
Servo 2 pin 8
Servo 3 pin 7
Servo 4 pin 6
Servo 5 pin 5

UltraSonic 1 pin 6
*/
#include "Servo.h"


#define ServoPin5 5
#define ServoPin6 6
#define ServoPin7 7
#define ServoPin8 8
#define ServoPin9 9


#define UltraSonicPin D4

Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9;


void setup() {

servo5.attach(ServoPin5);
servo6.attach(ServoPin6);
servo7.attach(ServoPin7);
servo8.attach(ServoPin8);
servo9.attach(ServoPin9);

Serial.begin(9600);
Serial.println("debugged");

}

void loop() {

  servo5.write(180);
  servo6.write(180);
  servo7.write(180);
  servo8.write(180);
  servo9.write(180);
  delay(3000);
  servo5.write(0);
  servo6.write(0);
  servo7.write(0);
  servo8.write(0);
  servo9.write(0);
  delay(3000);

}