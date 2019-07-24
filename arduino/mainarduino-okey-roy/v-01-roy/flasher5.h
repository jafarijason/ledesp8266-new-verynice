void flasher5(){
  int redflash ,greenflash,blueflash;
 if(flasher5numberrang > 15){

          flasher5numberrang = 0;
         }
if(flasher5numberrang == 0 ){ redflash  = 255;    greenflash = 0;      blueflash = 0;}
if(flasher5numberrang == 1 ){ redflash  = 0  ;    greenflash = 255;    blueflash = 0;}
if(flasher5numberrang == 2 ){ redflash  = 0  ;    greenflash = 0;      blueflash = 255;}
if(flasher5numberrang == 3 ){ redflash  = 255;    greenflash = 150;    blueflash = 0;}
if(flasher5numberrang == 4 ){ redflash  = 0;      greenflash = 250;    blueflash = 150;}
if(flasher5numberrang == 5 ){ redflash  = 150;    greenflash = 0;      blueflash = 250;}
if(flasher5numberrang == 6 ){ redflash  = 255;    greenflash = 255;      blueflash = 255;}
if(flasher5numberrang == 7 ){ redflash  = 100;    greenflash = 180;      blueflash = 255;}
if(flasher5numberrang == 8 ){ redflash  = 255;    greenflash = 100;      blueflash = 180;}
if(flasher5numberrang == 9 ){ redflash  = 180;    greenflash = 255;      blueflash = 100;}
if(flasher5numberrang == 10 ){ redflash  = 255;    greenflash = 255;      blueflash = 0;}
if(flasher5numberrang == 11 ){ redflash  = 0  ;    greenflash = 255;      blueflash = 255;}
if(flasher5numberrang == 12 ){ redflash  = 255;    greenflash = 255;      blueflash = 255;}
if(flasher5numberrang == 13 ){ redflash  = 70;    greenflash = 150;      blueflash = 255;}
if(flasher5numberrang == 14 ){ redflash  = 255;    greenflash = 70;      blueflash = 150;}
if(flasher5numberrang == 15 ){ redflash  = 150;    greenflash = 255;      blueflash = 70;}

  
 


         
  flasher5numberrang = flasher5numberrang +1 ;

        
           

       
if( ( millis() -flasherdelaytime) >=  flasherdelaylocal  && flasherstat == 0 ){


   
   analogWrite(blue,blueflash   );
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
