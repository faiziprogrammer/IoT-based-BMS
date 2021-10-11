#include <Wire.h>

void setup() {
 Serial.begin(9600); /* begin serial for debug */
 Wire.begin(); /* join i2c bus with SDA=D1 and SCL=D2 of NodeMCU */
}

void loop() {

 x=Wire.requestFrom(8, 13); /* request & read data of size 13 from slave */
 while (Wire.available()) { // slave may send less than requested
    char c = Wire.read(); // receive a byte as character
serial.print(c);
 delay(1000);
}
