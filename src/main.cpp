#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n\nJaspal Marok | 000381777");
  Serial.println(ESP.getChipId());
  Serial.println(ESP.getFlashChipId());
}

void loop() {
  // put your main code here, to run repeatedly:
  long myTime = millis();
  Serial.println(myTime);

  delay(2000);
}