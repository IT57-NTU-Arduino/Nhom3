# 1 "D:\\Download\\Arduino\\FILE\\Test4 hong ngoai\\Hong_ngoai\\Hong_ngoai.ino"
# 1 "D:\\Download\\Arduino\\FILE\\Test4 hong ngoai\\Hong_ngoai\\Hong_ngoai.ino"
void setup() {
  pinMode(13, 0x1);
  pinMode(12, 0x2);
 Serial.begin(19200);
}

void loop() {
  Serial.println(digitalRead(12));
  if(digitalRead(12)==0)
  {
    digitalWrite(13, 0x1);
  }
  else
 {
   digitalWrite(13, 0x0);
  }
delay(1000);
}
