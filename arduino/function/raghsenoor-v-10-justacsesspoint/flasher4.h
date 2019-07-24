void flasher4(){
 
    
   
  if (flash6state==0 ){

    flash6state=1;
      redflash  = random(   0,255); if (redflash < 80){  redflash = 255;  }
    greenflash = random(  0, 255); if (greenflash < 80){  greenflash = 255;  }
      blueflash = random( 0 ,  255); if (blueflash < 80){  blueflash = 255;  }
      
  }
  
 
  
if( ( millis() -flasherdelaytime6change) >   1    ){
   flasherdelaytime6change =  millis();
   if(redghabl6 == redflash && greenghabl6 == greenflash && blueghabl6 == blueflash ){
    flash6state = 0;
    } 

    if(redghabl6 > redflash){redghabl6  =  redghabl6 -1; }
 if(redghabl6 < redflash) {redghabl6  =redghabl6 +1;} 
if(greenghabl6 > greenflash){greenghabl6  =  greenghabl6 -1; } 
if(greenghabl6 < greenflash) {greenghabl6  =greenghabl6 +1;} 
if(blueghabl6 > blueflash){blueghabl6  =  blueghabl6 -1; }
 if(blueghabl6 < blueflash) {blueghabl6  =blueghabl6 +1;} }

         
         
           

       
if( ( millis() -flasherdelaytime) >=  flasherdelaylocal  && flasherstat == 0 ){


     analogWrite(red, redghabl6);    analogWrite(green, greenghabl6);   analogWrite(blue,blueghabl6   );
    if(redghabl6 == redflash && greenghabl6 == greenflash && blueghabl6 == blueflash ){
    flash6state = 0;
    
    }  

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

