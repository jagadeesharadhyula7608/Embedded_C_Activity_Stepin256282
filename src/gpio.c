/**
 * @file gpio.c
 * @author jagadeesh (jagadeesharadhyula7608@gmail.com)
 * @brief GPIO operation
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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
void gpio(act_out *ptr)
{
        if(!((PIND&(1<<DDD0)) || (PIND&(1<<DDD1))  ))// checking for the status of switch position
        {
            PORTB|=(1<<DDB0);//Turning on the LED
            ptr->state=LED_ON;

        }
    else{
       PORTB&=~(1<<DDB0);//Turning off the LED
       ptr->state=LED_OFF;
    }
    }

