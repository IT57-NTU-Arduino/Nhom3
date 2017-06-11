int dem=0,q,w,e,f,g,h,j;
int i,s=0,s1=5,b,l,r,a,c;
void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
void kt(int c, int s, int w, int e, int f)
{
    if (c==0)
    {
      digitalWrite(11, 0);
      digitalWrite(9, 0);
      digitalWrite(10, 0);
      digitalWrite(w, 0);
      digitalWrite(e, 0);
      analogWrite(f, s);
      delay(200);
    }
}
void kta(int g, int h, int j)
{
        analogWrite(9,g);
        analogWrite(10,h);
        analogWrite(11,j);
        delay(10);
}
void loop() {
 int b = digitalRead(2), a = digitalRead(3), l = digitalRead(5), r = digitalRead(4);
  s = 0;
  //if (b==0)
  {
    kt(b,s,12,13,8);
    dem=0;
  }
  //else if (l==0) 
  {
    kt(l,s,8,13,12);
    dem=0;
  }
  //else if (r==0) 
  {
    kt(r,s,8,12,13);
    dem=0;
  }
//  else if (a==0)
//  {
//    analogWrite(8,0);
//    analogWrite(12,0);
//    analogWrite(13,0);
//    if(dem==0)
//    {
//      kta(0,1,0);
//    }
//    else if(dem==1)
//    {
//      kta(1,0,0);
//    }
//    else if(dem==2)
//    {
//      kta(0,0,1);
//    }
//    if(dem==3) dem=0;
//    else dem++;
//  }
//  else
//  {
//    kt(1,0,0,0,0);
//  }
}
