//-----------------------Servo------------------------

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

//-----------------------Keypad------------------------------

//Thêm thư viện LiquitCrystal - nó có sẵn vì vậy bạn không cần cài thêm gì cả
#include <LiquidCrystal.h>
 
//Khởi tạo với các chân
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

 #include "Keypad.h"
 
const byte rows = 4; //số hàng
const byte columns = 3; //số cột
 
int holdDelay = 700; //Thời gian trễ để xem là nhấn 1 nút nhằm tránh nhiễu
int n = 3; // 
int state = 0; //nếu state =0 ko nhấn,state =1 nhấn thời gian nhỏ , state = 2 nhấn giữ lâu
String key;
 
//Định nghĩa các giá trị trả về
char keys[rows][columns] =
{
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'},
};
 
byte rowPins[rows] = {7 , 8 , 9 , A0}; //Cách nối chân với Arduino
byte columnPins[columns] = {0 , 10 , 6};

//-------------------------Khai bao cac bien khac------------------------

 int a[3]; //day so mat khau
 int i = 0, j = 5, l = 0;
//cài đặt thư viện keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPins, columnPins, rows, columns);

void setup ()
{
    //--------------Servo------------------  
    
    // Cài đặt chức năng điều khiển servo cho chân servoPin
    myservo.attach(13);
    myservo.write(0);  
    
    //--------------LCD-----------------
    
    //Thông báo đây là LCD 1602
    lcd.begin(16, 2);

    //-----------------------------------

    Serial.begin(9600); // Mở giao tiếp Serial ở baudrate 9600
}
 
void loop ()
{
  //Hien thi LCD mo dau
  lcd.setCursor(2, 0);
  lcd.print("Nhap mat khau!");
  
  //------------Keypad------------------
  
  char temp = keypad.getKey();
  if ((int)keypad.getState() ==  PRESSED) {
    if (temp != 0) {
      key = temp;
      if(key != "*" && key != "#" ) a[i] = key.toInt();
      // Lưu ý: dòng 1 là dòng thứ 2, dòng 0 là dòng thứ 1. Nôm na, nó đếm từ 0 từ không phải từ 1
      if(key == "#")
      {
        i = 0;
        for(j=5;j<10;j++)
        {
          lcd.setCursor(j, 1);
          lcd.print(" ");
        }
        j = 5;
      }
      else if(key == "*")
      {
        i--;
        j--;
        lcd.setCursor(j, 1);
        lcd.print(" ");
      }
      else
      {
        lcd.setCursor(j, 1);
        // In ra *
        lcd.print("*");
        if(i<3) {i++; j++;}
        else {i=0; j=5;}
      }
    }
  }
  if ((int)keypad.getState() ==  HOLD) {
    state++;
    state = constrain(state, 1, n-1);
    delay(holdDelay);
    
  }
 
  if ((int)keypad.getState() ==  RELEASED) {
    key += state;
    state = 0;
    //Xuất lên Máy tính để xem kết quả
    //Serial.println(key);
 
  }
  delay(100);

  //-----------Thuc hien tren LCD va Servo----------------
  
  if(i==3)
   {
        if(a[0] == 1 && a[1] == 2 && a[2] == 3)
      {
               lcd.setCursor(2, 0);
               lcd.print("Xoay servo 90*");
               lcd.setCursor(3, 1);
               lcd.print("  ACTION");
               myservo.write(90);                  // servo quay 1 goc 90 do
               delay(5000);
               for(j=5;j<30;j++)
               {
                  lcd.setCursor(j, 1);
                  lcd.print(" ");
                }
                myservo.write(0);  
                j = 5;
                i=0;
      }
      else 
      {
            for(j=2;j<30;j++)
            {
                lcd.setCursor(j, 0);
                lcd.print(" ");
            }
            j = 5;
            lcd.setCursor(2, 0);
            lcd.print("Sai mat khau!");
            lcd.setCursor(5, 1);
            // In ra dong chu
            lcd.print("ERROR");
            delay(3000);
            for(j=5;j<10;j++)
            {
              lcd.setCursor(j, 1);
              lcd.print(" ");
            }
            j = 5;
            i=0;
      }
   }
}
