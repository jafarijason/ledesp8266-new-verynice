
void random5(){



   if ((millis() - lastchange) > delayfint) {
  lastchange =  millis() ;


if(redvalintlast == redvalint && greenvalintlast == greenvalint && bluevalintlast == bluevalint ){
int salaaaaaaammmm = random(1,4);

if(salaaaaaaammmm == 1){redvalint = 255 ;greenvalint = 0 ; bluevalint = 0; 
}else if(salaaaaaaammmm == 2){redvalint = 0 ;greenvalint = 255 ; bluevalint = 0;  
}else if(salaaaaaaammmm == 3){redvalint = 0 ;greenvalint = 0 ; bluevalint = 255; }
   
}







  
                              if(redvalintlast != redvalint || greenvalintlast != greenvalint || bluevalintlast != bluevalint ){
                                                      if(redvalintlast>redvalint){    redvalintlast = redvalintlast-1;  }else if(redvalintlast<redvalint){ redvalintlast = redvalintlast+1; }
                                                      if(greenvalintlast>greenvalint){    greenvalintlast = greenvalintlast-1;  }else  if(greenvalintlast<greenvalint){ greenvalintlast = greenvalintlast+1; }
                                                       if(bluevalintlast>bluevalint){    bluevalintlast = bluevalintlast-1;  }else   if(bluevalintlast<bluevalint){ bluevalintlast = bluevalintlast+1; }
                                                    
                                                    
                                                     analogWrite(red, redvalintlast * shedatnoor /100 );
                                                     analogWrite(green, greenvalintlast * shedatnoor /100);
                                                       analogWrite(blue, bluevalintlast * shedatnoor /100);
                                                  
                             }

   
                          }

}


