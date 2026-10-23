char data;
void setup() {
pinMode(13,OUTPUT);
Serial.begin(9600);
digitalWrite(13,LOW);
}
void loop() {
if (Serial.available())
{
 data=Serial.read();
Serial.print(data);
if (data=='h')
{
digitalWrite(13,HIGH);
}
else if(data=='p')
{
digitalWrite(13,LOW);
}
}

}
