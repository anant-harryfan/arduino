// C++ code
// analog read help us to read input from the sensor or anything else in 0 - 1023 = 2^8
int readPin = A3;
int V2 = 0;
int delayTime = 500;
void setup()
{
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  V2 = analogRead(readPin);
  Serial.println(V2);
  delay(delayTime);
}
