#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
const int ledPin=2;
void setup(){
  Serial.begin(115200);
  SerialBT.begin("ESP32-Bluetooth");
  pinMode(ledPin, OUTPUT);
}
void loop(){
  if(Serial.available()){
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()){
    char c = SerialBT.read();
    if(c=='1'){
      digitalWrite(ledPin,HIGH);
    }else if (c=='0'){
      digitalWrite(ledPin, LOW);
    }
    }
    delay(20);
  }
