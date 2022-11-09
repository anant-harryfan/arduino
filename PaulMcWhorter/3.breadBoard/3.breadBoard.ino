// watch the tut
// C++ code
// Breadboards are a key, reusable piece of hobby equipment in electronics and provide quick circuit construction. However, while breadboards are great, they should not always be used.
// When to Use a Breadboard - 
// Breadboards allow components to be easily inserted and removed—therefore, the word prototyping immediately comes to mind. 
// If an engineer designs a simple module or circuit that they want to test, a breadboard provides a cheap and quick solution (designing a PCB just to test a simple circuit can be overkill and expensive).

// we can connect 100 of things with just one bread board 
// it is connected vertically but not horizontaly and the gap in the bread board tells that now it will form an anathor circuit
int LED_BUILT = 12;
void setup()
{
  pinMode(LED_BUILT, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILT, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILT, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
