/********************************************************/
/* Author :		Mina Tarek								*/
/* Date   :		22 August 2022							*/
/* Version:		V01										*/
/********************************************************/

#include	"STD_TYPES.h"
#include	"BIT_MATH.h"
#include	"NVIC_interface.h"
#include	"NVIC_private.h"
#include	"NVIC_config.h"

	/*
	To use the errorstatus method:
	change the function return type to u8
	remove the commented lines below
	*/

void NVIC_voidInit(void)
{
//    #define SCB_AIRCR  *((u32*)	0xE000ED0C)
	SCB_AIRCR = NVIC_GROUP_SUB_DISTRIBUTION;
}


//Enables interrupt on a specific peripheral//
void	NVIC_voidEnableInterrupt	(u8	 Copy_u8IntNumber){
	
		//u8 ErrorStatus;
	if 		(Copy_u8IntNumber 	<	 32){
		//SET_BIT(NVIC_ISER0,Copy_u8IntNumber);		//Only for declaration, don't remove comment
		NVIC_ISER0	=	(1	<<	Copy_u8IntNumber);		//Because writing 0 on this register has no effect (faster operation)
		//ErrorStatus = 0;
	}
	
	else if	(Copy_u8IntNumber	<	59){
		Copy_u8IntNumber-=32;
		//SET_BIT(NVIC_ISER1,Copy_u8IntNumber);		//Only for declaration, don't remove comment
		NVIC_ISER1	=	(1	<<	Copy_u8IntNumber);		//Because writing 0 on this register has no effect (faster operation)
		//ErrorStatus = 0;
	}
	else{
		//ErrorStatus = 1;
		/*Returns Warning*/
	}
	//return ErrorStatus;
}

//Disables interrupt on a specific peripheral//
void	NVIC_voidDisableInterrupt	(u8	 Copy_u8IntNumber){
	
		//u8 ErrorStatus;
	if 		(Copy_u8IntNumber 	<	 32){
		//SET_BIT(NVIC_ICER0,Copy_u8IntNumber);		//Only for declaration, don't remove comment
		NVIC_ICER0	=	(1	<<	Copy_u8IntNumber);		//Because writing 0 on this register has no effect (faster operation)
		//ErrorStatus = 0;
	}
	
	else if	(Copy_u8IntNumber	<	59){
		Copy_u8IntNumber-=32;
		//SET_BIT(NVIC_ICER1,Copy_u8IntNumber);		//Only for declaration, don't remove comment
		NVIC_ICER1	=	(1	<<	Copy_u8IntNumber);		//Because writing 0 on this register has no effect (faster operation)
		//ErrorStatus = 0;
	}
	else{
		//ErrorStatus = 1;
		/*Returns Warning*/
	}
	//return ErrorStatus;
}


//Sets pending flag on a specific peripheral//
void	NVIC_voidSetPendingFlag	(u8	 Copy_u8IntNumber){
	
		//u8 ErrorStatus;
	if 		(Copy_u8IntNumber 	<	 32){
		//SET_BIT(NVIC_ICER0,Copy_u8IntNumber);		//Only for declaration, don't remove comment
		NVIC_ISPR0	=	(1	<<	Copy_u8IntNumber);		//Because writing 0 on this register has no effect (faster operation)
		//ErrorStatus = 0;
	}
	
	else if	(Copy_u8IntNumber	<	59){
		Copy_u8IntNumber-=32;
		//SET_BIT(NVIC_ICER1,Copy_u8IntNumber);		//Only for declaration, don't remove comment
		NVIC_ISPR1	=	(1	<<	Copy_u8IntNumber);		//Because writing 0 on this register has no effect (faster operation)
		//ErrorStatus = 0;
	}
	else{
		//ErrorStatus = 1;
		/*Returns Warning*/
	}
	//return ErrorStatus;
}


//Sets pending flag on a specific peripheral//
void	NVIC_voidClearPendingFlag	(u8	 Copy_u8IntNumber){
	
		//u8 ErrorStatus;
	if 		(Copy_u8IntNumber 	<	 32){
		//SET_BIT(NVIC_ICER0,Copy_u8IntNumber);		//Only for declaration, don't remove comment
		NVIC_ICPR0	=	(1	<<	Copy_u8IntNumber);		//Because writing 0 on this register has no effect (faster operation)
		//ErrorStatus = 0;
	}
	
	else if	(Copy_u8IntNumber	<	59){
		Copy_u8IntNumber-=32;
		//SET_BIT(NVIC_ICER1,Copy_u8IntNumber);		//Only for declaration, don't remove comment
		NVIC_ICPR1	=	(1	<<	Copy_u8IntNumber);		//Because writing 0 on this register has no effect (faster operation)
		//ErrorStatus = 0;
	}
	else{
		//ErrorStatus = 1;
		/*Returns Warning*/
	}
	//return ErrorStatus;
}


//Checks on active interrupt 
u8	NVIC_u8GetActiveFlag	(u8	 Copy_u8IntNumber){
	u8 Local_u8Result;
	if 		(Copy_u8IntNumber 	<	 32){
		Local_u8Result	=	GET_BIT(NVIC_IABR0,Copy_u8IntNumber);
	}
	
	else if	(Copy_u8IntNumber	<	59){
		Copy_u8IntNumber-=32;
		Local_u8Result	=	GET_BIT(NVIC_IABR1,Copy_u8IntNumber);
	}
	else{
		/*Returns Warning*/
	}
	return Local_u8Result;
}


void NVIC_voidSetPriority(s8 Copy_s8IntID , u8 Copy_u8GroupPriority ,u8 Copy_u8SubPriority )
{							/*0x05FA0400 3 Group & 1 sub priority*/
	u8 Local_u8Priority = Copy_u8SubPriority|(Copy_u8GroupPriority<<((NVIC_GROUP_SUB_DISTRIBUTION - 0x05FA0300)/256));
	/* core peripheral 			*/
	if(Copy_s8IntID < 0)
	{

	}
	/* external peripheral		*/ /*EXTI0 = 6*/
	else if(Copy_s8IntID >= 0)
	{
		NVIC_IPR[Copy_s8IntID] = Local_u8Priority << 4 ;
	}
	SCB_AIRCR = NVIC_GROUP_SUB_DISTRIBUTION ;
}

