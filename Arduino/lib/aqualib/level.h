/************************************************
 * 				level.h
 * 
 *  class definition for the water level sensor
 *
 **********************************************/
#ifndef LEVEL_H
#include "module.h"

#define PULLUP	1

class Level: public Module{

protected :

	int _pin;
	int _pullup;

public :

	// Constructors
	Level(int pin);
	Level(int pin, int pullup);
	// Destructor
	~Level(){};
	// Methods
	void setPin(int pin);
	int getPin();
	int getState();

};

#define LEVEL_H
#endif