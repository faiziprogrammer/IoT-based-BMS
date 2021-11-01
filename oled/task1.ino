// Example sketch for testing OLED display

// We need to include Wire.h for I2C communication
#include <Wire.h>
#include "OLED.h"

// Declare OLED display
// display(SDA, SCL);
// SDA and SCL are the GPIO pins of ESP8266 that are connected to respective pins of display.
OLED display(4, 5);
int analogPin;
void setup() {
  Serial.begin(9600);
  Serial.println("OLED test!");

  // Initialize display
  display.begin();

  // Test message

}
void loop() {
  display.print("VOLTAGE");
 
float    val = analogRead(analogPin);  // read the input pin
  float voltage = val * (3.0 / 1023.0);
  Serial.println(voltage);          // debug value
  char result[8]; // Buffer big enough for 7-character float
dtostrf(voltage, 6, 2, result);
   display.print(result, 2, 2);
  delay(500);
