#include <Servo.h>
Servo servo;
int angle = 90;

void setup() {
  servo.attach(12);
  servo.write(angle);
}

void loop() {
  for (int i=90; i<120; i++){
    servo.write(i);
    delay(10);
  }
  for (int i=120; i>60; i--){
    servo.write(i);
    delay(10);
  }
  for (int i=60; i<90; i++){
    servo.write(i);
    delay(10);
  }
}
