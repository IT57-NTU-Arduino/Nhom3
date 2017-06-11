#include <Arduino.h>
#line 1 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test 8 led noi truc tiep\\Test_8_led_noi_truc_tiep\\Test_8_led_noi_truc_tiep.ino"
#line 1 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test 8 led noi truc tiep\\Test_8_led_noi_truc_tiep\\Test_8_led_noi_truc_tiep.ino"
int i;

#line 3 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test 8 led noi truc tiep\\Test_8_led_noi_truc_tiep\\Test_8_led_noi_truc_tiep.ino"
void setup();
#line 13 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test 8 led noi truc tiep\\Test_8_led_noi_truc_tiep\\Test_8_led_noi_truc_tiep.ino"
void lap(int i);
#line 19 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test 8 led noi truc tiep\\Test_8_led_noi_truc_tiep\\Test_8_led_noi_truc_tiep.ino"
void loop();
#line 3 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test 8 led noi truc tiep\\Test_8_led_noi_truc_tiep\\Test_8_led_noi_truc_tiep.ino"
void setup() {
 pinMode(0, OUTPUT);
 pinMode(1, OUTPUT);
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
}
void lap(int i)
{
    digitalWrite(i , 1);
    delay(250);
    digitalWrite(i , 0);
}
void loop() {
  for( i = 0; i<8; i++)
  {
    lap(i);
  }
  for( i = 7; i>=0; i--)
  {
    lap(i);
  }
}

