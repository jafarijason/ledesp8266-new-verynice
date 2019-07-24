void flasher2(){
//Serial.println(functionnumber);
int redflash  = random(  150, 255);
  int greenflash = random(  150, 255);
    int blueflash = random( 150,  255);
    
 

 
 

if( ( millis() -flasherdelaytime) >=  flasherdelaylocal  && flasherstat == 0 ){

flasherdelaylocal =  random(  300); 
  flasherdelaylocal  =  flasherdelaylocal - flasherdelaylocal * .05 ;
   analogWrite(blue, blueflash);
       analogWrite(green, greenflash); 
      analogWrite(red, redflash);

flasherstat = 1;
     
 
flasherdelaytime = millis() ;
}
if((millis() - flasherdelaytime) > flasheron && flasherstat ==1){
  analogWrite(blue, 0);
       analogWrite(green, 0); 
      analogWrite(red, 0);
      flasherstat = 0 ;
  
}

  



  
}

