// 1M Hz -> 1million instruction per second
#include "HAL/H_Seven_Segment/H_Seven_Segment.h"
#define F_CPU 1000000UL
#include <util/delay.h>

u8 volatile counter=0;
u8 volatile counter2=0;
int main()
{
    H_SevenSegment_BCD_Init_HighNibble(PORT_C);
    M_DIO_SetPinDirection(PORT_C, PIN0, OUTPUT);  // Pin for Display 1
    M_DIO_SetPinDirection(PORT_C, PIN1, OUTPUT);  // Pin for Display 2

    while(1)
    {
    	counter2++;
        // Activate the first display (e.g., tens place)
        M_DIO_SetPinValue(PORT_C, PIN0, LOW); //7Seg1 ON
        M_DIO_SetPinValue(PORT_C, PIN1, HIGH);//7Seg1 OFF
        H_SevenSegment_BCD_HighNibble_Write(PORT_C, counter / 10);  // Write tens
        _delay_ms(20);  // Delay for multiplexing

        // Activate the second display (e.g., ones place)
        M_DIO_SetPinValue(PORT_C, PIN1, LOW); //7Seg2 ON
        M_DIO_SetPinValue(PORT_C, PIN0, HIGH);//7Seg1 OFF
        H_SevenSegment_BCD_HighNibble_Write(PORT_C, counter % 10);  // Write ones
        _delay_ms(20);  // Delay for multiplexing

if (counter2==8)
{
	counter=(counter+1)%100;
	counter2=0;
}
    }

    return 0;
}

