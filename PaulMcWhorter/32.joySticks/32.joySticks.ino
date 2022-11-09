/* C++ code 
 there is no joystick in tinkercad 
 in joy stick top one is gnd
 2nd one is 5v
 3rd one is connect by analog pin - x potentiometer in joystick
 4th one is also connect by analog pin - y potentiometer in joystick
 5th swith hai isme digital read karke ka hai, connect to digital pins
*/ 

int xPin = A0;
int yPin = A1;
int Switchpin = 2;
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
}

void loop()
{
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  SwitchVal = digitalRead(Switchpin);
  delay(dt);
  Serial.print("x Val = ");
  Serial.print(xVal);
  Serial.print(" y Val = ");
  Serial.print(yVal);
  Serial.print(" switchVal = ");
  Serial.println(SwitchVal);
  

}
