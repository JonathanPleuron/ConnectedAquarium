#include "turbidity.h"

// SEE 	https://www.dfrobot.com/wiki/index.php/Turbidity_sensor_SKU:_SEN0189
//		https://fr.wikipedia.org/wiki/Turbidit%C3%A9

//** Constructor **//
Turbidity::Turbidity(int dpin, int apin):Module(){
	_digitalPin=dpin;
	_analogPin=apin;
	pinMode(dpin, INPUT);
	type=SENSOR;
}

Turbidity::Turbidity(int dpin, int apin, int pullup):Module(){
	_digitalPin=dpin;
	_analogPin=apin;
	pinMode(dpin, INPUT_PULLUP);
	type=SENSOR;
}

void Turbidity::setPins(int dpin, int apin){
	_digitalPin=dpin;
	_analogPin=apin;
}

int Turbidity::getValue(){
	//analogReference(DEFAULT); //5V
	//analogRead(apin);
	return 0;
}