 
void reachcolor(){



   if ((millis() - lastchange) > delayfint) {
  lastchange =  millis() ;
                              if(redvalintlast != redvalint || greenvalintlast != greenvalint || bluevalintlast != bluevalint ){
                                                      if(redvalintlast>redvalint){    redvalintlast = redvalintlast-1;  }else{ redvalintlast = redvalintlast+1; }
                                                      if(greenvalintlast>greenvalint){    greenvalintlast = greenvalintlast-1;  }else{ greenvalintlast = greenvalintlast+1; }
                                                       if(bluevalintlast>bluevalint){    bluevalintlast = bluevalintlast-1;  }else{ bluevalintlast = bluevalintlast+1; }
                                                    
                                                    
                                                     analogWrite(red, redvalintlast );
                                                     analogWrite(green, greenvalintlast);
                                                       analogWrite(blue, bluevalintlast);
                                                  
                             }

   
                          }

}


