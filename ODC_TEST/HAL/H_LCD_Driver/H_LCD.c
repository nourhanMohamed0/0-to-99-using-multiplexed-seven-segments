/*
 * H_LCD.c
 *
 *  Created on: Sep 5, 2024
 *      Author: Nourhan Mohamed Hassan
 */
#include "../H_LCD_Driver/H_LCD.h"
#include "../H_LCD_Driver/H_LCD_CFG.h"

void H_LCD_Init(){

	M_DIO_SetPortDirection(LCD_DATA_PORT,0xff);
	M_DIO_SetPinDirection(LCD_RS_PORT,LCD_RS_PIN,OUTPUT);
	M_DIO_SetPinDirection(LCD_EN_PORT,LCD_EN_PIN,OUTPUT);
	//wait 40 ms
	_delay_ms(200);
	//1. set Function_Set command
	H_LCD_sendCommand(FUNCTION_SET);
	_delay_ms(2);

	//2.send on/off instruction
	H_LCD_sendCommand(0B00001111);
	_delay_ms(2);
	//3.clear display
	H_LCD_sendCommand(CLEAR_DISPLAY);
	_delay_ms(2);
	//4.send entry mood
	H_LCD_sendCommand(0X06);
}

void H_LCD_sendData(u8 data){
	//1. send data on data port
	M_DIO_SetPortValue(LCD_DATA_PORT,data);

	//2.set RS to high
	M_DIO_SetPinValue(LCD_RS_PORT,LCD_RS_PIN,HIGH);

	//3.send enable pulse
	M_DIO_SetPinValue(LCD_EN_PORT,LCD_EN_PIN,HIGH);
	_delay_ms(10);
	M_DIO_SetPinValue(LCD_EN_PORT,LCD_EN_PIN,LOW);

}
void H_LCD_sendCommand(u8 command){
	//1. send data on data port
		M_DIO_SetPortValue(LCD_DATA_PORT,command);

		M_DIO_SetPinValue(LCD_RS_PORT,LCD_RS_PIN,LOW);

		//4.send enable pulse
		M_DIO_SetPinValue(LCD_EN_PORT,LCD_EN_PIN,HIGH);
		_delay_ms(10);
		M_DIO_SetPinValue(LCD_EN_PORT,LCD_EN_PIN,LOW);

}
void H_LCD_sendString(const u8 *str){
	while(*str !='\0')
		H_LCD_sendData(*str++);
}
