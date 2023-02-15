#ifndef MCAL_ADC_ADC_H_
#define MCAL_ADC_ADC_H_

#include "../../UTLIS/Common_Macros.h"
#include "../../UTLIS/Std_Types.h"
#include <avr/io.h>
#include <avr/delay.h>
#include <avr/interrupt.h>
#include "../../MCAL/DIO/DIO.h"

/*FUNCTION prototypes*/

void ADC_Init(void); //function for initialization ADC

u16 ADC_readChannel (u8 channel); //function to read data from specific channel




#endif /* MCAL_ADC_ADC_H_ */
