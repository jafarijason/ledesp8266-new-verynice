  int redvalint     = 0;   int greenvalint   =0;     int bluevalint    =0;int delayfint = 2;
   int redvalintlast     = 0;   int greenvalintlast   =0;     int bluevalintlast    =0; 
int flasherdelay = 1000;
int flasherdelaylocal = 0 ;
int flasheron = 15;
int flasherstat=0;
unsigned long flasherdelaytime = 0;  
   int shedatnoor = 100;
  const int numReadings = 10;
 int varianse ;
int readings[numReadings];      // the readings from the analog input
int readIndex = 0;              // the index of the current reading
int total = 0;                  // the running total
int average = 0;          
int inputPin = A0;
 
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

ESP8266WebServer server(80);

#include <FS.h>
  
int raghsenoorrang = 1;

int sensorpin = A0;
int green = 12;
int blue = 13;
int red = 15;

 int hasasiatesensormic = 5;//analougebayad890bashe
  int maxvarianse = 2;
unsigned long maxvariansetime = 0;
unsigned long delayraghsenoor = 0;
unsigned long lastanalougeread = 0;  


 
  int fan = 16;
int  sensorValue ;
int functionnumber = 0;
unsigned long lastchange = 0; 
//تنظیم دستی نور// 0 برای 
 //// 1 برای رقص نور مدل 1
 //2برای رقص نور مدل 2 
//3 flasher1
//4 flasher2
 

//7 برای رندوم 1
//8برای رندوم 2
//9 برای رندوم 3
//10 رندوم 4

 #include "raghse1.h"
  #include "raghse2.h"
   #include "flasher1.h"
   #include "flasher2.h"
   #include "flasher3.h"
   #include "flasher4.h"
  
  #include "reachcolor.h"
   #include "random1.h"
    #include "random2.h"
     #include "random3.h"
      #include "random4.h"
  #include "webserwerfunction.h"
#ifndef APSSID
#define APSSID "ESPap"
#define APPSK  "salam1234salam"
#endif

/* Set these to your desired credentials. */
const char *ssid1 = APSSID;
const char *password1 = APPSK;

 
 
void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Configuring access point...");
  /* You can remove the password parameter if you want the AP to be open. */
  WiFi.softAP(ssid1, password1);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
 
  
  
 
 
  
 
   for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
  
  Serial.print("\n");
analogWriteRange(255);
   

 
  pinMode(A0, INPUT);
 pinMode(green, OUTPUT);pinMode(blue, OUTPUT); pinMode(red, OUTPUT);       pinMode(fan, OUTPUT);    digitalWrite(fan, HIGH);
 
   
delay(1000);
 Serial.println("");
//  
 SPIFFS.begin();
    server.on("/"               ,[](){File f=SPIFFS.open("/index.htm"      ,"r"); Serial.println("---------------");server.streamFile(f,"text/html"      );f.close();});
    server.on("/index.htm"      ,[](){File f=SPIFFS.open("/index.htm"      ,"r"); Serial.println("---------------");server.streamFile(f,"text/html"      );f.close();});
     server.on("/flasher3.htm"      ,[](){
      
      redvalint     =  150;
       greenvalint   = 150;
       bluevalint    = 150;
flasherdelaylocal =  300; 
      functionnumber = 5 ;
        
      
      File f=SPIFFS.open("/flasher3.htm"      ,"r"); Serial.println("---------------");server.streamFile(f,"text/html"      );f.close();});

       server.on("/flasher4.htm"      ,[](){
      
     
flasherdelaylocal =  300; 
      functionnumber = 6 ;
        
      
      File f=SPIFFS.open("/flasher4.htm"      ,"r"); Serial.println("---------------");server.streamFile(f,"text/html"      );f.close();});
   server.on("/manual.htm"     ,[](){functionnumber = 0; 
   redvalint = 0 ;greenvalint = 0 ; bluevalint = 0;delayfint = 2;
  // analogWrite(blue, 0);    analogWrite(green, 0);   analogWrite(red, 0);
   
   File f=SPIFFS.open("/manual.htm"     ,"r"); Serial.println("---------------");server.streamFile(f,"text/html"      );f.close();});
   server.on("/jscolor.js"     ,[](){File f=SPIFFS.open("/jscolor.js"     ,"r");server.streamFile(f,"text/javascript");f.close();});
   server.on("/setcolor"              , setcolor); 
    server.on("/setdelayrandom1"              , setdelayrandom1); 
    server.on("/setdelayrandom2"              , setdelayrandom2); 
    server.on("/setdelayrandom3"              , setdelayrandom3); 
     server.on("/setdelayrandom4"              , setdelayrandom4);
 
      server.on("/setshedatnoor"              , setshedatnoor);
       server.on("/setflasherdelaylocal"              , setflasherdelaylocal);
      server.on("/flasher1set"              , flasher1set);
        server.on("/flasher2set"              , flasher2set);
      server.on("/flasher3set"              , flasher3set);
  server.begin();
   maxvariansetime = millis();
   delayraghsenoor =  millis();
   lastanalougeread =  millis();
   flasherdelaytime =  millis();
}

 

void loop() {
server.handleClient();
 variansedetect();
     
  
  
  
 

  if(functionnumber == 0 ){
     reachcolor();
  }
  if(functionnumber == 1 ){
     raghse1();
  }
    if(functionnumber == 2 ){
     raghse2();
  }


  if(functionnumber == 3 ){
     flasher1();
  }
  
  if(functionnumber == 4 ){
     flasher2();
  }

  
  if(functionnumber == 5 ){
     flasher3();
  }

  if(functionnumber == 6 ){
     flasher4();
  }




  if(functionnumber == 7 ){
     random1();
  }

  
  if(functionnumber == 8 ){
     random2();
  }

  
  if(functionnumber == 9 ){
     random3();
  }

  
  if(functionnumber == 10 ){
     random4();
  }


 
 
    
}
