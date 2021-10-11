//Code for the Master board
#include<Wire.h>//This library is used for I2C communication
int x;
void setup() {
}
void loop() {
  x = analogRead(A0);//Reading value from Potentiometer
  x/=4;
  Serial.print(x);
  delay(1000);
}
