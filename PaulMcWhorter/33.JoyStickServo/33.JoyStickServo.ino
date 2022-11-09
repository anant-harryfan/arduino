#include <Servo.h>
Servo xServo;
Servo yServo;
/* C++ code
 as no joystick we use two potentiometer
 rv = xVal 
 formula = wv =  180
                 ____ *rv
                 1023          */  
int xPin = A0;
int yPin = A1;
int Switchpin = 2;
int xServoPin = 4;
int yServoPin = 12;
int buzzPin = 9;
// wv = write value and x, y
int Wvx;
int Wvy;
int xVal;
int yVal;
int SwitchVal;
int dt = 200;

void setup()
{
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(SwitchVal, INPUT);
  digitalWrite(Switchpin, HIGH);
  pinMode(xServoPin, OUTPUT);
  pinMode(yServoPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  xServo.attach(xServoPin);
  yServo.attach(yServoPin);
}

void loop()
{
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  SwitchVal = digitalRead(Switchpin);
  Wvx = (180./1023.)*xVal;
  Wvy = (180./1023.)*yVal;
  yServo.write(Wvy);
  xServo.write(Wvx);
  if (xVal == 0 or yVal == 0){
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  }
  
  
  delay(dt);
  Serial.print("x Val = ");
  Serial.print(xVal);
  Serial.print(" y Val = ");
  Serial.print(yVal);
  Serial.print(" switchVal = ");
  Serial.println(SwitchVal);
  
}
