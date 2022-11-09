// serial help karta hai signal send karne ke liye or koi se chee print kar vane ke liye

int j = 1;
int waitKey = 750;
void setup(){
  Serial.begin(9600);
  }

void loop(){
  // ab ye java jaisa hai print me ekbar print o ke dusari bar usse line me priint hoga
  // println karenge to ek bar print hoke dusari cheez dusare line me print hoga
  // Serial.print(j);
  Serial.println(j);
  j = j+1; 
  delay(waitKey); 
  }
  
