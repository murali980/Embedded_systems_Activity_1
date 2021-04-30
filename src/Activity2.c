  /**
 * @file Activity2.c
 * @author Murali ()
 * @brief To set the temperature of an heater in a car using ADC 
 * @date 2021-04-25
 * 
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Activity1.h"
#include "Activity2.h"

/* Taking a function InitADC */
void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN) | (7<<ADPS0);
}

/**
 * @brief a function has been created to take values from analog pin and output to ADC
 * @note Reading the values 
 * 
 * @param ch 
 * @return uint16_t 
 */

uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
