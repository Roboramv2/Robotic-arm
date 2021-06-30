#include <Servo.h>

Servo mid1;
Servo mid2;

void setup() {
  mid1.attach(10);
  mid2.attach(11);
}

void loop(){
  for(int i=0; i<90; i++){
   mid1.write(180-i);
   mid2.write(i);
   delay(20);
  }
  for(int i=0; i<90; i++){
   mid1.write(90+i);
   mid2.write(90-i);
   delay(20);
  }
}
