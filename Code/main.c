#include "main_std.h"
/*
  Project     : door bell
  Description :
  MCU         : MEGA16
  F_OSC       : 7.3728 MHz
  IDE         : eclipse-cpp-2021-06-R-win32-x86_64
  Library     : WinAVR-20100110
  Date        : 2021-06-29
  Version     :
  History     :
 */

// global variable
void init(){
	//buzzer init
	Bz_DIR |=_BV(Bz_BIT);
	Bz_off();
	//key init
	Key_DIR  &= ~_BV(Key_BIT); // input
	Key_PORT |=  _BV(Key_BIT); // pull-high

	Timer0_init();
}

int main(){
	init();
	sei();
	while(1)
	    {
	        if (key_press())
	        {
	            // first tone
	            TIMSK = (1<<TOIE0);
	            timer_val = tone1_cnt;
	            _delay_ms(400);

	            // second tone
	            timer_val = tone2_cnt;
	            _delay_ms(600);
	            TIMSK = 0x00;
	        }
	    }
}
