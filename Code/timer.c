#include "main_std.h"
vunsc timer_val;
vunsc buzz=0;
// Timer 0 fosc = 7.3728 MHz
//=========================================
void Timer0_init(){
	TCCR0=0x03;// divider 64
	TCNT0=256-tone1_cnt;
}

// Timer 0 interrupt service routine
// timeout 1.000 ms , fosc = 7.3728 MHz
//====================================
ISR(TIMER0_OVF_vect){
	if(buzz==0) Bz_on();
	else Bz_off();
	buzz=1-buzz;
	TCNT0=256-timer_val;
}
