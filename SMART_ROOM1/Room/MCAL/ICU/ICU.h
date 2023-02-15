#ifndef MCAL_ICU_H_
#define MCAL_ICU_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "../DIO/DIO.h"
#include "../../UTLIS/Common_Macros.h"
#include "../../UTLIS/Std_Types.h"

#define NULL_Ptr ((void *)0)
/*Define Data Types*/

typedef enum
{
	Falling,
	Rising,
}ICU_Edge_t;

typedef enum
{
	No_Prescaler,
	Prescaler_1,
	Prescaler_8,
	Prescaler_64,
	Prescaler_256,
	Prescaler_1024,
}ICU_Prescaler_t;

typedef struct
{
	ICU_Edge_t edge;
	ICU_Prescaler_t clock;
}ICU_Config_t;

/*Function Prototypes*/

void ICU_Init (ICU_Config_t *config_ptr);		// Function for initialization ICU Feature
void ICU_SelectEdge (ICU_Edge_t edge);			// Function for selecting detected edge
u16 ICU_GetInputCaptureValue (void);			// Function for get the value of ICR register
void ICU_ClearTimerValue (void);				// for Clearing the TCNT register
void ICU_SetCallBack (void (*ptr2func)(void));	// Callback function to call function from the upper layer to lower layer
void ICU_deInit (void);							// Function to de-initialize ICU Feature
#endif
