#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED

#include "gpio.h"
#define CHSEL (7<<MUX0)
#define ADC_CONV_START (1<<ADSC)
#define  ADC_CONV_COMPLETE (1<<ADIF)
#define ADC_ENABLE (1<<ADEN)|(7<<ADPS0)

void adc(act_out * ptr);
uint16_t readAdc(uint8_t ch);
#endif // ADC_H_INCLUDED