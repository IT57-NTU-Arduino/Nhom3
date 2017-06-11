#include <Arduino.h>
#line 1 "D:\\Download\\Arduino\\FILE\\Test4 hong ngoai\\Hong_ngoai\\Hong_ngoai.ino"
#line 1 "D:\\Download\\Arduino\\FILE\\Test4 hong ngoai\\Hong_ngoai\\Hong_ngoai.ino"
#line 1 "D:\\Download\\Arduino\\FILE\\Test4 hong ngoai\\Hong_ngoai\\Hong_ngoai.ino"
void setup();
#line 7 "D:\\Download\\Arduino\\FILE\\Test4 hong ngoai\\Hong_ngoai\\Hong_ngoai.ino"
void loop();
#line 1 "D:\\Download\\Arduino\\FILE\\Test4 hong ngoai\\Hong_ngoai\\Hong_ngoai.ino"
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, INPUT_PULLUP);
 Serial.begin(19200);
}

void loop() {
  Serial.println(digitalRead(12));
  if(digitalRead(12)==0)
  {
    digitalWrite(13, HIGH);
  }
  else
 {
   digitalWrite(13, LOW);
  }
delay(1000);
}

