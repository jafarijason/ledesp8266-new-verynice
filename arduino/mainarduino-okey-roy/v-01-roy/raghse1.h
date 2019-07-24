void variansedetect(){
if((millis() - maxvariansetime) > 2000){

      maxvarianse = 2;
     }

     if((millis() - lastanalougeread) > 5){

     sensorValue = analogRead(sensorpin);
     lastanalougeread =  millis();
     }

   
      varianse =sensorValue -average;
 
 


     total = total - readings[readIndex];
  readings[readIndex] = sensorValue;

  total = total + readings[readIndex];
   readIndex = readIndex + 1;
   if (readIndex >= numReadings) {
       readIndex = 0;
  }


    
  
  average = total / numReadings;

}

void raghse1(){

if((millis() - delayraghsenoor) > 500){

      analogWrite(blue, 0);

       analogWrite(green, 0);
 
      analogWrite(red, 0);
     
      delayraghsenoor =  millis();
      
  
}
     


raghsenoorrang = random(1, 10);
 
  
  if(varianse >2){
     //Serial.println(varianse);
  }
 
 
  
      
  int varianse =sensorValue -average; 
    
     if(varianse > hasasiatesensormic){

     if(   varianse > maxvarianse   ){
maxvarianse =varianse;
   maxvariansetime = millis();
     }
     
      
   int    darsad = 255*  varianse /maxvarianse;
   int farsadint = darsad ;
   if(farsadint > 255){
    farsadint = 255;
   }
   if(farsadint < 240){
    farsadint = 240;
   }
   int yekdovom =  (farsadint/2);
    int yeksevom =  (farsadint/4);
    if (valueraghsemin > yeksevom ){
      valueraghsemin =yeksevom - 20;
    }
    Serial.print(farsadint);Serial.print("-"  );
     Serial.print ( yekdovom  );Serial.print("-"  );
     Serial.print("-" );   Serial.print(maxvarianse); Serial.print("-"  );Serial.println(yeksevom);


     
  if((millis() - delayraghsenoor) > 5){

   
     
if(raghsenoorrang ==1){
  
      analogWrite(red,  random(valueraghsemin, farsadint));

       analogWrite(green, random(valueraghsemin, yekdovom));
 
      analogWrite(blue, 0);
      
}else if(raghsenoorrang ==2){
  
      analogWrite(red,  0);

       analogWrite(green, random(valueraghsemin, farsadint));
 
      analogWrite(blue,random(valueraghsemin, yekdovom));
      
}else if(raghsenoorrang ==3){
  
      analogWrite(red,  random(valueraghsemin, yekdovom));

       analogWrite(green,0);
 
      analogWrite(blue, random(valueraghsemin, farsadint));
      
}else if(raghsenoorrang ==4){
  
      analogWrite(red,  random(valueraghsemin, farsadint));

       analogWrite(green,0);
 
      analogWrite(blue, random(valueraghsemin, farsadint));
      
}else if(raghsenoorrang ==5){
  
      analogWrite(red,0);

       analogWrite(green, random(valueraghsemin, farsadint));
 
      analogWrite(blue, random(valueraghsemin, farsadint));
      
}else if(raghsenoorrang ==6){
  
      analogWrite(red, random(valueraghsemin, farsadint));

       analogWrite(green, random(valueraghsemin, farsadint));
 
      analogWrite(blue,0);
      
}else if(raghsenoorrang ==7){
  
      analogWrite(red, random(valueraghsemin, farsadint));

       analogWrite(green, 0);
 
      analogWrite(blue,0);
      
}else if(raghsenoorrang ==8){
  
      analogWrite(red, 0);

       analogWrite(green, random(valueraghsemin, farsadint));
 
      analogWrite(blue,0);
      
}else if(raghsenoorrang ==9){
  
      analogWrite(red, 0);

       analogWrite(green, 0);
 
      analogWrite(blue,random(valueraghsemin, farsadint));
      
}else if(raghsenoorrang ==9){
  
      analogWrite(red, random(valueraghsemin,yeksevom));

       analogWrite(green, random(valueraghsemin,yeksevom));
 
      analogWrite(blue,random(valueraghsemin,yeksevom));
      
}

   delayraghsenoor =  millis();


     
       //delay(40);
     }else  {

      analogWrite(blue, 0);

       analogWrite(green, 0);
 
      analogWrite(red, 0);
     // delay(1);
      delayraghsenoor =  millis();
      
     } 

 }
  
}
















 
