/*
 * H_KeyPad.h
 *
 *  Created on: Sep 5, 2024
 *      Author: Nourhan Mohamed Hassan
 */

#ifndef HAL_H_KEYPAD_DRIVER_H_KEYPAD_H_
#define HAL_H_KEYPAD_DRIVER_H_KEYPAD_H_
#include "../../MCAL/M_DIO_Driver/M_DIO_Init.h"


void H_keyPad_Init();
u8 H_GetkeyPadPressed(u8 *row,u8* col);

#endif /* HAL_H_KEYPAD_DRIVER_H_KEYPAD_H_ */
