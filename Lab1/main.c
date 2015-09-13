/*
 * main.c
 *
 *  Created on: Sep 5, 2015
 *      Author: Michael
 */
#include "RBELib/RBELib.h" //RBELib
#include "globals.h"
#include <avr/io.h>





int main(void){
	initGlobals();
	initRBELib(); //initialize RBELib
	initADC(1);
	debugUSARTInit(115200); // initialize USART
	volatile int x = globals.ADCval;
	printf("ADC Value %d \n", x);
	return 0;

}

