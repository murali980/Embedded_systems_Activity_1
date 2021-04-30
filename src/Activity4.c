/**
 * @file UART.c
 * @author Murali()
 * @brief Declaration of function in uart communication
 * @version 0.1
 * @date 2021-04-30
 * 
 * 
 */
#include<avr/io.h>

/**
 * @brief To Inittialize UART serial communication ports
 * 
 * @param ubrr_value 
 */
void InitUART(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

/**
 * @brief Read the data from UART communication
 * 
 * @return char 
 */
char USARTReadchar()
{
    while(!(UCSR0A &(1<<RXC0)))
    {

    }
    return UDR0;
}

/**
 * @brief write the data to UART ports
 * 
 * @param data 
 */
void UARTWritechar(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0 = data;
}