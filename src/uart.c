/**
 * @file uart.c
 * @author jagadeesh (jagadeesharadhyula7608@gmail.com)
 * @brief Uart operation
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "uart.h"
#include "util/delay.h"

void initUart(void)
{
    UBRR0L=BAUDRATE;// Setting buade rate 
    UBRR0H=(BAUDRATE>>8);
    UCSR0C|=(1<<UCSZ01)|(1<<UCSZ00);// Setting 8-bit DATA
    UCSR0B|=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);// Enable the RX TX and RXIF,TXIF
}
void usartWriteTemp(int a)
    {
    while(!(UCSR0A&(1<<UDRE0)))
    {
        // WAIT UNTILL TRANSMITER IS EMPTY
    }
    UDR0=a;// write data to UDR register
}
void uart(act_out * t)
{
    if(t->state)// Checking for LED ON status 
    {
    if(t->temperature==20)// Checking for the temperature values from sensor
    {
        usartWriteTemp(20);
    }
        
    else if(t->temperature==25)
    {
        usartWriteTemp(25);
    }

    else if(t->temperature==29)
    {
        usartWriteTemp(29);
    }

    else if(t->temperature==33)
    {
        usartWriteTemp(33);
    }
    }
_delay_ms(500);
}