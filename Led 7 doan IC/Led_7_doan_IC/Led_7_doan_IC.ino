//-----------------------Speaker------------------------
int pinSpeaker = 9;
//-----------------------Servo------------------------

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

//-----------------------Keypad------------------------------

//Thêm thư viện LiquitCrystal - nó có sẵn vì vậy bạn không cần cài thêm gì cả
#include <LiquidCrystal.h>
 
//Khởi tạo với các chân
LiquidCrystal lcd(10, 0, 5, 4, 3, 2);

 #include "Keypad.h"
 
const byte rows = 4; //số hàng
const byte columns = 3; //số cột
 
int holdDelay = 500; //Thời gian trễ để xem là nhấn 1 nút nhằm tránh nhiễu
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
 
byte rowPins[rows] = {A3 , A2 , A1 , A0}; //Cách nối chân với Arduino
byte columnPins[columns] = {6 , 7 , 8};

//-------------------------Khai bao cac bien khac------------------------

 int a[3]; //day so mat khau
 int i = 0, j = 5, l = 0, dem = 3;
//cài đặt thư viện keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPins, columnPins, rows, columns);

//-------------------74HC595-----------------------------
/*
shiftOut ra 1 Module LED 7 đoạn đơn
*/
//chân ST_CP của 74HC595
int latchPin = 12;
//chân SH_CP của 74HC595
int clockPin = 11;
//Chân DS của 74HC595
int dataPin = 13;
 
// Ta sẽ xây dựng mảng hằng số với các giá trị cho trước
// Các bit được đánh số thứ tự (0-7) từ phải qua trái (tương ứng với A-F,DP)
// Vì ta dùng LED 7 đoạn chung cực dương nên với các bit 0
// thì các đoạn của LED 7 đoạn sẽ sáng
// với các bit 1 thì đoạn ấy sẽ tắt
 
//mảng có 10 số (từ 0-9) và 
const byte Seg[10] = {
  0b10110000,//3
  0b10100100,//2
  0b11111001,//1 - chỉ có 2 thanh b,c sáng
  0b11000000,//0 - các thanh từ a-f sáng
};
 
 
void setup() 
{
  Serial.begin(9600); //dùng để hiển thị bộ đếm (dem) co tương ứng với led hay không ra Serial
  //-------------Speaker-----------------
  pinMode(pinSpeaker, OUTPUT);
  //----------74HC595---------------------
  //Bạn BUỘC PHẢI pinMode các chân này là OUTPUT
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  //--------------Servo------------------  
    
    // Cài đặt chức năng điều khiển servo cho chân servoPin
    myservo.attach(A4);
    myservo.write(0);  
    
    //--------------LCD-----------------
    
    //Thông báo đây là LCD 1602
    lcd.begin(16, 2);
    
    //------------------------Cài đặt bộ đếm khởi đầu là 3--------------------
    
    //shiftout - start
            digitalWrite(latchPin, LOW);
            //Xuất bảng ký tự ra cho Module LED
            shiftOut(dataPin, clockPin, MSBFIRST, Seg[0]);  
            digitalWrite(latchPin, HIGH);
  //shiftout - end
}

void loop() 
{
  static int point = 0;
  //Hien thi LCD mo dau
  lcd.setCursor(2, 0);
  lcd.print("Nhap mat khau!");
  
  //------------Keypad------------------
  
  char temp = keypad.getKey();
  if ((int)keypad.getState() ==  PRESSED) //nếu nút được nhấn thì sẽ nhận diện dữ liệu từ keypad
  {
    if (temp != 0) {
      key = temp;
      if(key != "*" && key != "#" ) a[i] = key.toInt(); //nhận diện dữ liệu mật khẩu là số (khác * và #)
      
      // Lưu ý: dòng 1 là dòng thứ 2, dòng 0 là dòng thứ 1. Nôm na, nó đếm từ 0 từ không phải từ 1
      
      if(key == "#") //nếu nhập # -> xóa toàn bộ mật khẩu vừa nhập
      {
        i = 0;
        for(j=5;j<10;j++)
        {
          lcd.setCursor(j, 1);
          lcd.print(" ");
        }
        j = 5;
      }
      else if(key == "*") //nếu nhập * -> xóa 1 ký tự mật khẩu vừa nhập
      {
        i--;
        j--;
        lcd.setCursor(j, 1);
        lcd.print(" ");
      }
      else //nếu nhập số thì hiển thị trên LCD là *
      {
        lcd.setCursor(j, 1);
        // In ra *
        lcd.print("*");
        if(i<3) {i++; j++;}
        else {i=0; j=5;}
      }
    }
  }
  if ((int)keypad.getState() ==  HOLD)  // nếu vừa mới nhấn (giữ) thì sẽ có thời gian chờ
  {
    state++;
    state = constrain(state, 1, n-1);
    delay(holdDelay);
    
  }
 
  if ((int)keypad.getState() ==  RELEASED) 
  {
    key += state;
    state = 0;
  }
  delay(100);

  //-----------Thuc hien tren LCD va Servo----------------
  
  if(i==3)
   {
        if(a[0] == 1 && a[1] == 4 && a[2] == 9)
      {
               lcd.setCursor(2, 0);
               lcd.print(" WELCOME HOME!");
               lcd.setCursor(3, 1);
               lcd.print("  MY OWNER");
               myservo.write(90);    // servo quay 1 goc 90 do (mo cua)
               delay(5000);
               for(j=5;j<30;j++)
               {
                  lcd.setCursor(j, 1);
                  lcd.print(" ");
                }
                myservo.write(0);  
                j = 5;
                i=0;
            //shiftout - start
                digitalWrite(latchPin, LOW);
                //Xuất bảng ký tự ra cho Module LED
                shiftOut(dataPin, clockPin, MSBFIRST, Seg[0]);  
                digitalWrite(latchPin, HIGH);
            //shiftout - end
            point = 0;
            dem = 3;
      }
      else 
      {
            //shiftout - start đếm từ 2->0
                digitalWrite(latchPin, LOW);
                //Xuất bảng ký tự ra cho Module LED
                shiftOut(dataPin, clockPin, MSBFIRST, Seg[point+1]); 
                digitalWrite(latchPin, HIGH);
            //shiftout - end
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
            delay(2000);
            for(j=5;j<10;j++)
            {
              lcd.setCursor(j, 1);
              lcd.print(" ");
            }
            j = 5;
            i=0;
            dem--;
            point = (point + 1) % 3; // Vòng tuần hoàn từ 3->0

            Serial.println(dem);
            if(dem == 0) 
            {
              playTone(1000, 160);
              dem = 3;
              //shiftout - start
                  digitalWrite(latchPin, LOW);
                  //Xuất bảng ký tự ra cho Module LED
                  shiftOut(dataPin, clockPin, MSBFIRST, Seg[0]);  
                  digitalWrite(latchPin, HIGH);
              //shiftout - end
            }
      }
   } 
}
void playTone(long duration, int freq)
{
  duration *= 1000;
  int period = (1.0 / freq) * 1000000;
  long elapsed_time = 0;
  while (elapsed_time < duration)
  {
    digitalWrite(pinSpeaker,HIGH);
    delayMicroseconds(period / 2);
    digitalWrite(pinSpeaker, LOW);
    delayMicroseconds(period / 2);
    elapsed_time += (period);
  }
}

