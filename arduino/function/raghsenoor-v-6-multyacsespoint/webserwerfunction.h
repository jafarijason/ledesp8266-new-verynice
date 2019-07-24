void setcolor(){

   if (server.hasArg("redval")== false||server.hasArg("greenval")== false||server.hasArg("blueval")== false||server.hasArg("delayf")== false){server.send(200, "text/plain", "Body not received");return;}
   // functionnumber = 0;
     
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



void hasasiatesensormictanzim(){


if (server.hasArg("hasasiatesensormictanzim")== false){server.send(200, "text/plain", "Body not received");return;}
 
       String hasasiatesensormictanzimgg =server.arg("hasasiatesensormictanzim");

     
       hasasiatesensormic = hasasiatesensormictanzimgg.toInt();
String HTML= " hasasiatesensormictanzimgg : " +hasasiatesensormictanzimgg ;

 
 server.send(200, "text/html", HTML);
  


  
}





void setflasherdelaylocal(){


if (server.hasArg("setflasherdelaylocal")== false){server.send(200, "text/plain", "Body not received");return;}
 
       String setflasherdelaylocalstring =server.arg("setflasherdelaylocal");

     
       flasherdelaylocal = setflasherdelaylocalstring.toInt();
String HTML= " setflasherdelaylocalstring : " +setflasherdelaylocalstring ;

 
 server.send(200, "text/html", HTML);
  


  
}



void flasher1set(){

flasheron = 15;
  functionnumber = 3 ;
  flasherdelay = 1000;
  String HTML= " flasher1set : "  ;

 
 server.send(200, "text/html", HTML);
  
}

void flasher2set(){

flasheron = 15;
  functionnumber = 4 ;
  flasherdelay = 1000;
  String HTML= " flasher1set : "  ;

 
 server.send(200, "text/html", HTML);
  
}

void flasher3set(){

flasheron = 15;
  functionnumber = 4 ;
  flasherdelay = 1000;
  String HTML= " flasher1set : "  ;

 
 server.send(200, "text/html", HTML);
  
}



void raghse1function(){

   functionnumber = 1 ;
   
  String HTML= " raghse1function : "  ;

 
 server.send(200, "text/html", HTML);
}




void raghse2function(){

   functionnumber = 2 ;
   
  String HTML= " raghse1function : "  ;

 
 server.send(200, "text/html", HTML);
}



