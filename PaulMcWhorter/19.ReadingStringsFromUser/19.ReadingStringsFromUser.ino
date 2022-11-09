// C++ code
//

String myName;
String mes = "Which LED you wanna blow up?"; 
//String mes2 = "Hello ";
String mes3 = " Led Blown up";
int redPin = 12;
int orangePin = 8;
int yellowPin = 2;
int delayt = 1000;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(orangePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
//  digitalWrite(redPin, HIGH);
//  digitalWrite(orangePin, HIGH);
//  digitalWrite(yellowPin, HIGH);
//  delay(1000); // Wait for 1000 millisecond(s)
//  digitalWrite(redPin, LOW);
//  digitalWrite(orangePin, LOW);
//  digitalWrite(yellowPin, LOW);
//  delay(1000); // Wait for 1000 millisecond(s)
Serial.println(mes);
while (Serial.available() == 0){
  
}
myName = Serial.readString();
Serial.print(myName);
Serial.println(mes3);
if (myName == "red"){
    digitalWrite(redPin, HIGH); 
    digitalWrite(yellowPin, LOW); 
    digitalWrite(orangePin, LOW);
  }

else if (myName == "yellow"){
    digitalWrite(yellowPin, HIGH);  
    digitalWrite(orangePin, LOW);
    digitalWrite(redPin, LOW);
  }

else if (myName == "orange"){
    digitalWrite(orangePin, HIGH);  
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
  }

}
