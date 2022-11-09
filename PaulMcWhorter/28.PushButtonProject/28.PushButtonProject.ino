// C++ code
// bas esa banaya hai ki ek button push karenge to brightness bulb ki badegi or dusara push karenge to brightness ghategi
int LEDpin = 2;
int button1Pin = 12;
int button2Pin = 7;
int button1Val;
int button2Val;
int brightNess = 0;
int buzzPin = 0;
int dt = 100;

void setup(){
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop(){
  button1Val = digitalRead(button1Pin);
  button2Val = digitalRead(button2Pin);
  // button push hua
  if (button1Val == 0){
    // dekho brightness kitni hai agar 255 se kam to agge bado
    if (brightNess < 255){
      // brigthnes badenge jo bad me analog write me gaya hai
      brightNess = brightNess + 5;
      Serial.println(brightNess);
      delay(dt);
    }
      
  }
  // dusara button push hua
  else if (button1Val == 0){
    // isme 0 to nahi hai brightness check karega
    if (brightNess > 0){
      // ab yaha brightness kam karenge
      brightNess = brightNess - 5;
      Serial.println(brightNess);
      delay(dt);
    }
  }

analogWrite(LEDpin, brightNess);
}
