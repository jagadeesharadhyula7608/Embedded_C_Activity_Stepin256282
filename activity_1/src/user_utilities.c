#include "user_utilities.h"
#include <avr/io.h>

void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1 << DDB0);
	/* Configure the switches*/
	DDRD&=~(1<<DDD0)|(1<<DDD1);
	/* logic high to ports PD0, PD4 */
	PORTD|=(1<<DDD0)|(1<<DDD1);
}