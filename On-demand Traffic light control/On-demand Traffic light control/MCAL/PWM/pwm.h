/*
 * pwm.h
 *
 * Created: 8/25/2022 10:58:46 PM
 *  Author: john
 */ 


#ifndef PWM_H_
#define PWM_H_
#include "../../Utils/types.h"
#include "../../Utils/Registers.h"
#include "../../Utils/bit_manipulation.h"
#include "../DIO Driver/dio.h"
#include <math.h>

void PWM_init_CP();
void PWM_start(uint8_t duteCycle);
void PWM_stop();


#endif /* PWM_H_ */