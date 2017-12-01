#include "module.h" 
#include "pump.h" 
#include "temperature.h" 
#include "turbidity.h"
#include "pi.h"
#include "level.h"
#include "salinity.h"   

using namespace std;

void setup() {

  Level lvl(2,PULLUP); //D2
  lvl.setPin(2);
  lvl.getPin();
  lvl.getState();

  Pump pmp(3); //D3
  pmp.setPin(3);
  pmp.setSpeed(50);
  pmp.start();
  pmp.stop();

  Temperature tmp(4); //D4
  tmp.setPin(4);
  tmp.getTemp();

  Turbidity turby(5,0,PULLUP); //D5 and A0
  turby.setPins(5,0);
  turby.getValue();

  Salinity salt(1); //A1
  salt.setPin(1);
  salt.getValue();
}

void loop() {
  // put your main code here, to run repeatedly:

}
