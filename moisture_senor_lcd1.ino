#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(32,16,2);
const int sensor= A0;

void setup(){
lcd.init();
lcd.backlight();}

void loop(){
int val= analogRead(sensor);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("value");
  lcd.setCursor(0,1);
lcd.print(val);
delay(1000);
}


















































