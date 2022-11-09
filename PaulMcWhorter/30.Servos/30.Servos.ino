// to use servo we use this
#include <Servo.h>

// C++ code
// in servoes red should be connect to 5 volts and brown to gnd and orange wire to digital pins 

int servoPin = 9;
float servoPos = 165;
int lightPin = A3;
int Lightr;
String mes = "What angle you want (< 175)";
// function hai to object banaya
Servo myServo;
void setup(){
  Serial.begin(9600);
  // arduino ko servo se attch kiya
  myServo.attach(servoPin);
  pinMode(lightPin, OUTPUT);
}

void loop()
{  
  //Serial.println(mes);
  //while(Serial.available() == 0){}
  //servoPos = Serial.parseInt(a);
  Lightr = analogRead(lightPin);
  Serial.println(servoPos);
  // vals - Lightr - 0 - 88(for online simulator, this can be change)
  //      - servo - 0 - 160
  // formula - ServoPos = -20/11*(Lightr - 88)
  servoPos = (-20./11.)*Lightr+160.;
  // ab iske ander jo bhi angle doge to utne pe ghum jaega
  // servo can't go beyoud angle 175
  myServo.write(servoPos);
}
