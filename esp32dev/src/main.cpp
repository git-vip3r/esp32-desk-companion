#include <Arduino.h>

void setup() {
  Serial.begin(115200);

  Serial.println("================================");
  Serial.println("Sentinel is online!");
  Serial.println("ESP32 connected successfully.");
  Serial.println("================================");
}

void loop() {
  Serial.println("Heartbeat");
  delay(3000);
}