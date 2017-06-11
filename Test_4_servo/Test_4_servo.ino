#include <Servo.h>
Servo myservo1,myservo2,myservo3,myservo4;
int i = 0;
void setup ()
{
    // Cài đặt chức năng điều khiển servo cho chân servoPin
    myservo1.attach(13);
    myservo1.write(0);
    myservo2.attach(12);
    myservo2.write(0);
    myservo3.attach(11);
    myservo3.write(0);
    myservo4.attach(10);
    myservo4.write(0);  
}
void loop ()
{
    myservo1.write(180);                  // servo quay 1 goc 180 do
    myservo2.write(180);
    myservo3.write(180);
    myservo4.write(180);
    delay(1000);
    myservo1.write(0);                  // servo quay 1 goc 0 do tu 180 do
    myservo2.write(0);
    myservo3.write(0);
    myservo4.write(0);
    delay(1000);
}
