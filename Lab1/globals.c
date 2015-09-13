/*
 * globals.c
 *
 *  Created on: Sep 12, 2015
 *      Author: Michael
 */
#include "globals.h"

Globals globals;

void initGlobals(){
	globals.counter = 0;
	globals.millisecond = 0;
	globals.ADCval = 0;
	globals.upperPotChannel = 3;
	globals.lowerPotChannel = 2;
}

