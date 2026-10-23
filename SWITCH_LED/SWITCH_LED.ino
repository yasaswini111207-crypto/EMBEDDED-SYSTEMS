#include<SoftwareSerial.h>
int SW=2;
int LED=13;
int state=0;
void setup() {
  // put your setup code here, to run once:
pinMode(SW,INPUT);
pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
state=digitalRead(2);
if(state==HIGH){
  digitalWrite(LED,HIGH);
}
else{
  digitalWrite(LED,LOW);
}
}
