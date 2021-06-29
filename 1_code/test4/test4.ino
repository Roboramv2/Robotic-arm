#include <Servo.h>

Servo grip;
Servo fing;

void setup() {
  grip.attach(11);
  fing.attach(12);
}

void loop() {
  for (int i= 120; i>70; i--) {
    grip.write(i);
    fing.write(70);
    delay(10);
  }
  for (int i= 70; i<120; i++) {
    grip.write(i);
    fing.write(70);
    delay(10);
  }
  for (int i= 70; i<100; i++) {
    grip.write(120);
    fing.write(i);
    delay(10);
  }
  for (int i=100; i<70; i--) {
    grip.write(120);
    fing.write(i);
    delay(10);
  }
}
