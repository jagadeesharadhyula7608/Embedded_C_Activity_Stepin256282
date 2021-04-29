#include <avr/io.h>
#include "gpio.h"
#include "adc.h"

int main()
{
    while (1)
    {
       gpio();
       adc();
    }
    return 0;
}