#ifndef MCAL_LCD_H_
#define MCAL_LCD_H_

#include <avr/io.h>
#include "../../UTLIS/Common_Macros.h"
#include "../../UTLIS/Std_Types.h"
#include "../../MCAL/DIO/DIO.h"

/*Define Data Types*/

// LCD CONTRL Pins
#define	LCD_CTRL_PORT_DIR DDRD
#define	LCD_CTRL_PORT PORTD
#define RS PD0
#define RW PD1
#define EN PD2

// LCD Data Pins
#define LCD_DATA_PORT_DIR DDRC
#define LCD_DATA_PORT PORTC

// LCD Commands
#define CLEAR_COMMAND 0x01
#define TWO_LINE_LCD_EIGHT_BIT_MODE 0x38
#define CURSOR_OFF 0x0C
#define CURSOR_ON 0x0E
#define SET_CURSOR_LOCATION 0x80

/*Function Prototypes*/

void LCD_Init (void);										// Function for initialization the LCD
void Send_CMD (u8 cmd);										// Function for sending commands to LCD
void Send_DATA (u8 data);									// Function for sending data to LCD
void Display_Str (const u8 *str);							// Function for display data to LCD
void Go_To_Row_Col (u8 row, u8 col);						// Function for moving to specific column and row on LCD
void LCD_CLEAR (void);										// Function for clearing LCD
void Display_Str_Row_Col (u8 row, u8 col, const u8 *str);	// Display string at specified row and column
void Integer_TO_String (u8 value);							// Display an integer number on the screen

#endif
