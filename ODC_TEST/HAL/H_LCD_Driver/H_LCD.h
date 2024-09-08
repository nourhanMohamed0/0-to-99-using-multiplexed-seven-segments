/*
 * H_LCD.h
 *
 *  Created on: Sep 5, 2024
 *      Author: Nourhan Mohamed Hassan
 */

#ifndef HAL_H_LCD_DRIVER_H_LCD_H_
#define HAL_H_LCD_DRIVER_H_LCD_H_
#include "../H_LCD_Driver/H_LCD_CFG.h"
void H_LCD_sendData(u8 data);
void H_LCD_sendCommand(u8 command);
void H_LCD_Init();
void H_LCD_sendString(const u8 *str);
void H_sendNumber(const u16 number);
void H_changeCursorPlace(u8 row,u8 column);

#endif /* HAL_H_LCD_DRIVER_H_LCD_H_ */
