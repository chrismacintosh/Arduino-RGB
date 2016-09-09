#include <rgb.h>

//Create an object called 'rgb' using pins 9, 10, and 11.
rgbLED rgb(9,10,11); //pin 9 is red, pin 10 is green, pin 11 is blue.

void setup() {
  // put your setup code here, to run once:
  //Nothing is required in this example.
  //If you decide to use these RGB classes, it's pretty simple.
  //An instance only takes up about 23 bytes of dynamic memory.
  //Blink doesn't work right yet. oops. currently fixing it.
}

int example = 0;
int prev = 0;

void loop() {
  // put your main code here, to run repeatedly:
  if(example == 0){
    rgb.blink(500);
    unsigned long current = millis();
    if(current - prev >= 5000){
      prev = current;
      example = 1;
      rgb.off();
    }
  }
  else if(example == 1){
    int r = random(0,255);
    int g = random(0,255);
    int b = random(0,255);

    //Example of custom (values filled with random numbers)
    rgb.custom(r,g,b);
    delay(2500);
    //Random number class method.
    rgb.ran();
    delay(2500);
    rgb.ran();
    delay(2500);
    rgb.ran();
    example = 2;
  }
  else if(example == 2){
    rgb.red();
    example = 3;
    delay(2500);
  }
  else if(example == 3){
    rgb.green();
    example = 4;
    delay(2500);
  }
  else if(example == 4){
    rgb.blue();
    example = 0;
    delay(2500);
    rgb.off();
    prev = millis();
  }
}
