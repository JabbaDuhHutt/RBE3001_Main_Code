/*
 * main.c
 *
 *  Created on: Sep 5, 2015
 *      Author: Michael
 */
#include "RBELib/RBELib.h" //RBELib
#include "globals.h"
#include <avr/io.h>
int lastError, pot;


int PID(int error, int newError){
	double P, I, D; 
	int output;
	P = 0; //Proportional 
	I = 0; //Integral
	D = 0; //Derivative
	int Kp, Ki, Kd; //TODO tune the constants
	P = Kp * error;
	I = Ki * (I + error * time);
	D = Kd * ((newError - error)/(time))
	output = P + I + D;
	return output;
}

int main(void){
	lastError = globals.ADCval; //Does this need to be in globals?
	initGlobals();
	initRBELib(); //initialize RBELib
	initADC(1);
	debugUSARTInit(115200); // initialize USART
	volatile int x = globals.ADCval;
	printf("ADC Value %d \n", x);
	pot = PID(x, lastError); //get the PID controller
	printf("PID Value %d \n", globals.pot)
	return 0;	
}

