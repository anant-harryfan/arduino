// C++ code
// active buzzer
// buzzer jo avaz karte 
// 2 tyes of buzzer (tinkercad me ek hi hai dusare mill nahi rahe)
// 1 - active buzzer - samaj le digital write jaisa hai
// jisme ham bas isse off kar sakte ya avaz nikal sakte
// 2 - passive buzzer - ye analog write jaisa hai 
// jisme ham alag alag tone nikal sakte
int myNumb;
int potVal = A2;
int buzzPin = 8;
int dt = 100;
String mes = "Enter your number";
void setup()
{
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void loop()
{
  //Serial.println(mes);
  //while (Serial.available() == 0){}
  //myNumb = Serial.parseInt();
  myNumb = analogRead(potVal);
//  Serial.println(myNumb);
  if (myNumb >= 900){
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  }
}
