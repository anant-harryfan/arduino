// C++ code
// Passive buzzer 
// iske ander ham alag alag tone nikal sakte
int buzzPin = 8;
int buzzTime = 1;
int microBuzzTime = 10;
int potVal;
int buzzVal;
int potPin = A1;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, OUTPUT);
}

void loop()
{
  potVal = analogRead(potPin);
  // matlab numpy.interp karta hai vo ese karte
  buzzVal = (9940./1023.)*potVal+60; // yaha pe hamne potval leke buzzval nikala
  // Serial.println(buzzVal);
  Serial.println(potVal);
  digitalWrite(buzzPin, HIGH);
  // delay se tone change hota
  delayMicroseconds(buzzVal); // Wait for microsecond(mcs)
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzVal); // Wait for microsecond(mcs)
}
