# 1 "D:\\Download\\Arduino\\FILE\\Test1\\Blink\\Blink.ino"
# 1 "D:\\Download\\Arduino\\FILE\\Test1\\Blink\\Blink.ino"
/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, 0x1);
  pinMode(11, 0x1);
  pinMode(12, 0x1);
}

// the loop function runs over and over again forever
void loop() {
  //digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);              // wait for a second
  digitalWrite(13, 0x0); // turn the LED off by making the voltage LOW
  //delay(1000);
  //digitalWrite(11, HIGH);
  //đèn xanh sáng
  digitalWrite(11, 0x0);
  digitalWrite(12, 0x0);
  delay(1000);
  //đèn vàng sáng
  digitalWrite(11, 0x0);
  digitalWrite(12, 0x1);
  delay(1000);
  //đèn đỏ sáng
  digitalWrite(11, 0x1);
  digitalWrite(12, 0x0);
  delay(1000);
  //báo động
  digitalWrite(11, 0x1);
  digitalWrite(12, 0x1);
  delay(1000);
}
