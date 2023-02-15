#include "ADC.h"

void ADC_Init(void)
{
	ADMUX = (1<<REFS0);  // AREF = AVcc

	ADCSRA = (1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);  // ADC Enable and prescaler of 128

}
u16 ADC_readChannel (u8 channel) // for choosing which channel to use
{
	channel &= 0b00000111;  // AND operation with 7
	 ADMUX = (ADMUX & 0xF8)|channel;

	 ADCSRA |= (1<<ADSC); // start single conversion and set ADSC

	 while(ADCSRA & (1<<ADSC));  // wait for conversion to complete ADSC becomes '0' again
	 return (ADC);
	}
