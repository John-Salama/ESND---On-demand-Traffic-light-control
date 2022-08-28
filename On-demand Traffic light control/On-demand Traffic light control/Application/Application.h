/*
 * Application.h
 *
 * Created: 8/28/2022 7:51:44 PM
 *  Author: john
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "../ECUAL/LED Driver/LED.h"
#include "../ECUAL/Button Driver/Button.h"
#include "../MCAL/Timer/timer.h"
#include "../Utils/interruptes.h"

void APP_init(void);
void APP_start(void);
#endif /* APPLICATION_H_ */