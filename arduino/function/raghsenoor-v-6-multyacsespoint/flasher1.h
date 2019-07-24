void flasher1(){
//Serial.println(functionnumber);
int redflash  = random(  255);
  int greenflash = random(  255);
    int blueflash = random(  255);
    
if(flasherdelaylocal <= 30 ){
flasherdelaylocal = flasherdelay;
 
  
}

if( ( millis() -flasherdelaytime) >=  flasherdelaylocal  && flasherstat == 0 ){


  flasherdelaylocal  =  flasherdelaylocal - flasherdelaylocal * .08 ;
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

