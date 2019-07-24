 int sensorpin = A0;
void setup() {
  Serial.begin(9600);
  pinMode(15, OUTPUT);pinMode(12, OUTPUT);pinMode(13, OUTPUT); pinMode(16, OUTPUT);digitalWrite(16, HIGH);
}

 
void loop() {
  int  sensorValue = analogRead(sensorpin);
    sensorValue = map(sensorValue, 0, 1023, 0, 255);
   Serial.println(sensorValue);
  int ss = random(0, sensorValue);
   int ss1 = random(0, sensorValue);
    int ss2 = random(0, sensorValue);
  analogWrite(15,ss);
   analogWrite(12,ss1);
    analogWrite(13,ss2);
      delay(2);
     
    
                          
}
