#ifndef UART_H_INCLUDED
#define UART_H_INCLUDED

#include "gpio.h"
/**
 * @brief 
 * macro for baudrate 
 * 
 */
#define BAUDRATE 103
/**
 * @brief 
 * initiliases all the uart0 module
 */
void initUart(void);
/**
 * @brief 
 * Writes the data from the sensor to UDR register
 */
void usartWriteTemp(int);
/**
 * @brief 
 * start the uart operation
 * 
 */
void uart(act_out *);


#endif // UART_H_INCLUDED