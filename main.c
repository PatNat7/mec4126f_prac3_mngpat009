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
	init_LCD(); //initiate the LCD
	my_age.day =23;  //assign age to my_age
    	char str[2];  //string array to store the counter


	while(1)
	{	
		for(uint8_t i=0; i<my_age.day+1;i++)
		{
	 		sprintf(str,"%d",i);   //allows the storage of the integer counter in a string array
     			lcd_putstring(str);   //display the counter number on the LCD screen
     			delay(50000);         //delay
     			lcd_command(CLEAR);   //clear the LCD screen after each counter value is displayed
     			delay(50000);        //delay
		}

	

	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|




