// C++ code
// there are two type of push button // yaha ek hi hai
// 1 - pullup - isme off me 1 milta or on me 0
// 2 - pullDown - isme off me 0 milta or on me 1
int LEDpin = 8;
int buttonPin = 12;
int dt = 100;
int LEDstate = 0;
int buttonNew;
int buttonOld = 1;

void setup(){
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop(){
  buttonNew = digitalRead(buttonPin);
  //Serial.println(buttonRead);
  //delay(dt);
  //if (buttonRead == 1){
    //digitalWrite(LEDpin, LOW);  
  //}
  //else{
    //digitalWrite(LEDpin, HIGH);
  //}
  // isme ham button dabaenge or phir light glow hogi or jabh 2sari bar dabaenge tabh band ho jaega
  if (buttonOld == 0 && buttonNew == 1){
    if (LEDstate == 0){
      digitalWrite(LEDpin, HIGH); 
        LEDstate = 1;
    }
    else{
    digitalWrite(LEDpin, LOW); 
        LEDstate = 0; 
    }
  }
buttonOld = buttonNew;
delay(dt);
}
