#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;


void setup() {
  servo1.attach(10);
  servo2.attach(11);
  servo3.attach(12);
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
}

void loop() {
  for (int i=90; i<120; i++){
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    delay(5);
  }
  for (int i=120; i>60; i--){
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    delay(5);
  }
  for (int i=60; i<90; i++){
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    delay(5);
  }
}
