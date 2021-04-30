#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED
/**
 * @file adc.h
 * @author jagadeesh (jagadeesharadhyula7608@gmail.com)
 * @brief Header file for ADC Module
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "gpio.h"
/**
 * @brief 
 * Macros for all the initialsing bits for adc
 */
#define CHSEL (7<<MUX0)
#define ADC_CONV_START (1<<ADSC)
#define  ADC_CONV_COMPLETE (1<<ADIF)
#define ADC_ENABLE (1<<ADEN)|(7<<ADPS0)
/**
 * @brief 
 * Start the adc operation
 * @param ptr 
 */
void adc(act_out * ptr);
/**
 * @brief 
 * Selects the channel for ad conversion
 * @param ch 
 * @return uint16_t 
 */
uint16_t readAdc(uint8_t ch);
#endif // ADC_H_INCLUDED