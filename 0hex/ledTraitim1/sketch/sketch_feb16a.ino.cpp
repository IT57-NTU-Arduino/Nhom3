#include <Arduino.h>
#line 1 "D:\\Download\\Arduino\\FILE\\ledTraitim 1\\sketch_feb16a\\sketch_feb16a.ino"
#line 1 "D:\\Download\\Arduino\\FILE\\ledTraitim 1\\sketch_feb16a\\sketch_feb16a.ino"
int value[] = {13 , 12 , 11 , 10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2};
#line 2 "D:\\Download\\Arduino\\FILE\\ledTraitim 1\\sketch_feb16a\\sketch_feb16a.ino"
void setup();
#line 17 "D:\\Download\\Arduino\\FILE\\ledTraitim 1\\sketch_feb16a\\sketch_feb16a.ino"
void loop();
#line 2 "D:\\Download\\Arduino\\FILE\\ledTraitim 1\\sketch_feb16a\\sketch_feb16a.ino"
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
}
void loop() {
  int i,x=150,y=100;
  for(i=1;i<=11;i++)
  {
    digitalWrite(value[i-1], HIGH);
    digitalWrite(value[i], HIGH);
    delay(y);
    digitalWrite(value[i-1], LOW);
    digitalWrite(value[i], LOW);
    delay(y);
  }
  for(i=0;i<7;i++)
  {
    {
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    }
    delay(x);
    {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    }
    delay(x);
  }
}

