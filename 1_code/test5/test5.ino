#include <Servo.h>

Servo mid1;
Servo mid2;

void setup() {
  mid1.attach(10);
  mid2.attach(11);
}

void loop(){
  for(int i=0; i<65; i++){
   mid1.write(180-i);
   mid2.write(i);
   delay(15);
  }
  for(int i=0; i<65; i++){
   mid1.write(115+i);
   mid2.write(65-i);
   delay(15);
  }
}
