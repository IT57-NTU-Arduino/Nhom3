void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, INPUT_PULLUP);
 Serial.begin(19200);
}

void loop() {
  Serial.println(digitalRead(12));
  if(digitalRead(13)==1)
  {
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  }
  else
 {
   digitalWrite(12, LOW);
   digitalWrite(11, HIGH);
  }
delay(1000);
}
