#include <WiFi.h>

#include <ESPmDNS.h>

String  ClientRequest;
WiFiServer server(80);

WiFiClient client;

String myresultat;

String ReadIncomingRequest(){
while(client.available()) {
ClientRequest = (client.readStringUntil('\r'));
 if ((ClientRequest.indexOf("HTTP/1.1")>0)&&(ClientRequest.indexOf("/favicon.ico")<0)){
myresultat = ClientRequest;
}
}
return myresultat;
}

void setup()
{
ClientRequest = "";

Serial.begin(9600);

  WiFi.disconnect();
  delay(1000);
  Serial.println("START");
  WiFi.begin("NASA","65536803");
  while ((!(WiFi.status() == WL_CONNECTED))){
    Serial.println("...");
    delay(300);

  }
  Serial.println("Connected");
  Serial.println("Your IP is:");
  Serial.println((WiFi.localIP()));
  server.begin();
  if (!MDNS.begin("test")) {
  Serial.println("Error setting up MDNS responder!");
  while(1) {
  delay(500);
   Serial.print(".");
  }
  }
MDNS.addService("http", "tcp", 80);

}


void loop()
{

    client = server.available();
    if (!client) { return; }
    while(!client.available()){  delay(1); }
    ClientRequest = (ReadIncomingRequest());
    client.flush();
    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("");
    client.println("<!DOCTYPE HTML>");
    client.println("<html>");
    client.println("<head>");
    client.println("</head>");
    client.println("<body>");
      client.println("<h1 style=""color:#ff0000"">");
      client.println("Welcome");
      client.println("</h1>");
      client.println("<span style=""color:#3333ff;font-size:14px"">");
      client.println("Server running since:");
      client.println("</span>");
      client.println("<span style=""color:#3333ff;font-size:14px"">");
      client.println((millis()/1000));
      client.println("</span>");
      client.println("<span style=""color:#3333ff;font-size:14px"">");
      client.println("seconds");
      client.println("</span>");
    client.println("</body>");
    client.println("</html>");
    delay(1);

}
