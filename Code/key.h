#ifndef KEY_H_
#define KEY_H_

#include "main_std.h"
#define key_press()   ( ( Key_PIN & _BV(Key_BIT)) == 0 )
#define key_release()   ( ( Key_PIN & _BV(Key_BIT)) == 1 )

#endif /* KEY_H_ */
