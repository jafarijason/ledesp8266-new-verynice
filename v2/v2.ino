int ghatovaslmic = 2;
int ghatovaslsensornoor = 5;
int sensorpin = A0;
int green = 12;
int blue = 13;
int red = 15;
void setup() {
   pinMode(green, OUTPUT);pinMode(blue, OUTPUT);pinMode(red, OUTPUT);
   pinMode(ghatovaslsensornoor, OUTPUT);pinMode(ghatovaslmic, OUTPUT);
   digitalWrite(ghatovaslmic, LOW);digitalWrite(ghatovaslsensornoor, LOW);digitalWrite(green, LOW);digitalWrite(blue, LOW);digitalWrite(red, LOW);

}

void loop() {
     digitalWrite(green, HIGH);     delay(20);         digitalWrite(green, LOW);   delay(20);
      digitalWrite(blue, HIGH);     delay(20);         digitalWrite(blue, LOW);   delay(20);
       digitalWrite(red, HIGH);     delay(20);         digitalWrite(red, LOW);   delay(20);                  

}
