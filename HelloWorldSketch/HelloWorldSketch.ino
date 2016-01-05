/*
 Name:		HelloWorldSketch.ino
 Created:	1/4/2016 9:37:36 PM
 Author:	Nomi
*/

// the setup function runs once when you press reset or power the board

//Include custom made library
#include "LED13.h"

LED13 object;

void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {
	object.blink(1000);
}
