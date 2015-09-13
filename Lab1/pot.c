/*
 * pot.c
 *
 *  Created on: Sep 12, 2015
 *      Author: Michael
 */
#include "RBELib/RBELib.h"
#include "globals.h"


/**
 * @brief Find the angle of the given potentiometer.
 * @param  pot The pot to check.
 * @return angle Angle of the potentiometer.
 *
 * @todo Calculate the angle using the ADC reading.
 */
//4.9 * 0.068degree/mV assuming pot is 340 degree pot

int potAngle(int pot){
	initGlobals();
	initADC(pot);
	return globals.ADCval*0.33;

}

/**
 * @brief Find the voltage value of the given potentiometer.
 * @param  pot The pot to get the value of.
 * @return volts Voltage of  potentiometer.
 *
 * @todo Convert the ADC value into a voltage in mV (so no floats needed).
 */
int potVolts(int pot){
	initGlobals();
	initADC(pot);
	return globals.ADCval*4.9;
}
