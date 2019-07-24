
 int salammmm = 1 ;
 void flasher8(){
   
  if (flash6state==0 ){

    flash6state=1;

   
   
    if(salammmm == 1){redflash = 255 ; greenflash = 0 ;blueflash = 0; salammmm = 2;
    }else if(salammmm == 2){redflash = 0 ; greenflash = 255 ;blueflash = 0;salammmm = 3;
    }else if(salammmm == 3){redflash = 0 ; greenflash = 0 ;blueflash = 255; salammmm = 1;}
      
      
  }
  
 
        
         
 
   

       
if( ( millis() -flasherdelaytime) >=  flasherdelaylocal  && flasherstat == 0 ){
 redghabl6 = redflash;greenghabl6 = greenflash;blueghabl6 = blueflash;
    analogWrite(red, redghabl6);    analogWrite(green, greenghabl6);   analogWrite(blue,blueghabl6   );
   flash6state = 0;

flasherstat = 1;
     
 
flasherdelaytime = millis() ;
}
if((millis() - flasherdelaytime) > flasherdelaylocal && flasherstat ==1){
  analogWrite(blue, 0);
       analogWrite(green, 0); 
      analogWrite(red, 0);
      flasherstat = 0 ;
flasherdelaytime = millis() ;

       
}

}

