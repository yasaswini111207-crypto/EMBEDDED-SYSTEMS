#include<SoftwareSerial.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup()
{
  
  lcd.begin(16,2);
  lcd.print("DEPERMENT OF ECE");
  lcd.setCursor(0,1);
  lcd.print("PROJECT TRAINING");
  delay(2000);
  lcd.clear();

}

void loop()
{
 

}
