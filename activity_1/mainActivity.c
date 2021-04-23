/**
 * @file mainActivity.c
 * @author A.Jagadeesh
 * @brief 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "inc/user_utilities.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
int main(void)
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
    return 0;
}

