 // C++ code
// in this project hamne esa banaya hai
// light jitni dim hai utni avaz aaye jaise puri light hai to tone change or jabh totaly dim ho to dusari tone ho

int lightPin = A0;
int buzzPin = 6;
int Lightr;
float buzzVal;

void setup(){
  pinMode(lightPin, OUTPUT);
  pinMode(buzzPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  // value lena light resitor se
  Lightr = analogRead(lightPin);
  // line ki jo equation hai vo nikal rahe (numpy.interp jaisa)
  // value - delay - 1 - 10, lightVals - 10 - 88
  //     ((10 - 1)/(88-10))*Lightr-((10-1)*(y1 ki val))+1  
  buzzVal = (9./78.)*Lightr-(9.*10./78.)+1.;
  // Serial.println(buzzVal);
  // tone change hota hai isse jitna delay utna lamba tone kichega
  digitalWrite(buzzPin, HIGH);
  delay(buzzVal); 
  digitalWrite(buzzPin, LOW);
  delay(buzzVal); 
}
