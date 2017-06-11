#include <Arduino.h>
#line 1 "D:\\Download\\Arduino\\FILE\\Test2\\Test2\\Test2.ino"
#line 1 "D:\\Download\\Arduino\\FILE\\Test2\\Test2\\Test2.ino"
#line 1 "D:\\Download\\Arduino\\FILE\\Test2\\Test2\\Test2.ino"
void setup();
#line 6 "D:\\Download\\Arduino\\FILE\\Test2\\Test2\\Test2.ino"
void loop();
#line 1 "D:\\Download\\Arduino\\FILE\\Test2\\Test2\\Test2.ino"
void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
    digitalWrite(8, LOW);
}

