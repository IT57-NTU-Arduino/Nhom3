int num = 0;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 digitalWrite(9, HIGH);
 {
   digitalWrite(13,bitRead(num,0));
   digitalWrite(12,bitRead(num,1));
   digitalWrite(11,bitRead(num,2));
   digitalWrite(10,bitRead(num,3));
   delay(1000);
   num++;
   if(num==10) num = 0;
 }
}
