 /**
 * @file Activity1.c
 * @author Murali ()
 * @brief To set the temperature of an heater in a car using ADC and show them in PWM using oscilloscope
 * @date 2021-04-27
 * 
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
/**
 * @brief setting the prescaler value and configuring the pin
 * @note setting the temperature value for PWM
 * 
 */
void pwm()
{
    TCCR1A|=(1<<COM0A1)|(1<<WGM01)|(1<<WGM00);
    TCCR1B|=(1<<CS01)|(1<<CS00);
    DDRD|=(1<<DDD6);
}
char PWM(uint16_t temp)
{
    char temperature;
    if((temp>=0)&&(temp<=210))
    {
         OCR1A=250;
         temperature=20;
        _delay_ms(1000);
    }
    else if((temp>=211)&&(temp<=510))
    {
         OCR1A=410;
         temperature=25;
        _delay_ms(1000);
    }
    else if((temp>=511)&&(temp<=710))
    {
         OCR1A=716;
         temperature=29;
        _delay_ms(1000);
    }
    else if((temp>=711)&&(temp<=1024))
    {
         OCR1A=972;
         temperature=33;
        _delay_ms(1000);
    }
    else
    {
        OCR1A=0;
        temperature=0;
    }
    return temperature;

}