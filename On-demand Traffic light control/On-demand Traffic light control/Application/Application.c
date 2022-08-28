/*
 * Application.c
 *
 * Created: 8/28/2022 7:52:07 PM
 *  Author: john
 */ 
#include "Application.h"
uint8_t car;
void APP_init(void){
		car=1;
		LED_init(LED_CAR_PORT,LED_CAR_GREEN_PIN);
		LED_init(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_init(LED_CAR_PORT,LED_CAR_RED_PIN);
		
		//Pedestrian LED initialization
		LED_init(LED_PED_PORT,LED_PED_RED_PIN);
		LED_init(LED_PED_PORT,LED_PED_YELLOW_PIN);
		LED_init(LED_PED_PORT,LED_PED_GREEN_PIN);
		
		//Button initialization
		BUTTON_init(BUTTON_PORT,BUTTON_PIN);
		
		//Timer initialization
		Timer0_init_N();
		
		//Enable Global interrupts & setup rising edge detection for button
		sei();
		RISING_EDGE_SETUP();
		SETUP_INT0();
}

void APP_start(void){
	
	for(int i =0;i<10;i++){
	LED_on(LED_PED_PORT,LED_PED_RED_PIN);
	if(car){
	LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN);
	LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
	LED_on(LED_CAR_PORT,LED_CAR_RED_PIN);
	Timer0_N_delay_ms(500);
	}
	else{
		LED_off(LED_PED_PORT,LED_PED_RED_PIN);
		LED_on(LED_CAR_PORT,LED_CAR_RED_PIN);
		LED_on(LED_PED_PORT,LED_PED_GREEN_PIN);
		Timer0_N_delay_ms(5000);
		LED_off(LED_PED_PORT,LED_PED_GREEN_PIN);
		car=1;
		break;
	}
}

	
	//wait

	for(int i =0;i<10;i++){
	LED_on(LED_PED_PORT,LED_PED_RED_PIN);
		if(car){
	LED_toggle(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
	Timer0_N_delay_ms(500);
	}
	else{
		LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);
		LED_on(LED_PED_PORT,LED_PED_RED_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
		for(int i =0;i<10;i++){
			LED_toggle(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
			LED_toggle(LED_PED_PORT,LED_PED_YELLOW_PIN);
			Timer0_N_delay_ms(500);
			}
			LED_off(LED_PED_PORT,LED_PED_RED_PIN);
			LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
			LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
			LED_on(LED_PED_PORT,LED_PED_GREEN_PIN);
			LED_on(LED_CAR_PORT,LED_CAR_RED_PIN);
			Timer0_N_delay_ms(5000);
			LED_off(LED_PED_PORT,LED_PED_GREEN_PIN);
			LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);
			car=1;
			break;
	}
}
	
	//green
	for(int i =0;i<10;i++){
	LED_on(LED_PED_PORT,LED_PED_RED_PIN);
		if(car){
	LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);
	LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
	LED_on(LED_CAR_PORT,LED_CAR_GREEN_PIN);
	Timer0_N_delay_ms(500);
	}
	else{
		//LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN);
		LED_on(LED_PED_PORT,LED_PED_RED_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
		for(int i =0;i<10;i++){
			LED_toggle(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
			LED_toggle(LED_PED_PORT,LED_PED_YELLOW_PIN);
			Timer0_N_delay_ms(500);
		}
		LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN);
		LED_off(LED_PED_PORT,LED_PED_RED_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
		LED_on(LED_PED_PORT,LED_PED_GREEN_PIN);
		LED_on(LED_CAR_PORT,LED_CAR_RED_PIN);
		Timer0_N_delay_ms(5000);
		LED_off(LED_PED_PORT,LED_PED_GREEN_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);
		car=1;
		break;
	}
}
	
	//wait
	for(int i =0;i<10;i++){
	LED_on(LED_PED_PORT,LED_PED_RED_PIN);
		if(car){
		LED_toggle(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		Timer0_N_delay_ms(500);
	}
	else{
		LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN);
		LED_on(LED_PED_PORT,LED_PED_RED_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
		for(int i =0;i<10;i++){
			LED_toggle(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
			LED_toggle(LED_PED_PORT,LED_PED_YELLOW_PIN);
			Timer0_N_delay_ms(500);
		}
		LED_off(LED_PED_PORT,LED_PED_RED_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
		LED_on(LED_PED_PORT,LED_PED_GREEN_PIN);
		LED_on(LED_CAR_PORT,LED_CAR_RED_PIN);
		Timer0_N_delay_ms(5000);
		LED_off(LED_PED_PORT,LED_PED_GREEN_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);
		car=1;
		break;
	}
}
}

ISR(EXT_INT_0){car = 0;}