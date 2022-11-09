// C++ code
//
int potVal;
int DelayT = 100;
int potPin = A0;
int redPin = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(redPin, OUTPUT);
}

void loop(){
  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(DelayT);
  
  while (potVal>1000){
  digitalWrite(redPin, HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
    delay(DelayT);
  }
digitalWrite(redPin, LOW);
}
