# 1 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test 8 led noi truc tiep\\Test_8_led_noi_truc_tiep\\Test_8_led_noi_truc_tiep.ino"
# 1 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test 8 led noi truc tiep\\Test_8_led_noi_truc_tiep\\Test_8_led_noi_truc_tiep.ino"
int i;

void setup() {
 pinMode(0, 0x1);
 pinMode(1, 0x1);
 pinMode(2, 0x1);
 pinMode(3, 0x1);
 pinMode(4, 0x1);
 pinMode(5, 0x1);
 pinMode(6, 0x1);
 pinMode(7, 0x1);
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
