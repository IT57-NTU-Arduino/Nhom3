# 1 "D:\\Download\\Arduino\\FILE\\ledTraitim 1\\sketch_feb16a\\sketch_feb16a.ino"
# 1 "D:\\Download\\Arduino\\FILE\\ledTraitim 1\\sketch_feb16a\\sketch_feb16a.ino"
int value[] = {13 , 12 , 11 , 10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2};
void setup() {
  pinMode(13, 0x1);
  pinMode(12, 0x1);
  pinMode(11, 0x1);
  pinMode(10, 0x1);
  pinMode(9, 0x1);
  pinMode(8, 0x1);
  pinMode(7, 0x1);
  pinMode(6, 0x1);
  pinMode(5, 0x1);
  pinMode(4, 0x1);
  pinMode(3, 0x1);
  pinMode(2, 0x1);
  pinMode(1, 0x1);
}
void loop() {
  int i,x=150,y=100;
  for(i=1;i<=11;i++)
  {
    digitalWrite(value[i-1], 0x1);
    digitalWrite(value[i], 0x1);
    delay(y);
    digitalWrite(value[i-1], 0x0);
    digitalWrite(value[i], 0x0);
    delay(y);
  }
  for(i=0;i<7;i++)
  {
    {
    digitalWrite(1, 0x1);
    digitalWrite(2, 0x1);
    digitalWrite(3, 0x1);
    digitalWrite(4, 0x1);
    digitalWrite(5, 0x1);
    digitalWrite(6, 0x1);
    digitalWrite(7, 0x1);
    digitalWrite(8, 0x1);
    digitalWrite(9, 0x1);
    digitalWrite(10, 0x1);
    digitalWrite(11, 0x1);
    digitalWrite(12, 0x1);
    digitalWrite(13, 0x1);
    }
    delay(x);
    {
    digitalWrite(1, 0x0);
    digitalWrite(2, 0x0);
    digitalWrite(3, 0x0);
    digitalWrite(4, 0x0);
    digitalWrite(5, 0x0);
    digitalWrite(6, 0x0);
    digitalWrite(7, 0x0);
    digitalWrite(8, 0x0);
    digitalWrite(9, 0x0);
    digitalWrite(10, 0x0);
    digitalWrite(11, 0x0);
    digitalWrite(12, 0x0);
    digitalWrite(13, 0x0);
    }
    delay(x);
  }
}
