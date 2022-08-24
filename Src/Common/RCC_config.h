/****************************************/
/*	Author	: Mina Tarek Abdelsayed		*/
/*	Version	: V01						*/
/*	Date	: 22 August 2022			*/
/****************************************/

#ifndef _RCC_CONFIG_H
#define _RCC_CONFIG_H


/* Options:    RCC_MOSC
               RCC_PIOSC
               RCC_PIOSC_DIV_4
               RCC_LFIOSC			
			   RCC_PLL				*/
#define RCC_CLOCK_SOURCE		RCC_MOSC

#if RCC_CLOCK_SOURCE		==		RCC_PLL
/* Options:     RCC_MOSC
                RCC_PIOSC
				RCC_PIOSC_DIV_4
                RCC_LFIOSC			*/
/* Note: Select source only if you have PLL as input clock source */
#define RCC_PLL_INPUT				RCC_MOSC

/*	PLL								*/
/*	Options: 2 to 16 */
/*	Note: Select value only if you have PLL as input clock source */
#define RCC_PLL_MUL_VAL   			4
#endif

#endif