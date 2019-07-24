
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
   
     sensorValue = map(sensorValue, 0, 1023, 0, 255);
     Serial.println(sensorValue);
     if( sensorValue >=200){
      sensorValue = 255;
     }else  if (sensorValue > 120 && sensorValue <200 ){
      sensorValue = 120;
     }else  if (sensorValue > 50 && sensorValue <=120 ){
      sensorValue = 50;
     }else  if ( sensorValue <= 50 ){
      sensorValue = 0;
     }
    int ss = random(0, sensorValue);
   int ss1 = random(0, sensorValue);
    int ss2 = random(0, sensorValue);
  analogWrite(15,random(0, ss));
   analogWrite(12,random(0, 0));
    analogWrite(13,random(0, 0));
    
   
 analogWrite(15,0);
   analogWrite(12,0);
    analogWrite(13,0);
   
}
