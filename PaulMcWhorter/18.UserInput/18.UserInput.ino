// C++ code
//
int numBlink;
String mes = "How many blink you want";
int redPin = 12;
int dt = 500;
void setup()
{
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.println(mes);
  while (Serial.available() == 0){
  // taki user ke liye wait kar pae jabh  tak vo kuch type na kare (khali chhodh ke)
  }
  numBlink = Serial.parseInt();
//  we can do       parseFloat, parseBool etc etc also              
  for(int j = 1; j<=numBlink; j = j+1){
    digitalWrite(redPin, HIGH);
    delay(dt); 
    digitalWrite(redPin, LOW);
    delay(dt);
  }    
}
