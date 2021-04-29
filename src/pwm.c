#include <avr/io.h>
#include "pwm.h"

void pwm(void)
{
    TCCR0A|=(1<<COM0A1)|(1<<WGM01)|(1<<WGM00);// CONFIGURING FOR FAST PWM MODE
    TCCR0B|=(1<<CS01)|(1<<CS00);// SETTING THE PRESCALER TO 64
    DDRB|=(1<<PB1);//CONFIGURING PIN B1 
    while (1)
    {
       OCR0A=100;
       OCR0A=150;
       OCR0A=200;
       OCR0A=250;
    }
    
}