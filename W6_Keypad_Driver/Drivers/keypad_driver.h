/*
 * keypad_driver.c
 *
 *  Created on: 2026. 5. 17.
 *      Author: justjhst
 */
#ifndef KEYPAD_DRIVER_H_
#define KEYPAD_DRIVER_H_

#include "gpio_driver.h"

/*

Row0~3 : PB0 ~ PB3 (출력, Push~Pull, 초기 HIGH)
Col0~3 : PB4~PB7 (입력, Pull-Up)

R1->PB0, R2->PB1, R3->PB2, R3->PB3
C1->PB4, C2->PB5, C3->PB6, C4->PB7

*/

void Keypad_Init(void);
char Keypad_Getkey(void);


#endif
