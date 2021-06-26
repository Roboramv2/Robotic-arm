#include <Servo.h>
Servo servo;
int angle = 90;

void setup() {
  servo.attach(12);
  servo.write(angle);
}

void loop() {
  servo.write(angle);

}
