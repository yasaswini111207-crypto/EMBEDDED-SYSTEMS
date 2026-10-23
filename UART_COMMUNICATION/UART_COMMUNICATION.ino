#include<SoftwareSerial.h>
char data;
int R1=13;
int R2=12;
void setup() {
  // put your setup code here, to run once:
pinMode(R1,OUTPUT);
pinMode(R2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    data= Serial.read();
    if (data=='1')
    {
      digitalWrite(R1,HIGH);
    }
   else if(data=='2')
   {
    digitalWrite(R1,LOW);
      
    }
     else if(data=='3')
   {
    digitalWrite(R2,HIGH);
      
    }
     else if(data=='4')
   {
    digitalWrite(R2,LOW);
      
    }
   
  }
 
}
