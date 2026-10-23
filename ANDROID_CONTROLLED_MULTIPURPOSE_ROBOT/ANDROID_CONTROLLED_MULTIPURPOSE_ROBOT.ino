#include <SoftwareSerial.h>

// Bluetooth module connections
// HC-05 TXD -> Arduino pin 2
// HC-05 RXD -> Arduino pin 3 through a voltage divider

SoftwareSerial BT(2, 3);

// L298N motor driver connections
#define ENA 5
#define IN1 8
#define IN2 9

#define ENB 6
#define IN3 10
#define IN4 11

// Optional headlight LED
#define LED 7

char command;

void setup()
{
  // Initialize serial communication
  Serial.begin(9600);
  BT.begin(9600);

  // Configure motor pins
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(LED, OUTPUT);

  // Set motor speed
  analogWrite(ENA, 200);
  analogWrite(ENB, 200);

  stopRobot();

  Serial.println("Bluetooth Robot Ready");
}

void loop()
{
  if (BT.available())
  {
    command = BT.read();

    Serial.print("Received: ");
    Serial.println(command);

    switch (command)
    {
      case 'F':
        forward();
        break;

      case 'B':
        backward();
        break;

      case 'L':
        turnLeft();
        break;

      case 'R':
        turnRight();
        break;

      case 'S':
        stopRobot();
        break;

      case 'H':
        digitalWrite(LED, HIGH);
        break;

      case 'h':
        digitalWrite(LED, LOW);
        break;

      default:
        stopRobot();
        break;
    }
  }
}

// Move forward
void forward()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// Move backward
void backward()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// Turn left
void turnLeft()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// Turn right
void turnRight()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// Stop robot
void stopRobot()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
} 
