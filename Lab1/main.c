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
	SREG = 0X80; //global interrupt enable
	initGlobals(); //initialize variables
	initRBELib(); //initialize RBELib
	initADC(globals.upperPotChannel); //initialize ADC
	debugUSARTInit(115200); // initialize USART
	int mV = 0,angle = 0;
	printf("ADCVal, MiliVolts, Angle \n \r");

	while(1){
	mV = potVolts(globals.upperPotChannel);
	angle = potAngle(globals.upperPotChannel);
	printf("%d, %d, %d \n \r", globals.ADCval, mV, angle);
	}
	return 0;
}

