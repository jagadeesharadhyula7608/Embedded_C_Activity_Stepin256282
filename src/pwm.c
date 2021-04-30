#include <avr/io.h>
#include "pwm.h"
#include "util/delay.h"

void initpwm(void)
{
  TCCR0A|=(1<<COM0A1)|(1<<WGM01)|(1<<WGM00);// CONFIGURING FOR FAST PWM MODE
    TCCR0B|=(1<<CS01)|(1<<CS00);// SETTING THE PRESCALER TO 64
    DDRD|=(1<<DDD6);//CONFIGURING PIN D6
}

void pwm(act_out * value)
{
    if(value->adcvalue>0 && value->adcvalue<=200)
    {
      OCR0A=D20;
      value->temperature=20;
    }
    else if(value->adcvalue>210 && value->adcvalue<=500)
    {
      OCR0A=D40;
      value->temperature=25;
    }
   else if(value->adcvalue>510 && value->adcvalue<=700)
    {
      OCR0A=D70;
      value->temperature=29;
    }
    else if(value->adcvalue>710 && value->adcvalue<=1024)
    {
      OCR0A=D95;
      value->temperature=33;
    }
    _delay_ms(500);
}
