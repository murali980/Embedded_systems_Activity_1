  /**
 * @file main.c
 * @author Murali()
 * @brief To blink the led and show the temperature on display when a person switch on the heater and set an temperature
 * @date 2021-04-30
 */
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

/*header files*/

/**
 * @brief All the functions are called in main function 
 * 
 * @note changing the state of led and providing the output of pwm
 * @return int Return 0 if the program completes successfully

 */

/*char temp_data;
int main(void)
{
	 Initialize Peripherals 
    InitADC();
    pwm();
    uint16_t temp;
	peripheral_init();

	while (1)
	{
        change_led_state(0x01);
		_delay_ms(1000);
       
        temp=ReadADC(0);
        temp_data=PWM(temp);
        OCR1A=0;
         
        _delay_ms(200);
	}
	return 0;
}*/

char temp_data;
int main(void)
{
	/* Initialize Peripherals */
    InitADC();
    char temp_data;
    uint16_t temp;
	peripheral_init();
	pwm();

	while (1)
	{
        change_led_state(PD0);
		_delay_ms(1000);
         temp=ReadADC(0);
        _delay_ms(200);
        temp_data = PWM(temp);
        UARTWritechar(temp_data);
        OCR0A=0;
        _delay_ms(200);
	}
	return 0;
}