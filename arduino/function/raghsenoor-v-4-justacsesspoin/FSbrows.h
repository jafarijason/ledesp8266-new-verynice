
String formatBytes(size_t bytes) {
  if (bytes < 1024) {
    return String(bytes) + "B";
  } else if (bytes < (1024 * 1024)) {
    return String(bytes / 1024.0) + "KB";
  } else if (bytes < (1024 * 1024 * 1024)) {
    return String(bytes / 1024.0 / 1024.0) + "MB";
  } else {
    return String(bytes / 1024.0 / 1024.0 / 1024.0) + "GB";
  }
}




String getContentType(String filename) {
  if (serverfsbrowser.hasArg("download")) {
    return "application/octet-stream";
  } else if (filename.endsWith(".htm")) {
    return "text/html";
  } else if (filename.endsWith(".html")) {
    return "text/html";
  } else if (filename.endsWith(".css")) {
    return "text/css";
  } else if (filename.endsWith(".js")) {
    return "application/javascript";
  } else if (filename.endsWith(".png")) {
    return "image/png";
  } else if (filename.endsWith(".gif")) {
    return "image/gif";
  } else if (filename.endsWith(".jpg")) {
    return "image/jpeg";
  } else if (filename.endsWith(".ico")) {
    return "image/x-icon";
  } else if (filename.endsWith(".xml")) {
    return "text/xml";
  } else if (filename.endsWith(".pdf")) {
    return "application/x-pdf";
  } else if (filename.endsWith(".zip")) {
    return "application/x-zip";
  } else if (filename.endsWith(".gz")) {
    return "application/x-gzip";
  }
  return "text/plain";
}







bool handleFileRead(String path) {
  Serial.println("handleFileRead: " + path);
  if (path.endsWith("/")) {
  if (!serverfsbrowser.authenticate(www_username, www_password)) {
        serverfsbrowser.requestAuthentication();
    }
    path += "edit.htm";
  }
  String contentType = getContentType(path);
  String pathWithGz = path + ".gz";
  if (SPIFFS.exists(pathWithGz) || SPIFFS.exists(path)) {
    if (SPIFFS.exists(pathWithGz)) {
      path += ".gz";
    }
    File file = SPIFFS.open(path, "r");
    serverfsbrowser.streamFile(file, contentType);
    file.close();
    return true;
  }
  return false;
}




void handleFileUpload() {
  if (serverfsbrowser.uri() != "/edit") {
    return;
  }
  HTTPUpload& upload = serverfsbrowser.upload();
  if (upload.status == UPLOAD_FILE_START) {
    String filename = upload.filename;
    if (!filename.startsWith("/")) {
      filename = "/" + filename;
    }
    Serial.print("handleFileUpload Name: "); Serial.println(filename);
    fsUploadFile = SPIFFS.open(filename, "w");
    filename = String();
  } else if (upload.status == UPLOAD_FILE_WRITE) {
    //Serial.print("handleFileUpload Data: "); Serial.println(upload.currentSize);
    if (fsUploadFile) {
      fsUploadFile.write(upload.buf, upload.currentSize);
    }
  } else if (upload.status == UPLOAD_FILE_END) {
    if (fsUploadFile) {
      fsUploadFile.close();
    }
    Serial.print("handleFileUpload Size: "); Serial.println(upload.totalSize);
  }
}







void handleFileDelete() {
  if (serverfsbrowser.args() == 0) {
    return serverfsbrowser.send(500, "text/plain", "BAD ARGS");
  }
  String path = serverfsbrowser.arg(0);
  Serial.println("handleFileDelete: " + path);
  if (path == "/") {
    return serverfsbrowser.send(500, "text/plain", "BAD PATH");
  }
  if (!SPIFFS.exists(path)) {
    return serverfsbrowser.send(404, "text/plain", "FileNotFound");
  }
  SPIFFS.remove(path);
  serverfsbrowser.send(200, "text/plain", "");
  path = String();
}

















void handleFileCreate() {
  if (serverfsbrowser.args() == 0) {
    return serverfsbrowser.send(500, "text/plain", "BAD ARGS");
  }
  String path = serverfsbrowser.arg(0);
  Serial.println("handleFileCreate: " + path);
  if (path == "/") {
    return serverfsbrowser.send(500, "text/plain", "BAD PATH");
  }
  if (SPIFFS.exists(path)) {
    return serverfsbrowser.send(500, "text/plain", "FILE EXISTS");
  }
  File file = SPIFFS.open(path, "w");
  if (file) {
    file.close();
  } else {
    return serverfsbrowser.send(500, "text/plain", "CREATE FAILED");
  }
  serverfsbrowser.send(200, "text/plain", "");
  path = String();
}









void handleFileList() {
  if (!serverfsbrowser.hasArg("dir")) {
    serverfsbrowser.send(500, "text/plain", "BAD ARGS");
    return;
  }

  String path = serverfsbrowser.arg("dir");
  Serial.println("handleFileList: " + path);
  Dir dir = SPIFFS.openDir(path);
  path = String();

  String output = "[";
  while (dir.next()) {
    File entry = dir.openFile("r");
    if (output != "[") {
      output += ',';
    }
    bool isDir = false;
    output += "{\"type\":\"";
    output += (isDir) ? "dir" : "file";
    output += "\",\"name\":\"";
    output += String(entry.name()).substring(1);
    output += "\"}";
    entry.close();
  }

  output += "]";
  serverfsbrowser.send(200, "text/json", output);
}



void fsbrowssetup(){

  
 
 serverfsbrowser.on("/list", HTTP_GET, handleFileList);
   
  serverfsbrowser.on("/edit", HTTP_GET, []() {

     if (!serverfsbrowser.authenticate(www_username, www_password)) {
      return serverfsbrowser.requestAuthentication();
    }
    if (!handleFileRead("/edit.htm")) {
      serverfsbrowser.send(404, "text/plain", "FileNotFound");
    }
  });
  
  serverfsbrowser.on("/edit", HTTP_PUT, handleFileCreate);
  
  serverfsbrowser.on("/edit", HTTP_DELETE, handleFileDelete);
   
  serverfsbrowser.on("/edit", HTTP_POST, []() {
    serverfsbrowser.send(200, "text/plain", "");
  }, handleFileUpload);



  serverfsbrowser.onNotFound([]() {
    if (!handleFileRead(serverfsbrowser.uri())) {
      serverfsbrowser.send(404, "text/plain", "FileNotFound");
    }
  });

  //get heap status, analog input value and all GPIO statuses in one json call
  serverfsbrowser.on("/all", HTTP_GET, []() {
    String json = "{";
    json += "\"heap\":" + String(ESP.getFreeHeap());
    json += ", \"analog\":" + String(analogRead(A0));
    json += ", \"gpio\":" + String((uint32_t)(((GPI | GPO) & 0xFFFF) | ((GP16I & 0x01) << 16)));
    json += "}";
    serverfsbrowser.send(200, "text/json", json);
    json = String();
  });
  serverfsbrowser.begin();
  Serial.println("HTTP serverfsbrowser started");






  
}



