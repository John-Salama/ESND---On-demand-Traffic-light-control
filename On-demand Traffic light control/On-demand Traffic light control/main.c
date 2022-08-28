/*
 * On-demand Traffic light control.c
 *
 * Created: 8/23/2022 11:23:13 PM
 * Author : john
 */ 

#include "./ECUAL/LED Driver/LED.h"
#include "./ECUAL/Button Driver/Button.h"
#include "./MCAL/Timer/timer.h"
#include "./MCAL/PWM/pwm.h"
int main(void)
{
	DIO_init(PORT_B,3,OUT);
	PWM_init_CP();
	PWM_start(50);
    while (1) 
    {
		
    }
}

