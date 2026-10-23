#include<SoftwareSerial.h>
#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16,2);
int R=13;
int G=12;
int Y=11;
void setup() {
  // put your setup code here, to run once:
  lcd.init();

lcd.backlight();
lcd.setCursor(0,0);
lcd.print("VITW-ECE");
lcd.setCursor(0,1);
lcd.print("I2C LCD DEMO");
delay(2000);
lcd.clear();
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(Y,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(R,HIGH);
digitalWrite(G,LOW);
digitalWrite(Y,LOW);
lcd.print("  RED SIGNAL ");
delay(2000);
lcd.clear();

digitalWrite(R,LOW);
digitalWrite(G,HIGH);
digitalWrite(Y,LOW);
lcd.print("  GREEN SIGNAL ");
delay(2000);
lcd.clear();


digitalWrite(R,LOW);
digitalWrite(G,LOW);
digitalWrite(Y,HIGH);
lcd.print("  YELLOW SIGNAL ");
delay(2000);
lcd.clear();
}
