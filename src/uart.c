#include <avr/io.h>
#include "uart.h"
#include "util/delay.h"

void initUart(void)
{
    UBRR0L=BAUDRATE;
    UBRR0H=(BAUDRATE>>8);
    UCSR0C|=(1<<UCSZ01)|(1<<UCSZ01);
    UCSR0B|=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}
void usartWriteTemp(int a)
    {
    while(!(UCSR0A&(1<<UDRE0)))
    {
        // WAIT UNTILL TRANSMITER IS EMPTY
    }
    UDR0=a;
}
void uart(act_out * t)
{
    if(t->state)
    {
    if(t->temperature==20)
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