#include <rgb.h>
#include "Arduino.h"


rgbLED::rgbLED(int R, int G, int B)
{
  _pin1 = R;
  _pin2 = G;
  _pin3 = B;
  
  pinMode(_pin1,OUTPUT);
  pinMode(_pin2,OUTPUT);
  pinMode(_pin3,OUTPUT);
}

void rgbLED::custom(int r, int g, int b){
	analogWrite(_pin1,r);
	analogWrite(_pin2,g);
	analogWrite(_pin3,b);
}

void rgbLED::blink(int interval){
      unsigned long current = millis();
      if(current - previous >= interval){
        previous = current;

        if (initstate == 0){
          initstate = 255;
        } else {
          initstate = 0;
        }
        analogWrite(_pin1, initstate);
      }
}

void rgbLED::red(){
  analogWrite(_pin1,255);
  analogWrite(_pin2,0);
  analogWrite(_pin3,0);
}

void rgbLED::green(){
  analogWrite(_pin1,0);
  analogWrite(_pin2,255);
  analogWrite(_pin3,0);
}

void rgbLED::blue(){
  analogWrite(_pin1,0);
  analogWrite(_pin2,0);
  analogWrite(_pin3,255);
}