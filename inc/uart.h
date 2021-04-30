#ifndef UART_H_INCLUDED
#define UART_H_INCLUDED

#include "gpio.h"

#define BAUDRATE 103
void initUart(void);
void usartWriteTemp(int);
void uart(act_out *);


#endif // UART_H_INCLUDED