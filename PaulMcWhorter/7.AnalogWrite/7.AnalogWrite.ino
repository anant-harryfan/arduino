// C++ code
// 2 bulb needed
// help to give volte from 0 - 255 where 0 means 0 volts and 255 means voltes
int redPin = 9;
int red2 = 10;
int Brightness2 = 5;
int Brightness = 255;
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop()
{
  analogWrite(redPin, Brightness);
  analogWrite(red2, Brightness2);
  
  if (Brightness2 >= 255){
  Brightness2--;
  }
  else{
  Brightness2++;
  }
}
