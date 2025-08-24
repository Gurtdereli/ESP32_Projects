#include <WiFi.h>

void setup()
{
Serial.begin(9600);

  WiFi.disconnect();
  delay(3000);
  Serial.println("=====Program start=====");
  WiFi.begin("NASA","65536803");
  while ((WiFi.status() == WL_CONNECTED)){
    Serial.println("...");
    delay(300);

  }
  Serial.println("=====Connected=====");
  Serial.println("Your IP is:");
  Serial.println((WiFi.localIP()));

}


void loop()
{


}
