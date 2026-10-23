#include<SoftwareSerial.h>
int R=13;
int G=12;
int Y=11;
void setup() {
  // put your setup code here, to run once:
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(Y,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(R,HIGH);
digitalWrite(G,LOW);
digitalWrite(Y,LOW);
delay(2000);


digitalWrite(R,LOW);
digitalWrite(G,HIGH);
digitalWrite(Y,LOW);
delay(2000);


digitalWrite(R,LOW);
digitalWrite(G,LOW);
digitalWrite(Y,HIGH);
delay(2000);
}
