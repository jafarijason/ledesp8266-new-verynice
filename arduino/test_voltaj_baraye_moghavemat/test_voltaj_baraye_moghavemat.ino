 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
 pinMode(15, OUTPUT);pinMode(12, OUTPUT);pinMode(13, OUTPUT);pinMode(16, OUTPUT);digitalWrite(16, HIGH);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(15, HIGH);  digitalWrite(12, HIGH);  digitalWrite(13, HIGH);    
  delay(5000);                      
 digitalWrite(15, LOW);  digitalWrite(12, LOW);  digitalWrite(13, LOW);    
  delay(5000);                      
}
