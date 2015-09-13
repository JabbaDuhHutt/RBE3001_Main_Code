/*
 * main.c
 *
 *  Created on: July 21, 2014
 *      Author: ewillcox
 */
#include "RBELib/RBELib.h"
#include "globals.h"
//Lower link: DSUB0
//Upper link: DSUB1

//Globals
//Timer0
//volatile unsigned long counter = 0;
//volatile unsigned long millisecond = 0;
//ADC
//volatile int ADCval = 0;

//Timer ISR
ISR(TIMER0_OVF_vect){
  //Using a prescaler of 8
  // ((18432000 / 8) / 256) / 1000 = 9 interrupts in a ms
  globals.counter++;
  if(globals.counter >= 9){
    globals.millisecond++;
    globals.counter = 0;
  }
}

//ADC ISR
ISR(ADC_vect){
  //Get low byte first
  int lower = ADCL;
  //Get high byte and free the ADC mem
  int upper = ADCH;

  //Combine the two values into a 10-bit result
  globals.ADCval = ((upper & 0x03) << 8) | lower;
}

