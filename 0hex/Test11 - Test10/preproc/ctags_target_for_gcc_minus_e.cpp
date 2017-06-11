# 1 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test11 - Test10\\Test11\\Test11.ino"
# 1 "D:\\Download\\GIT FOR VERSION CONTROL\\Quan ly File Of Git\\Arduino FILE\\Test11 - Test10\\Test11\\Test11.ino"
/*
shiftOut với 8 LED bằng 1 IC HC595
*/
//chân ST_CP (Chân 12) của 74HC595
int latchPin = 11;
//chân SH_CP (Chân 11) của 74HC595
int clockPin = 13;
//Chân DS (chân 14) của 74HC595
int dataPin = 12;

//Trạng thái của LED, hay chính là byte mà ta sẽ gửi qua shiftOut
byte ledStatus;
void setup() {
  //Bạn BUỘC PHẢI pinMode các chân này là OUTPUT
  pinMode(latchPin, 0x1);
  pinMode(clockPin, 0x1);
  pinMode(dataPin, 0x1);
}

void loop() {

  //Sáng tuần tự
  ledStatus = 0;//mặc định là không có đèn nào sáng hết (0 = 0b00000000)
  digitalWrite(latchPin, 0x0); //các đèn LED sẽ không sáng khi bạn digital LOW
  ledStatus = 0b11111111;
  //ShiftOut ra IC
  shiftOut(dataPin, clockPin, 1, ledStatus);
  digitalWrite(latchPin, 0x1);//các đèn LED sẽ sáng với trạng thái vừa được cập nhập
  delay(1000);

  digitalWrite(latchPin, 0x0); //các đèn LED sẽ không sáng khi bạn digital LOW
  ledStatus = 0;
  //ShiftOut ra IC
  shiftOut(dataPin, clockPin, 1, ledStatus);
  digitalWrite(latchPin, 0x1);//các đèn LED sẽ sáng với trạng thái vừa được cập nhập
  delay(250);
}
