void flasher7(){
  int redflash ,greenflash,blueflash;
 if(flasher5numberrang > 2){

          flasher5numberrang = 0;
         }
if(flasher5numberrang == 0 ){ redflash  = 255;    greenflash = 0;      blueflash = 0;}
if(flasher5numberrang == 1 ){ redflash  = 0  ;    greenflash = 255;    blueflash = 0;}
if(flasher5numberrang == 2 ){ redflash  = 0  ;    greenflash = 0;      blueflash = 255;}
 

  
 


         
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

