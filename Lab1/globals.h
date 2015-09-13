/*
 * globals.h
 *
 *  Created on: Sep 12, 2015
 *      Author: Michael
 */

#ifndef GLOBALS_H_
#define GLOBALS_H_

typedef struct {
	volatile unsigned long counter;
	volatile unsigned long millisecond;
	volatile int ADCval;
	int upperPotChannel;
	int lowerPotChannel;

}Globals;

extern Globals globals; //declaration

void initGlobals();
#endif /* GLOBALS_H_ */
