#include "level.h"

//** Constructors **//
Level::Level(int pin):Module(){
	_pin=pin;
	type=SENSOR;
	_pullup=0;
	pinMode(pin, INPUT);
}
Level::Level(int pin, int pullup):Module(){
	_pin=pin;
	type=SENSOR;
	_pullup;
	pinMode(pin,INPUT_PULLUP);
}

void Level::setPin(int pin){
	_pin=pin;
}

int Level::getPin(void){
	return _pin;
}

int Level:: getState(void){
	return digitalRead(_pin);
}