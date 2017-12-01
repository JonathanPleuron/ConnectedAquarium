#include "temperature.h"

//** Constructor **//
Temperature::Temperature(int pin):Module(){
	_pin=pin;
	// TO DO
}

void Temperature::setPin(int pin){
	_pin=pin;
}

int Temperature::getTemp(){
	// TO DO
	return 0;
}