/*
 * H_LCD_CFG.h
 *
 *  Created on: Sep 5, 2024
 *      Author: Nourhan Mohamed Hassan
 */

#ifndef HAL_H_LCD_DRIVER_H_LCD_CFG_H_
#define HAL_H_LCD_DRIVER_H_LCD_CFG_H_
#include "../../MCAL/M_DIO_Driver/M_DIO_Init.h"
#include "H_LCD_CFG.h"
#define F_CPU 1000000ul
#include <util/delay.h>


#define LCD_DATA_PORT PORT_A

#define LCD_RS_PORT   PORT_B
#define LCD_RS_PIN    PIN2

//#define LCD_RW_PORT   MDIO_PORTB
//#define LCD_RW_PIN    PIN2

#define LCD_EN_PORT   PORT_B
#define LCD_EN_PIN    PIN0

#define FUNCTION_SET  0X38
#define CLEAR_DISPLAY 0X01
#define RETURN_HOME   0X02

#endif /* HAL_H_LCD_DRIVER_H_LCD_CFG_H_ */
