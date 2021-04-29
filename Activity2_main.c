  /**
 * @file Activity2.c
 * @author Murali ()
 * @brief To set the temperature of an heater in a car using ADC 
 * @date 2021-04-2
 */

#include "Activity2.h"

/*header files*/


/**
 * @brief Main function where the code execution starts
 * @return int Return 0 if the program completes successfully
 * @note calling the functions in main function
 * @note calling the function and taking the values from ADC
 */

int main(void)  // main function
{
    InitADC();
    uint16_t temp;
    while(1)
    {
        temp=ReadADC(0);
        _delay_ms(200);
    }
    return 0;
    
    /* Return 0 if the program complies*/
}