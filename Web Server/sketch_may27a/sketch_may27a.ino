#include <WiFi.h>

WiFiServer server(80);

WiFiClient client;

void setup()
{
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
  Serial.println((WiFi.localIP()));
  server.begin();

}


void loop()
{

    client = server.available();
    if (!client) { return; }
    while(!client.available()){  delay(1); }
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
    client.println("</body>");
    client.println("</html>");
    delay(1);

}
