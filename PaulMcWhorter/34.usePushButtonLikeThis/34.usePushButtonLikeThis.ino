// C++ code
// push button ese use karna project me. same result dega
int buttonPin = 2;
int buttonValue;
int dt = 200;

void setup(){
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  Serial.begin(9600);
}

void loop(){
  buttonValue = digitalRead(buttonPin);
  Serial.println(buttonValue);
}
