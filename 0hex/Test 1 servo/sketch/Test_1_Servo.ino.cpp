#include <Arduino.h>
#line 1 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test_1_Servo\\Test_1_Servo.ino"
#line 1 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test_1_Servo\\Test_1_Servo.ino"
#include <Servo.h>
Servo myservo;
int i = 0;
#line 4 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test_1_Servo\\Test_1_Servo.ino"
void setup();
#line 10 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test_1_Servo\\Test_1_Servo.ino"
void loop();
#line 4 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test_1_Servo\\Test_1_Servo.ino"
void setup ()
{
    // Cài đặt chức năng điều khiển servo cho chân servoPin
    myservo.attach(13);
    myservo.write(0);  
}
void loop ()
{
//  for(i = 0; i < 180; i++)
//  {
    myservo.write(180);                  // servo quay 1 goc 180 do
    delay(1000);
//  }
//  for(i = 180; i > 0; i--)
  {
    myservo.write(0);                  // servo quay 1 goc 0 do tu 180 do
    delay(1000);
  }
}

