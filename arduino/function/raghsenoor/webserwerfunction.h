void setcolor(){

   if (server.hasArg("redval")== false||server.hasArg("greenval")== false||server.hasArg("blueval")== false||server.hasArg("delayf")== false){server.send(200, "text/plain", "Body not received");return;}
    functionnumber = 0;
     
     String redval =server.arg("redval");
     String greenval =server.arg("greenval");
     String blueval =server.arg("blueval");
       String delayf =server.arg("delayf");

        redvalint     =  redval.toInt();
       greenvalint   = greenval.toInt();
       bluevalint    = blueval.toInt();
       delayfint = delayf.toInt();
String HTML="redval : "+redval + " greenval : " +greenval +" blueval : " +blueval+" delayf : " +delayf ;

 
 server.send(200, "text/html", HTML);
  
}



void setdelayrandom1(){

if (server.hasArg("delayf")== false){server.send(200, "text/plain", "Body not received");return;}
 functionnumber = 7;
       String delayf =server.arg("delayf");

     
       delayfint = delayf.toInt();
String HTML= " delayf : " +delayf ;

 
 server.send(200, "text/html", HTML);
  

  
}


void setdelayrandom2(){

if (server.hasArg("delayf")== false){server.send(200, "text/plain", "Body not received");return;}
 functionnumber = 8;
       String delayf =server.arg("delayf");

     
       delayfint = delayf.toInt();
String HTML= " delayf : " +delayf ;

 
 server.send(200, "text/html", HTML);
  

  
}




void setdelayrandom3(){

if (server.hasArg("delayf")== false){server.send(200, "text/plain", "Body not received");return;}
 functionnumber = 9;
       String delayf =server.arg("delayf");

     
       delayfint = delayf.toInt();
String HTML= " delayf : " +delayf ;

 
 server.send(200, "text/html", HTML);
  

  
}




void setdelayrandom4(){

if (server.hasArg("delayf")== false){server.send(200, "text/plain", "Body not received");return;}
 functionnumber = 10;
       String delayf =server.arg("delayf");

     
       delayfint = delayf.toInt();
String HTML= " delayf : " +delayf ;

 
 server.send(200, "text/html", HTML);
  

  
}



void setshedatnoor(){


if (server.hasArg("shedatnoor")== false){server.send(200, "text/plain", "Body not received");return;}
 
       String shedatnoorbb =server.arg("shedatnoor");

     
       shedatnoor = shedatnoorbb.toInt();
String HTML= " shedatnoorbb : " +shedatnoorbb ;

 
 server.send(200, "text/html", HTML);
  


  
}


