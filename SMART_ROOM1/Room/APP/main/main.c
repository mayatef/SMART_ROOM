#include <avr/io.h>
#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/UART/UART.h"
int main()
{
	USART_Init();                    //initialization of USART
	Set_PinDir(PORT_B,Pin_0,OUTPUT); // set pin_0 of portB
	Set_PinDir(PORT_B,Pin_1,OUTPUT); // set pin_1 of portB
	Set_GroupDir(PORT_C,0x0F);       // clearing the low bits of portc and setting the high bits
	while(1)
	{

		if(USART_receiveByte() == 'H')			// Alarm On
		{
			Set_PinLevel(PORT_B,Pin_0,HIGH);
			Set_PinLevel(PORT_B,Pin_1,HIGH);
		}
		else if(USART_receiveByte() == 'F')		// Fan On
		{
			Set_PinLevel(PORT_B,Pin_0,HIGH);
			Set_PinLevel(PORT_B,Pin_1,LOW);
		}
		else
		{
			Set_PinLevel(PORT_B,Pin_0,LOW);
			Set_PinLevel(PORT_B,Pin_1,LOW);
		}

		if(USART_receiveByte() == 'L')			// Led On
		{
			Set_GroupLevel(PORT_C,0x0F);
		}
		else
		{
			Set_GroupLevel(PORT_C,0x00);
		}
	}
}
