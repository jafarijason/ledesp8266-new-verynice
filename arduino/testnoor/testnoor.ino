 int sensorpin = A0;
 int firstdelay = 200;
 int delayyyy = firstdelay;
 int delayrooshan = 50;
void setup() {
  Serial.begin(9600);
  pinMode(15, OUTPUT);pinMode(12, OUTPUT);pinMode(13, OUTPUT); pinMode(16, OUTPUT);digitalWrite(16, HIGH);
}

 
void loop() {
  int  sensorValue = analogRead(sensorpin);
    sensorValue = map(sensorValue, 0, 1023, 0, 255);
    
   Serial.println(sensorValue);
  int ss = random(200, sensorValue);
   int ss1 = random(0, sensorValue);
    int ss2 = random(100, sensorValue);
  analogWrite(15,random(0, ss));
   analogWrite(12,random(0, ss1));
    analogWrite(13,random(0, ss2));
      delay(delayrooshan);
      analogWrite(15,0);
   analogWrite(12,0);
    analogWrite(13,0);
    delay(delayyyy);
 analogWrite(15,255);
 delay(delayrooshan);




    
     analogWrite(15,0);
   analogWrite(12,0);
    analogWrite(13,0);
    delay(delayyyy);






    
    ss = random(0, sensorValue);
     ss1 = random(200, sensorValue);
      ss2 = random(100, sensorValue);
  analogWrite(15,random(0, ss));
   analogWrite(12,random(0, ss1));
    analogWrite(13,random(0, ss2));
      delay(delayrooshan);
      analogWrite(15,0);
   analogWrite(12,0);
    analogWrite(13,0);
    delay(delayyyy);




     analogWrite(13,255);
 delay(delayrooshan);
     analogWrite(15,0);
   analogWrite(12,0);
    analogWrite(13,0);
    delay(delayyyy);



    
    
    ss = random(100, sensorValue);
     ss1 = random(0, sensorValue);
      ss2 = random(200, sensorValue);
  analogWrite(15,random(0, ss));
   analogWrite(12,random(0, ss1));
    analogWrite(13,random(0, ss2));
      delay(delayrooshan);
      analogWrite(15,0);
   analogWrite(12,0);
    analogWrite(13,0);
    delay(delayyyy);



    
      analogWrite(12,255);
 delay(delayrooshan);
     analogWrite(15,0);
   analogWrite(12,0);
    analogWrite(13,0);
    delay(delayyyy);

    delayyyy = delayyyy -10 ;
    if(delayyyy <2){

      delayyyy =firstdelay;
    }
    
                          
}
