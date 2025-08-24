#include "FS.h"
#include "SPIFFS.h"

void setup()
{
Serial.begin(9600);
  delay(2000);
  Serial.println("Starting...");
  if (SPIFFS.begin(true)) {
    Serial.println("SPIFFS Mounted");

  } else {
    Serial.println("Problem to Mount SPIFFS");

  }
  File SPIFFS_File = SPIFFS.open("/test.txt", FILE_WRITE);
  if (SPIFFS_File) {
    Serial.println("File Created");
    if (SPIFFS_File.println("This is the first line")) {
      Serial.println("Line added to the file");

    } else {
      Serial.println("Line cannot be added to the file");

    }
    if (SPIFFS_File.println("This is the second line.")) {
      Serial.println("Line added to the file");

    } else {
      Serial.println("Line cannot be added to the file");

    }
    if (SPIFFS_File.println("This is the third line.")) {
      Serial.println("Line added to the file");

    } else {
      Serial.println("Line cannot be added to the file");

    }

  } else {
    Serial.println("File Not Created");

  }
  SPIFFS_File.close();
  delay(3000);
  Serial.println("Now reading from the line");
  File SPIFFS_File2 = SPIFFS.open("/test.txt");
  while ((SPIFFS_File2.available())){
    Serial.write((SPIFFS_File2.read()));
    delay(1000);

  }
  SPIFFS_File2.close();

}


void loop()
{


}
