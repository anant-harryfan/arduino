// C++ code
//
int redPin = 8;
int greenPin = 4;
int bluePin = 7;
String myColor;
String mes = "Which color you want?";

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(mes);
  while (Serial.available() == 0){
    
  }
  myColor = Serial.readString();
  Serial.print(myColor); Serial.println("Color turn on");
  if (myColor == "red"){
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
    digitalWrite(bluePin, LOW);
    }
  else if (myColor == "green"){
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  else if (myColor == "blue"){
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, HIGH);
    }
   else if (myColor == "aqua"){
    analogWrite(greenPin, 255);
    analogWrite(redPin, LOW);
    analogWrite(bluePin, 255);
     
   }
}
