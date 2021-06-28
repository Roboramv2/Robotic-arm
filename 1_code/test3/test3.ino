#include <Servo.h>
Servo servo;
int angle = 180;

void setup() {
  servo.attach(12);  
}

void loop() {
  servo.write(60);
  delay(2000);
  servo.write(130);
  delay(2000);
}
