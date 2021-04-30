/**
 * @file UART.h
 * @author Murali()
 * @brief Activity for UART serial communication
 * @version 0.1
 * @date 2021-04-30
 * 
 * 
 */

#ifndef __UART_H__
#define __UART_H__
#include<avr/io.h>
/**
 * @brief To Inittialize UART serial communication ports
 * 
 * @param ubrr 
 */
void InitUART(uint16_t ubrr);
/**
 * @brief Read data from UART port
 * @return char
 */
char USARTReadchar();
/**
 * @brief Write data to UART port
 * 
 * @param data 
 */
void UARTWritechar(char data);

#endif