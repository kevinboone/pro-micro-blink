/**

Trivial blinky light example for SparkFun Pro Micro. This is derived from the
example on the SparkFun website, with minor modifications for use without the
Arduino IDE. Note that the recevie (RX) LED is an ordinary Arduino pin, 17, and
can be controlled using digitalWrite(). However, the TX LED has no Arduino pin,
and is controlled using Pro Micro-specific macros. These macros are defined in
the Pro Micro version of pins_arduino.h.

Note that we're using the setup() and loop() functions of a regular Arduino
"sketch". These are called by the main() function provided by the Arduino
stanard library (which also does some additional initialization that we don't
need to fiddle with here).

Kevin Boone, January 2021

*/

#include <Arduino.h>
#include <HardwareSerial.h>

int RXLED = 17;  

void setup()
  {
  pinMode (RXLED, OUTPUT);  

  Serial.begin(9600); 
  Serial.println("Hello, World");
  }

void loop()
  {
  Serial.println("Tick");  

  digitalWrite(RXLED, LOW);   
  TXLED0; 
  delay(200);              

  digitalWrite(RXLED, HIGH); 
  TXLED1; 
  delay(2000);             
  }

