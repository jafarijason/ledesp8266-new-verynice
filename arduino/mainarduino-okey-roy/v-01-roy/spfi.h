void spfisetup(){

SPIFFS.begin();
//
//File maxredfile   = SPIFFS.open("/00redmax.xml",     "r");  maxred   =    maxredfile.readStringUntil('\n').toInt();   Serial.println("maxred" +   String(maxred) ); 
//File maxgreenfile = SPIFFS.open("/00maxgreen.xml",   "r");  maxgreen =    maxgreenfile.readStringUntil('\n').toInt(); Serial.println("maxgreen" +  String(maxgreen)); 
//File maxbluefile  = SPIFFS.open("/00bluemax.xml",    "r");  maxblue  =    maxbluefile.readStringUntil('\n').toInt();  Serial.println("maxblue" +  String(maxblue)); 




  
}
