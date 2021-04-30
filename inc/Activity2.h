/*
 */
#ifndef __ACTIVITY1_H_
#define __ACTIVITY_H_
#define F_CPU	20000000

/**
 * @file Activity.h
 * @author Murali ()
 * @brief header files that has included interrupts and delay
 * @version 0.1
 * @date 2021-04-25
 * 
 */

/**
 * Include files
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


/**
 * @brief function to initialise ADC
 * 
 */
void InitADC();

uint16_t ReadADC(uint8_t ch);

#endif /** __Activity_H_ */