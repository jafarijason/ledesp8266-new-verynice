void flasher3(){




         
         
           

       
if( ( millis() -flasherdelaytime) >=  flasherdelaylocal  && flasherstat == 0 ){


   
   analogWrite(blue, bluevalint);
       analogWrite(green, greenvalint); 
      analogWrite(red, redvalint);

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

