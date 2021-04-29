#include <avr/io.h>
#include "adc.h"
uint16_t readAdc(uint8_t ch)
{
ADMUX&=~(7<<MUX0);
ch&=0xff;// GET THE CHANNEL NUMBER
ADMUX|=ch;//SELECT THE CHANNEL USING MUX REG
ADCSRA|=(1<<ADSC);// START THE ADC CONVERSION
while(!(ADCSRA&(1<<ADIF)));//WAIT TILL THE CONVERSION COMPLETES
ADCSRA|=(1<<ADIF);
 return(ADC);
}

void adc(act_out * ptr)
{
if(ptr->state)
{
    ADMUX|=(1<<REFS0);
    ADCSRA|=(1<<ADEN)|(7<<ADPS0);
    ptr->adcvalue=readAdc(0);
}
else
{
    ADCSRA&=~(1<<ADEN);
    ADC=0;
}
}

