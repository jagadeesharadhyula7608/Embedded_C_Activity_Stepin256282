#include <avr/io.h>
#include "gpio.h"
#include "adc.h"
#include "pwm.h"
#include "util/delay.h"


int main()
{
    uint16_t temp_value;
    act_out s1;
    act_out *ptr=&s1;
    peripheral_init();
    initpwm();
    while (1)
    {
       gpio(ptr);//calling gpio function to sense the swicthes position
       adc(ptr);//Read the ADC values from sensor
       pwm(ptr);//Generate PWM pulse w.r.t t digital values
    }
    
    return 0;
}