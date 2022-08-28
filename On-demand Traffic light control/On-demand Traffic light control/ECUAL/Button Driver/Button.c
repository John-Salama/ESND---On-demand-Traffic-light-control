/*
 * Button.c
 *
 * Created: 8/24/2022 10:43:13 PM
 *  Author: john
 */ 

#include "Button.h"

void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin){
	DIO_init(buttonPort,buttonPin,IN);
}

void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value){
	DIO_read(buttonPort,buttonPin,value);
}