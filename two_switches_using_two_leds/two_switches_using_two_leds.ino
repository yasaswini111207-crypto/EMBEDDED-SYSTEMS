#include<SoftwareSerial.h>
int SW1=2;
int SW2=3;
int LED1=13;
int LED2=12;
int state1=0;
int state2=0;
void setup() {
  // put your setup code here, to run once:
pinMode(SW1,INPUT);
pinMode(LED1,OUTPUT);
pinMode(SW2,INPUT);
pinMode(LED2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
state1=digitalRead(2);
if(state1==LOW){
  digitalWrite(LED1,HIGH);
}
else{
  digitalWrite(LED1,LOW);
}
state2=digitalRead(3);
if(state2==LOW){
  digitalWrite(LED2,HIGH);
}
else{
  digitalWrite(LED2,LOW);
}
}
