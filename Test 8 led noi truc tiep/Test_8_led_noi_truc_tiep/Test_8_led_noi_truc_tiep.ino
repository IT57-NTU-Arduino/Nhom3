int i;

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
