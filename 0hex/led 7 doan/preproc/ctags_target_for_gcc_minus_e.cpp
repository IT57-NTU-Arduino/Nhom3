# 1 "D:\\Download\\Arduino\\FILE\\Led 7 doan\\Led_7_doan\\Led_7_doan.ino"
# 1 "D:\\Download\\Arduino\\FILE\\Led 7 doan\\Led_7_doan\\Led_7_doan.ino"
int a,b,c,d,e,f,g;
void so(int a, int b, int c,int d, int e, int f, int g)
{
  digitalWrite(0, g);
  digitalWrite(1, f);
  digitalWrite(2, e);
  digitalWrite(3, d);
  digitalWrite(4, c);
  digitalWrite(5, b);
  digitalWrite(6, a);
  delay(1000);
 }
void setup() {
  pinMode(0, 0x1);
  pinMode(1, 0x1);
  pinMode(2, 0x1);
  pinMode(3, 0x1);
  pinMode(4, 0x1);
  pinMode(5, 0x1);
  pinMode(6, 0x1);
}

void loop() {
  //0
  so(0,0,0,0,0,0,1);
  //1
  so(1,0,0,1,1,1,1);
  //2
  so(0,0,1,0,0,1,0);
  //3
  so(0,0,0,0,1,1,0);
  //4
  so(1,0,0,1,1,0,0);
  //5
  so(0,1,0,0,1,0,0);
  //6
  so(0,1,0,0,0,0,0);
  //7
  so(0,0,0,1,1,1,1);
  //8
  so(0,0,0,0,0,0,0);
  //9
  so(0,0,0,0,1,0,0);
}
