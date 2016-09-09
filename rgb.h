#ifndef rgb_h
#define rgb_h

#include "Arduino.h"

class rgbLED
{
  public:
	void off();
	void ran();
    void blink(int interval);
    void blue();
    void red();
    void green();
	void custom(int r, int g, int b);
    rgbLED(int R, int G, int B);
    
  private:
    int _pin1;
    int _pin2;
    int _pin3;
    int Status = 000;
    unsigned long previous = 0;
    int initstate = 0;
};

#endif