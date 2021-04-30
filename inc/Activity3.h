#ifndef __ACTIVITY3_H_
#define __ACTIVITY3_H_

/**
 * @file Activity.h
 * @author Murali ()
 * @brief Project to show show the temperature value using PWM
 * @version 0.1
 * @date 2021-04-27
 * 
 */

/**
 * Include files
 */ 
#include <avr/io.h>
#include <util/delay.h>

/**
 * Function Definitions
 */

/**
 * @brief To blink the led and show the pulse when a person increase or decrease the temperature
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void pwm();

char PWM(uint16_t temp);


#endif /** __ACTIVITY3_H_ */