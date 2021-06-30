/*
 * buzzer.h
 *
 *  Created on: Jun 27, 2021
 *      Author: lol
 */

#ifndef BUZZER_H_
#define BUZZER_H_
//0-low   1-high
#define BZ_ACT_low  0
#if(BZ1_ACT_low == 0)
    #define Bz_on()  Bz_PORT &=~_BV(Bz_BIT)
    #define Bz_off()  Bz_PORT |= _BV(Bz_BIT)
#else
    #define Bz_on()  Bz_PORT |= _BV(Bz_BIT)
    #define Bz_off()  Bz_PORT &=~_BV(Bz_BIT)


#endif /* BUZZER_H_ */
#endif
