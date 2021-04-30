/*
 */
#ifndef __ACTIVITY2_H_
#define __ACTIVITY2_H_

/**
 * @file Activity.h
 * @author Murali ()
 * @brief Activity to change the temperature value so that an led will blind high when temperature is high
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

#endif /** __Activity2_H_ */