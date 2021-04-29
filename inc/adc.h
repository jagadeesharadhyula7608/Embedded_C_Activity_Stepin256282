#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED

#include "gpio.h"

void adc(act_out * ptr);
uint16_t readAdc(uint8_t ch);
#endif // ADC_H_INCLUDED