#include <avr/io.h>
#include "adc.h"

void initAdc()
{

    ADMUX|=(1<<REFS0);
    ADCSRA|=(1<<ADEN)|(7<<ADPS0); //turning on and setting the clock to ADC
}

uint16_t readAdc(uint8_t ch)
{
ADMUX&=~(7<<MUX0);
ch&=0xff;// GET THE CHANNEL NUMBER
ADMUX|=ch;//SELECT THE CHANNEL USING MUX REG
ADCSRA|=(1<<ADSC);// START THE ADC CONVERSION
while(!(ADCSRA&(1<<ADIF))){}//WAIT TILL THE CONVERSION COMPLETES
return(ADC);
}


uint16_t adc(void)
{
uint16_t a;
initAdc();
    while(1)
        a=readAdc(0);
    return a;
}
