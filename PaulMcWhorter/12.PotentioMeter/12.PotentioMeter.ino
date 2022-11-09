int myVoltPin = A3;
int readVal;
float V2;
void setup(){
  Serial.begin(9600);
  }

void loop(){
  readVal = analogRead(myVoltPin);
  // convert 0 - 1023 value in 0 to 5 to get exat value in volts
  V2 = (5./1023.)*readVal;
  Serial.println(V2);
  delay(500);
  }
