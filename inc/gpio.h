/**
 * @file gpio.h
 * @author jagadeesh (jagadeesharadhyula7608@gmail.com)
 * @brief Header file for GPIO operation
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED

/**
 * @brief 
 *  Macros regarding the status of LED
 */
# define LED_ON 1
#define LED_OFF 0
/**
 * @brief 
 * User defined data type to store all the activity outputs
 */
typedef struct
{
    int  state:1;
    uint16_t adcvalue;
    int temperature;
}act_out;
/**
 * @brief 
 * Performs the gpio operations
 */
void gpio(act_out *);
/**
 * @brief 
 * Enables the gpio pins
 * 
 */
void peripheral_init(void);


#endif // GPIO_H_INCLUDED