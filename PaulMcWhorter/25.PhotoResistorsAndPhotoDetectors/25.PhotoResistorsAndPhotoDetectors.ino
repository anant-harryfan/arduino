// C++ code
// photoreitor ki value is between 0 - 1023
// phototresitor ek ese cheez hai jisme ha ye identify kar sakte ki light on hai ya off
// jaise isko bhhot sari light mele to iski value ho jaegi 1023 or agar andhera to 0

int lightPin = A0;
int lightVal;
int redPin = 7;
int greenPin = 4;
int dt = 250;
void setup()
{
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(lightPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // jis point pe photo resitor or simple resistor milte us point ko read karke value aayegi
  lightVal = analogRead(lightPin);
  //Serial.println(lightVal);
  //delay(dt);
  // jabh light off hai tabh green jalao 
  if (lightVal <= 30){
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);    
  }
  // varna red jalao
  else if (lightVal >= 900){
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);    
  }
  // or 2no ke bech me value hai to kuch mat jalao
  else{
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW); 
  }
}
