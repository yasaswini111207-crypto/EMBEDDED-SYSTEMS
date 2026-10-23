#include<SoftwareSerial.h>
#include<LiquidCrystal.h>
int R=13;
int G=12;
int Y=11;
int BUZ=8;
LiquidCrystal lcd(10,9,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(Y,OUTPUT);
pinMode(BUZ,OUTPUT);
lcd.begin(16,2);
lcd.print("TRAFFIC SIGNAL");
delay(2000);
lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(R,HIGH);
digitalWrite(G,LOW);
digitalWrite(Y,LOW);
lcd.print("RED SIGNAL");
digitalWrite(BUZ,HIGH);
delay(2000);
lcd.clear();
digitalWrite(BUZ,LOW);



digitalWrite(R,LOW);
digitalWrite(G,HIGH);
digitalWrite(Y,LOW);
lcd.print("GREEN SIGNAL");
delay(2000);
lcd.clear();


digitalWrite(R,LOW);
digitalWrite(G,LOW);
digitalWrite(Y,HIGH);
lcd.print("YELLOW SIGNAL");
delay(2000);
lcd.clear();
}
