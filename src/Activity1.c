  /**
 * @file Activity1.c
 * @author Murali ()
 * @brief To blind an led whenever the switch is on
 * @date 2021-04-23
 * 
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Activity1.h"

/**
 * @brief a function to declare the delay
 * 
 * @param delay_time 
 */

void delay_ms(uint32_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}
