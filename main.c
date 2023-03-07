// Description----------------------------------------------------------------|
/*
 * 
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include "stdio.h"

// GLOBAL VARIABLES ----------------------------------------------------------|
/*struct contain age data*/

typedef struct age_data{

	uint8_t day;
	uint8_t month;
	uint16_t year;
	uint8_t age;
}age_data;

age_data my_age;   //create age_data struct called my_age

// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void);                                                   //COMPULSORY

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{


	while(1)
	{

	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|




