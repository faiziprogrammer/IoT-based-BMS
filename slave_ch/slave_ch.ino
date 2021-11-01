#include <Wire.h>

void setup() {
 Wire.begin(8);                /* join i2c bus with address 8 */
 Wire.onRequest(requestEvent); /* register request event */
 Serial.begin(9600);           /* start serial for debug */
}

void loop() {
 delay(100);
}


}

// function that executes whenever data is requested from master
void requestEvent() {
  x = analogRead(A0);//Reading value from Potentiometer
  x/=4;
  delay(1000);
}
