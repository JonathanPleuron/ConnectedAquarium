/****************************************
 * 				temperature.h
 * 
 *  class definition for the temperature sensor
 *
 ***************************************/
#ifndef TEMPERATURE_H
#include "module.h"

class Temperature: public Module{

protected :

	int _pin;
	
public :

	// Constructors
	Temperature(int pin);
	// Destructor
	~Temperature(){};
	// Methods
	void setPin(int pin);
	int getTemp();

};

#define TEMPERATURE_H
#endif