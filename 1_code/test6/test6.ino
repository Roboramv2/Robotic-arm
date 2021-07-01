#include <Servo.h>

Servo grip;
Servo fing;
Servo mid1;
Servo mid2;
int gripang;
int fingang;
int mid1ang;
int mid2ang;

void recalibrate(){
  grip.write(120);
  fing.write(60);
  mid1.write(180);
  mid2.write(0);
  fingang = 60;
  gripang = 120;
  mid1ang = 180;
  mid2ang = 0;
}

void opfing(int ang, int del){
  int dir = fingang - ang;
  if (dir>0) {
    for (int i=fingang; i>=ang; i--) {
      fing.write(i);
      delay(del);
    }
  }
  if (dir<0) {
    for (int i=fingang; i<=ang; i++) {
      fing.write(i);
      delay(del);
    }
  }
  fingang = ang;
}

void opgrip(int ang, int del){
  int dir = gripang - ang;
  if (dir>0) {
    for (int i=gripang; i>=ang; i--) {
      grip.write(i);
      delay(del);
    }
  }
  if (dir<0) {
    for (int i=gripang; i<=ang; i++) {
      grip.write(i);
      delay(del);
    }
  }
  gripang = ang;
}

void midjoint(int ang){
  int dir = mid2ang-ang;
  if (dir>0){
    for(int i=0; i<=dir; i++){
      mid1.write(180-mid2ang+i);
      mid2.write(mid2ang-i);
      delay(15);
    }
  }
  if (dir<0){
    for(int i=0; i<=ang-mid2ang; i++){
      mid1.write(180-mid2ang-i);
      mid2.write(mid2ang+i);
      delay(15);
    }
  }
  mid2ang = ang;
  mid1ang = 180-ang;
}

void setup() {
  mid1.attach(10);
  mid2.attach(11);
  grip.attach(12);
  fing.attach(13);
  recalibrate();
}

void loop() {
  //fingers closed at 110, open at 50
  //grippers closed at 70, open at 120
  opgrip(120, 5);
  delay(100);
  opfing(110, 15);
  delay(200);
  midjoint(60);
  delay(200);
  opfing(50, 15);
  delay(200); 
  opgrip(70, 5);
  delay(100);
  midjoint(0);
  delay(200);
}
