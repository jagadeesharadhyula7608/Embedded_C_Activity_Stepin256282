#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED


# define LED_ON 1;
#define LED_OFF 0;

typedef struct
{
    int  state:1;
    uint16_t adcvalue;
    int temperature;
}act_out;
void gpio(act_out *);
void peripheral_init(void);


#endif // GPIO_H_INCLUDED