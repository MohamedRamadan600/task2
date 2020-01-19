/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */
//#include <asf.h>
#include "gpio.h"
#include "pushButton.h"
#include "led.h"


	uint8_t x=0;
	gpioPinDirection(GPIOC,BIT4,INPUT);
	gpioPinDirection(GPIOB,BIT4,OUTPUT);
	//gpioPinDirection(GPIOB,BIT0|BIT1,OUTPUT);
	/* Insert system clock initialization code here (sysclk_init()). */
		while (1)
		{
			pushButtonInit(BTN_0);
			Led_Init(LED_0);
			 x= gpioPinRead(GPIOC,BIT4);
			//gpioPinWrite(GPIOA,BIT0,HIGH);
			if (x==1)
			{
				Led_Off(LED_0);
				//softwareDelayMs(100);
			}
			else if (x==0)
			{
				Led_On(LED_0);
				//softwareDelayMs(100);
			}
			
			}
	

