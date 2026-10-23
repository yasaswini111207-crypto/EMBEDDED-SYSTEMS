#include<SoftwareSerial.h>
int RELAY1=13;
int RELAY2=12;
int RELAY3=11;
void setup() {
  // put your setup code here, to run once:
pinMode(RELAY1,OUTPUT);
pinMode(RELAY2,OUTPUT);
pinMode(RELAY3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RELAY1,HIGH);
digitalWrite(RELAY2,LOW);
digitalWrite(RELAY3,LOW);
delay(2000);


digitalWrite(RELAY1,LOW);
digitalWrite(RELAY2,HIGH);
digitalWrite(RELAY3,LOW);
delay(2000);


digitalWrite(RELAY1,LOW);
digitalWrite(RELAY2,LOW);
digitalWrite(RELAY3,HIGH);
delay(2000);
}
