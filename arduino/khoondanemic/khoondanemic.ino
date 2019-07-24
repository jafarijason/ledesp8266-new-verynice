
int ghatovaslsensornoor = 5;
int sensorpin = A0;
int green = 12;
int blue = 13;
int red = 15;
 
void setup() {
    Serial.begin(9600);
    pinMode(ghatovaslsensornoor, OUTPUT); 
    digitalWrite(ghatovaslsensornoor, HIGH);   
    delay(1000);
     
 
    
    digitalWrite(green, LOW);digitalWrite(blue, LOW);digitalWrite(red, LOW);
}

void loop() {
  
int  sensorValue = analogRead(sensorpin);
   Serial.println(sensorValue);
   
 
  
}
