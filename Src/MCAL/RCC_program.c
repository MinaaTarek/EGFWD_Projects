/****************************************/
/*	Author	: Mina Tarek Abdelsayed		*/
/*	Version	: V01						*/
/*	Date	: 22 August 2022			*/
/****************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void RCC_voidClockTypeInit(void){
	//SCTRL RESET VALUE (PIOSC)
	SCTRL_RCC	= 0x00002801;
	#if	 	 RCC_CLOCK_SOURCE == RCC_MOSC
	CLR_BIT	(SCTRL_RCC,0);
	CLR_BIT	(SCTRL_RCC,4);
	CLR_BIT	(SCTRL_RCC,5);
	SET_BIT	(SCTRL_RCC,11);
	//XTAL Value of 16MHz
	SET_BIT(SCTRL_RCC,6);
	CLR_BIT(SCTRL_RCC,7);
	CLR_BIT(SCTRL_RCC,8);
	CLR_BIT(SCTRL_RCC,9);
	SET_BIT(SCTRL_RCC,10);
	#elif	  RCC_CLOCK_SOURCE == RCC_PIOSC
	SET_BIT	(SCTRL_RCC,0);
	SET_BIT	(SCTRL_RCC,4);
	CLR_BIT	(SCTRL_RCC,5);
	SET_BIT	(SCTRL_RCC,11);
	#elif	  RCC_CLOCK_SOURCE == RCC_PIOSC_DIV_4
	SET_BIT	(SCTRL_RCC,0);
	CLR_BIT	(SCTRL_RCC,4);
	SET_BIT	(SCTRL_RCC,5);
	SET_BIT	(SCTRL_RCC,11);
	#elif	RCC_CLOCK_SOURCE == RCC_LFIOSC
	SET_BIT	(SCTRL_RCC,0);
	SET_BIT	(SCTRL_RCC,4);
	SET_BIT	(SCTRL_RCC,5);
	SET_BIT	(SCTRL_RCC,11);
	#elif 	RCC_CLOCK_SOURCE == RCC_PLL
		#if 	RCC_PLL_INPUT 	== RCC_MOSC
		//CLEAR BYPASS bit
		#elif	RCC_PLL_INPUT == RCC_PIOSC
		//
		#elif	RCC_PLL_INPUT == RCC_PIOSC_DIV_4
		//
		#elif	RCC_PLL_INPUT	==	RCC_LFIOSC
		//
			#if RCC_PLL_DIV == 3
		//	SET SYS DIV
			#endif
		#endif
	#else
		#error ("Wrong Clock type")
	#endif

}

void RCC_voidClockEnable (u8 Copy_u8RegisterID, u8 Copy_u8BitName){
	if (Copy_u8RegisterID<=2){
		switch(Copy_u8RegisterID){
			case	RCC_GPIO: SET_BIT(SCTRL_RCGCGPIO,	Copy_u8BitName);	break;
			case	RCC_TMR : SET_BIT(SCTRL_PRTIMER ,	Copy_u8BitName);	break;
			case	RCC_WTMR: SET_BIT(SCTRL_PRWTIMER,	Copy_u8BitName);	break;
//			default			: /*return error*/
		}
	}
	else {
		/*return error*/
}
}

void RCC_voidClockDisable (u8 Copy_u8RegisterID, u8 Copy_u8BitName){
	if (Copy_u8RegisterID<=2){
		switch(Copy_u8RegisterID){
			case	RCC_GPIO: CLR_BIT(SCTRL_RCGCGPIO,	Copy_u8BitName);	break;
			case	RCC_TMR : CLR_BIT(SCTRL_PRTIMER ,	Copy_u8BitName);	break;
			case	RCC_WTMR: CLR_BIT(SCTRL_PRWTIMER,	Copy_u8BitName);	break;
//			default			: /*return error*/
		}
	}
	else {
		/*return error*/
	}
}