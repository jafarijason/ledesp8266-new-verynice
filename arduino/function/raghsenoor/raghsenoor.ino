  int redvalint     = 0;   int greenvalint   =0;     int bluevalint    =0;int delayfint = 0;
   int redvalintlast     = 0;   int greenvalintlast   =0;     int bluevalintlast    =0; 

   int shedatnoor = 100;
  const int numReadings = 20;

int readings[numReadings];      // the readings from the analog input
int readIndex = 0;              // the index of the current reading
int total = 0;                  // the running total
int average = 0;          
int inputPin = A0;
 
 #include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ArduinoOTA.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPUpdateServer.h> 
 
#include <FS.h>
 int counterwifi = 0;
extern "C" {
  #include<user_interface.h>
  }
 

const char* update_path = "/";
const char* update_username = "jafarib";
const char* update_password = "sara1@#4";
// 
//const char* ssid = "Irancell-3G/4G-D100";
//const char* password = "xjjjaw4p";
 
const char* ssid = "MHJ-MHJ";
const char* password = "masoode*8sarakoopaei1234";

const char* www_username = update_username;
const char* www_password = update_password;

ESP8266WebServer serverfsbrowser(28571);
ESP8266WebServer httpServer(28572);

ESP8266HTTPUpdateServer httpUpdater;

ESP8266WebServer server(80);
File fsUploadFile;
#include "FSbrows.h"
#include "updateota.h" 
 #include "spfi.h"

int raghsenoorrang = 1;

int sensorpin = A0;
int green = 12;
int blue = 13;
int red = 15;

 int hasasiatesensormic = 12;
  int maxvarianse = 2;
unsigned long maxvariansetime = 0;
unsigned long delayraghsenoor = 0;  
 
  int fan = 16;
int  sensorValue ;
int functionnumber = 1;
unsigned long lastchange = 0; 
//تنظیم دستی نور// 0 برای 
 //// 1 برای رقص نور مدل 1
 //2برای رقص نور مدل 2 
 //3 برای رقص نور مدل 3
 //4برای رقص نور مدل 4

//7 برای رندوم 1
//8برای رندوم 2
//9 برای رندوم 3
//10 رندوم 4

 #include "raghse1.h"
  #include "raghse2.h"
  #include "reachcolor.h"
   #include "random1.h"
    #include "random2.h"
     #include "random3.h"
      #include "random4.h"
  #include "webserwerfunction.h"


void setup() {
  Serial.begin(9600);

   for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
  
  Serial.print("\n");
analogWriteRange(255);
  
  spfisetup();

  
 
  ArduinoOTA.begin();

  
  SPIFFS.begin();
  {
    Dir dir = SPIFFS.openDir("/");
    while (dir.next()) {
      String fileName = dir.fileName();
      size_t fileSize = dir.fileSize();
      Serial.printf("FS File: %s, size: %s\n", fileName.c_str(), formatBytes(fileSize).c_str());
    }
    Serial.printf("\n");
  }


 
  Serial.printf("Connecting to %s\n", ssid);
  if (String(WiFi.SSID()) != String(ssid)) {
    WiFi.mode(WIFI_AP_STA);
   
 
    WiFi.begin(ssid, password);
  }
WiFi.softAP( "RGBLED-"+ String (system_get_chip_id(),HEX) , "1234567890");

  Serial.println("");
  Serial.print("Connected! IP address: ");
  Serial.println(WiFi.localIP());

 fsbrowssetup();

  httpUpdater.setup(&httpServer, update_path, update_username, update_password);
  httpServer.begin();


 
  pinMode(A0, INPUT);
 pinMode(green, OUTPUT);pinMode(blue, OUTPUT); pinMode(red, OUTPUT);       pinMode(fan, OUTPUT);    digitalWrite(fan, HIGH);
 
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    Serial.println( counterwifi);
    counterwifi = counterwifi+1;
    if( counterwifi > 20){
       break;
    }
  }

Serial.print("Connected! IP address: ");
  Serial.println(WiFi.localIP());


   server.on("/"               ,[](){File f=SPIFFS.open("/index.htm"     ,"r"); Serial.println("---------------");server.streamFile(f,"text/html"      );f.close();});
   server.on("/index.html"               ,[](){File f=SPIFFS.open("/index.htm"     ,"r"); Serial.println("---------------");server.streamFile(f,"text/html"      );f.close();});
  
    server.on("/setcolor"              , setcolor); 
    server.on("/setdelayrandom1"              , setdelayrandom1); 
    server.on("/setdelayrandom2"              , setdelayrandom2); 
    server.on("/setdelayrandom3"              , setdelayrandom3); 
    server.on("/setdelayrandom4"              , setdelayrandom4);

       server.on("/setshedatnoor"              , setshedatnoor);
  server.begin();
   maxvariansetime = millis();
   delayraghsenoor =  millis();
}

 
void loop() {

variansedetect();
     
  server.handleClient();
   ArduinoOTA.handle();
  serverfsbrowser.handleClient();
   httpServer.handleClient();

  if(functionnumber == 0 ){
     reachcolor();
  }
  if(functionnumber == 1 ){
     raghse1();
  }
    if(functionnumber == 2 ){
     raghse2();
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
