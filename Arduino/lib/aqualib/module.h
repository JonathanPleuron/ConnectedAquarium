/****************************************
 * 				module.h
 *
 ***************************************/

#ifndef MODULE_H_
#define MODULE_H_
#include <Arduino.h>

#define ACTUATOR	0
#define SENSOR		1

class Module{

public:

	static int nb_module;
	int type;

	Module(); //Constructor
	virtual ~Module(){};//Destructor
};

#endif /* MODULE_H_ */
