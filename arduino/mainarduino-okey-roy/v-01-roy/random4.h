
void random4(){



   if ((millis() - lastchange) > delayfint) {
  lastchange =  millis() ;


if(redvalintlast == redvalint && greenvalintlast == greenvalint && bluevalintlast == bluevalint ){

  redvalint = random(  20);
  greenvalint= random(  20);
  bluevalint = random(  255);
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
