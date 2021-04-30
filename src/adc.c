/**
 * @file adc.c
 * @author jagadeesh(jagadeesharadhyula7608@gmail.com)
 * @brief  ADC operation
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "adc.h"
uint16_t readAdc(uint8_t ch)
{
ADMUX&=~CHSEL;
ch&=0xff;// GET THE CHANNEL NUMBER
ADMUX|=ch;//SELECT THE CHANNEL USING MUX REG
ADCSRA|=ADC_CONV_START;// START THE ADC CONVERSION
while(!(ADCSRA&(1<<ADIF)));//WAIT TILL THE CONVERSION COMPLETES
ADCSRA|=ADC_CONV_COMPLETE;// ADC CONVERSION COMPLETES
 return(ADC);
}

void adc(act_out * ptr)
{
if(ptr->state)
{
    ADMUX|=(1<<REFS0);
    ADCSRA|=ADC_ENABLE;
    ptr->adcvalue=readAdc(0);
}
else
{
    ADCSRA&=~ADC_ENABLE;
    ADC=0;
}
}

