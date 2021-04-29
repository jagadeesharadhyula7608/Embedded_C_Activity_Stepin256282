#ifndef PWM_H_INCLUDED
#define PWM_H_INCLUDED

#include "gpio.h"

#define D20 51;
#define D40 102;
#define D70 179;
#define D95 243;

void initpwm(void);
void pwm(act_out *);


#endif // PWM_H_INCLUDED