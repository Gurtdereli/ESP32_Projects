#include <WiFi.h>

const char* ssid = "your ssid";
const char* password = "your password";
void setup() {
Serial.begin(115200);
WiFi.begin(ssid, password);
Serial.print("Connecting to Wifi");
while (WiFi.status() !=WL_CONNECTED){
  Serial.print(".");
  delay(500);
}
Serial.println("Connected to Wifi");
Serial.print("IP address: ");
Serial.println(WiFi.localIP());
}

void loop() {
if ((WiFi.status() == WL_CONNECTED))
{
  Serial.println("Ping me");
  delay(5000);
}
else 
{
  Serial.println("Connection lost");
}
}
