#include <rgb.h>

//Create an object called 'rgb' using pins 9, 10, and 11.
rgbLED rgb(9,10,11); //pin 9 is red, pin 10 is green, pin 11 is blue.

void setup() {
  // put your setup code here, to run once:
  //Nothing is required in this example.
  //If you decide to use these RGB classes, it's pretty simple.
  //An instance only takes up about 23 bytes of dynamic memory.
}

void loop() {
  // put your main code here, to run repeatedly:
  rgb.blink(500);//On/Off at 500ms intervals
  delay(10000);//Wait 10 seconds before next example
  rgb.custom(45,90,125);//Just a random color.
  delay(3000);
  rgb.red();
  delay(3000);
  rgb.blue();
  delay(3000);
  rgb.green();
  delay(3000);
}
