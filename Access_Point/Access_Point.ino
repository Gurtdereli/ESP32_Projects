#include <WiFi.h>

void setup()
{
Serial.begin(9600);

  delay(1000);
  Serial.println("START");
  WiFi.softAP("Open Network","12345678");
  Serial.println("IP:");
  Serial.println((WiFi.softAPIP()));

}


void loop()
{

    Serial.println("Connected devices:");
    Serial.println((WiFi.softAPgetStationNum()));
    delay(5000);

}
