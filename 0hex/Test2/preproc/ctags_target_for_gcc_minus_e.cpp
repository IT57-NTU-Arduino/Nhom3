# 1 "D:\\Download\\Arduino\\FILE\\Test2\\Test2\\Test2.ino"
# 1 "D:\\Download\\Arduino\\FILE\\Test2\\Test2\\Test2.ino"
void setup() {
  pinMode(13, 0x1);
  pinMode(8, 0x1);
}

void loop() {
    digitalWrite(13, 0x1);
    delay(1000);
    digitalWrite(8, 0x1);
    delay(1000);
    digitalWrite(13, 0x0);
    delay(1000);
    digitalWrite(8, 0x0);
}
