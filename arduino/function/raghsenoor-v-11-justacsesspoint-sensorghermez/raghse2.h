
void raghse2(){

if((millis() - delayraghsenoor) > 5000){

      analogWrite(blue, 0);

       analogWrite(green, 0);
 
      analogWrite(red, 0);
     
      delayraghsenoor =  millis();
      
  
}
     


raghsenoorrang = random(1, 10);
 
  int varianse =sensorValue -average;
  if(varianse >2){
   //  Serial.println(varianse);
  }
 
 
  
      
    
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
    farsadint =  random(240, 255);
   }
  int yekdovom =  (farsadint*0.8);
    int yeksevom =  (farsadint*0.65);
    Serial.print(farsadint);Serial.print("-"  );
     Serial.print ( yekdovom  );Serial.print("-"  );
     Serial.print("-" );   Serial.print(maxvarianse); Serial.print("-"  );Serial.println(yeksevom);


     
  if((millis() - delayraghsenoor) > 15){

   
     
if(raghsenoorrang ==1){
  
      analogWrite(red,  random(0, farsadint));

       analogWrite(green, random(0, yekdovom));
 
      analogWrite(blue, 0);
      
}else if(raghsenoorrang ==2){
  
      analogWrite(red,  0);

       analogWrite(green, random(0, farsadint));
 
      analogWrite(blue,random(0, yekdovom));
      
}else if(raghsenoorrang ==3){
  
      analogWrite(red,  random(0, yekdovom));

       analogWrite(green,0);
 
      analogWrite(blue, random(0, farsadint));
      
}else if(raghsenoorrang ==4){
  
      analogWrite(red,  random(0, farsadint));

       analogWrite(green,0);
 
      analogWrite(blue, random(0, farsadint));
      
}else if(raghsenoorrang ==5){
  
      analogWrite(red,0);

       analogWrite(green, random(0, farsadint));
 
      analogWrite(blue, random(0, farsadint));
      
}else if(raghsenoorrang ==6){
  
      analogWrite(red, random(0, farsadint));

       analogWrite(green, random(0, farsadint));
 
      analogWrite(blue,0);
      
}else if(raghsenoorrang ==7){
  
      analogWrite(red, random(0, farsadint));

       analogWrite(green, 0);
 
      analogWrite(blue,0);
      
}else if(raghsenoorrang ==8){
  
      analogWrite(red, 0);

       analogWrite(green, random(0, farsadint));
 
      analogWrite(blue,0);
      
}else if(raghsenoorrang ==9){
  
      analogWrite(red, 0);

       analogWrite(green, 0);
 
      analogWrite(blue,random(0, farsadint));
      
}else if(raghsenoorrang ==9){
  
      analogWrite(red, random(0,yeksevom));

       analogWrite(green, random(0,yeksevom));
 
      analogWrite(blue,random(0,yeksevom));
      
}

   delayraghsenoor =  millis();


     
       //delay(40);
     }else  {

      int sasasas = random(1 , 4);
      if (sasasas == 1){

         analogWrite(blue,random(0 , 0));

       analogWrite(green,random(0 , 0));
 
      analogWrite(red,random(0 , farsadint ));
      }else  if (sasasas == 2){

         analogWrite(blue,random(0 , 0));

       analogWrite(green,random(0 , farsadint));
 
      analogWrite(red,random(0 , 0 ));
      }else  if (sasasas == 3){

         analogWrite(blue,random(0 , farsadint));

       analogWrite(green,random(0 , 0));
 
      analogWrite(red,random(0 , 0 ));
      }else  if (sasasas == 4){

         analogWrite(blue,random(0 , farsadint));

       analogWrite(green,random(0 , farsadint));
 
      analogWrite(red,random(0 , farsadint ));
      }
     // delay(1);
      delayraghsenoor =  millis();
      
     } 

 }
  
}
 
