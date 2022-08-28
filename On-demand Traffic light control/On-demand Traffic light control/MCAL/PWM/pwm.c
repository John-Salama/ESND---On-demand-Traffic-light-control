/*
 * pwm.c
 *
 * Created: 8/25/2022 10:58:56 PM
 *  Author: john
 */ 

#include "pwm.h"

void PWM_init_CP(){
	SET_BIT(TCCR0,6); //correct phase
	SET_BIT(TCCR0,5); //non inverting
	SET_BIT(TCCR0,0);// no PRE start PWM
	TCNT0 = 0x00;
}

void PWM_start(uint8_t duteCycle){
	DIO_init(PORT_B,3,OUT);
	OCR0 = ((duteCycle*256)/100.0 - 1);

}

void PWM_stop(){
	CLEAR_BIT(TCCR0,0);//stop
	OCR0 = 0x00;
	TCNT0 = 0x00;
}
