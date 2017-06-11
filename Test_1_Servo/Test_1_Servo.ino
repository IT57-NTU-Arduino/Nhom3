#include <Servo.h>
Servo myservo;
int i = 0;
void setup ()
{
    // Cài đặt chức năng điều khiển servo cho chân servoPin
    myservo.attach(13);
    myservo.write(0);  
}
void loop ()
{
    myservo.write(180);                  // servo quay 1 goc 180 do
    delay(1000);
    myservo.write(0);                  // servo quay 1 goc 0 do tu 180 do
    delay(1000);
}
