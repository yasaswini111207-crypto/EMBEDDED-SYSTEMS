#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// DHT11 configuration
#define DHTPIN 4
#define DHTTYPE DHT11

// Create sensor object
DHT dht(DHTPIN, DHTTYPE);
int BUZ=8;

// LCD address, columns, rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
    dht.begin();
    lcd.init();
    lcd.backlight();

    lcd.setCursor(0, 0);
    lcd.print("DHT11 Monitoring");

    lcd.setCursor(0, 1);
    lcd.print("Initializing...");

    pinMode(BUZ,OUTPUT);

}

void loop()
{
    float t  = dht.readTemperature();
    float h = dht.readHumidity();
    // Display temperature
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(t);
    lcd.print("C");
    delay(2000);
    lcd.clear();

    // Display humidity
    lcd.setCursor(0, 1);
    lcd.print("Humidity: ");
    lcd.print(h);
    lcd.print("%   ");
    delay(2000);
    lcd.clear();
    if(h>60 )
    {
     
      digitalWrite(BUZ,HIGH);
    }
    else{
      digitalWrite(BUZ,LOW);
    }
}
