 
void raghse3(){

if((millis() - delayraghsenoor) > 100){

      analogWrite(blue, 0);

       analogWrite(green, 0);
 
      analogWrite(red, 0);
     
      delayraghsenoor =  millis();
      
  
}
     


raghsenoorrang = random(1, 4);
 
   
 
  
      
  int varianse =sensorValue -average; 
    
     if(varianse > hasasiatesensormic){

     if(   varianse > maxvarianse   ){
maxvarianse =varianse;
   maxvariansetime = millis();
     }
     
      
   int    darsad = 255;
   int farsadint = darsad ;
    
   
    

     
  if((millis() - delayraghsenoor) > 5){

   
     
if(raghsenoorrang ==1){
  
      analogWrite(red,  255);

       analogWrite(green, 0);
 
      analogWrite(blue, 0);
      
}else if(raghsenoorrang ==2){
  
      analogWrite(red,  0);

       analogWrite(green, 255);
 
      analogWrite(blue,0);
      
}else if(raghsenoorrang ==3){
  
      analogWrite(red,  0);

       analogWrite(green,0);
 
      analogWrite(blue, 255);
      
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
















 
