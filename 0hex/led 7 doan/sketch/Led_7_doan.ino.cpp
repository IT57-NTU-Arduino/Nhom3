#include <Arduino.h>
#line 1 "D:\\Download\\Arduino\\FILE\\Led 7 doan\\Led_7_doan\\Led_7_doan.ino"
#line 1 "D:\\Download\\Arduino\\FILE\\Led 7 doan\\Led_7_doan\\Led_7_doan.ino"
int a,b,c,d,e,f,g;
#line 2 "D:\\Download\\Arduino\\FILE\\Led 7 doan\\Led_7_doan\\Led_7_doan.ino"
void so(int a, int b, int c,int d, int e, int f, int g);
#line 13 "D:\\Download\\Arduino\\FILE\\Led 7 doan\\Led_7_doan\\Led_7_doan.ino"
void setup();
#line 23 "D:\\Download\\Arduino\\FILE\\Led 7 doan\\Led_7_doan\\Led_7_doan.ino"
void loop();
#line 2 "D:\\Download\\Arduino\\FILE\\Led 7 doan\\Led_7_doan\\Led_7_doan.ino"
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
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
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

