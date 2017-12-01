/****************************************
 * 				turbidity.h
 * 
 *  class definition for the turbidity sensor
 *
 ***************************************/
#ifndef TURBIDITY_H
#include "module.h"
#define PULLUP	1

class Turbidity: public Module{

protected :

	int _digitalPin;
	int _analogPin;

public :

	// Constructors
	Turbidity(int dpin, int apin);
	Turbidity(int dpin, int apin, int pullup);
	// Destructor
	~Turbidity(){};
	// Methods
	void setPins(int dpin, int apin);
	int getValue();

};

#define TURBIDITY_H_H
#endif