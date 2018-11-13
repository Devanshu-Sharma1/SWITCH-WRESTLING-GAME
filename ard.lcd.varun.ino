#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int b1=9;
int b2=8;
int count1=0,count2=0;

void setup() {
  lcd.begin(16, 2);
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  lcd.print("THE SWITCH GAME");
}

void loop() {
  
  if(digitalRead(b1)==HIGH){
    count1++;
    delay(200);
  }
  
  if(digitalRead(b2)==HIGH){
    count2++;
    delay(200);
  }
 
  if(count1==25){
    lcd.setCursor(0, 1);
    lcd.print(" PLAYER 1 WINS");
    delay(10000);
  }
  else if(count2==25){
    lcd.setCursor(0, 1);
    lcd.print(" PLAYER 2 WINS");
    delay(10000);
  }
}
