#ifndef MAIN_STD_H_
#define MAIN_STD_H_
typedef volatile unsigned char vunsc;
#ifndef F_CPU
#define F_CPU 7372800UL
#endif
#include<avr/io.h>
#include<avr/sfr_defs.h>
#include<avr/delay.h>
#include<avr/interrupt.h>

#include"pin_config.h"
#include"buzzer.h"
#include"key.h"
#include"timer.h"
#endif /* MAIN_STD_H_ */
