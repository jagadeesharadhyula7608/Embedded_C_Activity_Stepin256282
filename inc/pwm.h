#ifndef PWM_H_INCLUDED
#define PWM_H_INCLUDED

#include "gpio.h"
/**
 * @brief 
 * Macro for duty ratio
 */
#define D20 51
#define D40 102
#define D70 179
#define D95 243
/**
 * @brief 
 * Initialise the pwm module 
 */
void initpwm(void);
/**
 * @brief 
 * Starts the pwm operation
 */
void pwm(act_out *);


#endif // PWM_H_INCLUDED