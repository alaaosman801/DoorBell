
#ifndef TIMER_H_
#define TIMER_H_

#include "main_std.h"

//timer0
#define half_per1    750e-6 // Music note E5 , 659Hz
#define half_per2    960e-6 // Music note C5 , 659Hz
#define tone1_cnt    (int)   (F_CPU/64.0*half_per1)
#define tone2_cnt    (int)   (F_CPU/64.0*half_per2)

void Timer0_init();
extern vunsc timer_val;


#endif /* TIMER_H_ */
