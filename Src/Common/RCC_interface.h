/****************************************/
/*	Author	: Mina Tarek Abdelsayed		*/
/*	Version	: V01						*/
/*	Date	: 22 August 2022			*/
/****************************************/


#ifndef _RCC_INTERFACE_H
#define _RCC_INTERFACE_H

#define		RCC_MOSC				0
#define    	RCC_PIOSC				1
#define	    RCC_PIOSC_DIV_4			2
#define		RCC_LFIOSC				3
#define		RCC_PLL					4
			
#define		RCC_GPIO				0	
#define		RCC_TMR 				1
#define		RCC_WTMR				2
	
#define		RCC_GPIOA				0
#define		RCC_GPIOB				1
#define		RCC_GPIOC				2
#define		RCC_GPIOD				3
#define		RCC_GPIOE				4
#define		RCC_GPIOF				5

#define		RCC_TMR0				0
#define		RCC_TMR1				1
#define		RCC_TMR2				2
#define		RCC_TMR3				3
#define		RCC_TMR4				4
#define		RCC_TMR5				5

#define		RCC_WTMR0				0
#define		RCC_WTMR1				1
#define		RCC_WTMR2				2
#define		RCC_WTMR3				3
#define		RCC_WTMR4				4
#define		RCC_WTMR5				5

//Select clock source & frequency to system clock (select parameters in RCC_config)
void RCC_voidClockTypeInit	(void);

//Enable Clock Gate for peripheral
void RCC_voidClockEnable	(u8 Copy_u8BusId, u8 Copy_u8PerId);

//Disable Clock Gate for peripheral
void RCC_voidClockDisable	(u8 Copy_u8BusId, u8 Copy_u8PerId);

#endif