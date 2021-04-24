#ifndef __BLINKY_H_
#define __BLINKY_H_
/**
 * @file blinky.h
 * @author Murali ()
 * @brief Project to Blink an LED connected to AVR328 MCU GPIO Pin
 * @version 0.1
 * @date 2021-04-23
 * 
 */

/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief To blink the led when a person occuipes seat and switch on the heater
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);


#endif /** __BLINKY_H_ */