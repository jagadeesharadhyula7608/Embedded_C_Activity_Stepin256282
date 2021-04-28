#include <avr/io.h>
#include "gpio.h"

void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1 << DDB0);
	/* Configure the switches*/
	DDRD&=~(1<<DDD0)|(1<<DDD1);
	/* logic high to ports PD0, PD4 */
	PORTD|=(1<<DDD0)|(1<<DDD1);
}
void gpio(void)
{
peripheral_init();
    while(1)
    {
        if(!((PIND&(1<<DDD0)) || (PIND&(1<<DDD1))  ))
        {
            PORTB|=(1<<DDB0);

        }
    else{
       PORTB&=~(1<<DDB0);

    }
    }
}

