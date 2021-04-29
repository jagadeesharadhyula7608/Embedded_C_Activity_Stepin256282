#include <avr/io.h>
#include "gpio.h"
#include "adc.h"
#include "pwm.h"

int main()
{
    uint16_t temp_value;
    while (1)
    {
       gpio();
       temp_value=adc();
       pwm();
    }
    return 0;
}