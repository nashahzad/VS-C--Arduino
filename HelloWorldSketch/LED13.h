// LED13.h
//Declare the class and function names/types

#ifndef _LED13_h
#define _LED13_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class LED13
{
 public:
	 LED13();
	 ~LED13();
	 void on();
	 void off();
	 void blink(int time);
};

#endif

