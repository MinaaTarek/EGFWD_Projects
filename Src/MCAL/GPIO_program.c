/************************************/
/* Author	:		Mina Tarek		*/
/* MC		:		TivaC4			*/
/* Date   	:		22 August 2022	*/
/* Version	:		V01				*/
/************************************/

#include	"STD_TYPES.h"
#include	"BIT_MATH.h"
#include	"GPIO_interface.h"
#include	"GPIO_private.h"
#include	"GPIO_config.h"

void	GPIO_voidInit(u8 Copy_u8PORT){
	/*
	Future thoughts:

	*/
	#if			GPIO_BUS	==	GPIO_APB
		switch(Copy_u8PORT){
			case GPIOA:
				CLR_BIT(SCTRL_GPIOHBCTL,GPIOA);	break;
			case GPIOB:
				CLR_BIT(SCTRL_GPIOHBCTL,GPIOB);	break;
			case GPIOC:
				CLR_BIT(SCTRL_GPIOHBCTL,GPIOC);	break;
			case GPIOD:
				CLR_BIT(SCTRL_GPIOHBCTL,GPIOD);	break;
			case GPIOE:
				CLR_BIT(SCTRL_GPIOHBCTL,GPIOE);	break;
			case GPIOF:
				CLR_BIT(SCTRL_GPIOHBCTL,GPIOF);	break;
			default:
				/*Wrong PORT selection*/			break;
		}
	#elif		GPIO_BUS	==	GPIO_AHB
		switch(Copy_u8PORT){
			case GPIOA:
				SET_BIT(SCTRL_GPIOHBCTL,GPIOA);	break;
			case GPIOB:
				SET_BIT(SCTRL_GPIOHBCTL,GPIOB);	break;
			case GPIOC:
				SET_BIT(SCTRL_GPIOHBCTL,GPIOC);	break;
			case GPIOD:
				SET_BIT(SCTRL_GPIOHBCTL,GPIOD);	break;
			case GPIOE:
				SET_BIT(SCTRL_GPIOHBCTL,GPIOE);	break;
			case GPIOF:
				SET_BIT(SCTRL_GPIOHBCTL,GPIOF);	break;
			default:
				/*Wrong PORT selection*/			break;
		}
	#endif
}
//Used Registers GPIOx_DIR, GPIOx_DEN, R2R or R4R or R8R, PUR or PDR or ODR, AMSEL, 
void GPIO_voidSetPinDirection(u8 Copy_u8PORT , u8 Copy_u8PIN , u8 Copy_u8DIR, u8 Copy_u8ADS, u8 Copy_u8Curr, u8 Copy_u8UP_DOWN_PUSHPULL_OD){
	switch(Copy_u8PORT){
		case GPIOA : 
					if (Copy_u8PIN < 8||Copy_u8PORT>6){
						//if the direction is OUT
						if (Copy_u8DIR == OUTPUT){
							SET_BIT(GPIOA_DIR,Copy_u8PIN);
							//if the direction is OUT and OD
							if (Copy_u8UP_DOWN_PUSHPULL_OD == OPEN_DRAIN){
								SET_BIT(GPIOA_DATA,Copy_u8PIN);
							}
							//if the direction is OUT and PP
							else {
								CLR_BIT(GPIOA_DATA,Copy_u8PIN);
							}
						}
						//if the direction is INPUT
						else{
							CLR_BIT(GPIOA_DIR,Copy_u8PIN);
						}
						//if the Analog/digital selection is analog
						if (Copy_u8ADS == ANALOG){
							SET_BIT(GPIOA_AMSEL,Copy_u8PIN);
						}
						//if the analog/digital selection is digital
						else {
							SET_BIT(GPIOA_DEN,Copy_u8PIN);
							//if the direction is input Pull up
							if (Copy_u8UP_DOWN_PUSHPULL_OD == PULL_UP){
								SET_BIT(GPIOA_PUR,Copy_u8PIN);
							}
							//if the direction is input Pull down
							else{
								SET_BIT(GPIOA_PDR,Copy_u8PIN);
							}
						}
						//Current Selection
						if (Copy_u8Curr == R2R){
							SET_BIT(GPIOA_R2R,Copy_u8PIN);
						}
						else if (Copy_u8Curr == R4R){
							SET_BIT(GPIOA_R4R,Copy_u8PIN);
						}
						else {
							SET_BIT(GPIOA_R8R,Copy_u8PIN);
						}
					}
					else {
//						#error "Wrong Port name or number"
					}
					break;
		case GPIOB :
					if (Copy_u8PIN < 8||Copy_u8PORT>6){
						//if the direction is OUT
						if (Copy_u8DIR == OUTPUT){
							SET_BIT(GPIOB_DIR,Copy_u8PIN);
							//if the direction is OUT and OD
							if (Copy_u8UP_DOWN_PUSHPULL_OD == OPEN_DRAIN){
								SET_BIT(GPIOB_DATA,Copy_u8PIN);
							}
							//if the direction is OUT and PP
							else {
								CLR_BIT(GPIOB_DATA,Copy_u8PIN);
							}
						}
						//if the direction is INPUT
						else{
							CLR_BIT(GPIOB_DIR,Copy_u8PIN);
						}
						//if the Analog/digital selection is analog
						if (Copy_u8ADS == ANALOG){
							SET_BIT(GPIOB_AMSEL,Copy_u8PIN);
						}
						//if the analog/digital selection is digital
						else {
							SET_BIT(GPIOB_DEN,Copy_u8PIN);
							//if the direction is input Pull up
							if (Copy_u8UP_DOWN_PUSHPULL_OD == PULL_UP){
								SET_BIT(GPIOB_PUR,Copy_u8PIN);
							}
							//if the direction is input Pull down
							else{
								SET_BIT(GPIOB_PDR,Copy_u8PIN);
							}
						}
						//Current Selection
						if (Copy_u8Curr == R2R){
							SET_BIT(GPIOB_R2R,Copy_u8PIN);
						}
						else if (Copy_u8Curr == R4R){
							SET_BIT(GPIOB_R4R,Copy_u8PIN);
						}
						else {
							SET_BIT(GPIOB_R8R,Copy_u8PIN);
						}
					}
					else {
//						#error "Wrong Port name or number"
					}
					break;
		case GPIOC :
					
					if (Copy_u8PIN < 8||Copy_u8PORT>6){
						//if the direction is OUT
						if (Copy_u8DIR == OUTPUT){
							SET_BIT(GPIOC_DIR,Copy_u8PIN);
							//if the direction is OUT and OD
							if (Copy_u8UP_DOWN_PUSHPULL_OD == OPEN_DRAIN){
								SET_BIT(GPIOC_DATA,Copy_u8PIN);
							}
							//if the direction is OUT and PP
							else {
								CLR_BIT(GPIOC_DATA,Copy_u8PIN);
							}
						}
						//if the direction is INPUT
						else{
							CLR_BIT(GPIOC_DIR,Copy_u8PIN);
						}
						//if the Analog/digital selection is analog
						if (Copy_u8ADS == ANALOG){
							SET_BIT(GPIOC_AMSEL,Copy_u8PIN);
						}
						//if the analog/digital selection is digital
						else {
							SET_BIT(GPIOC_DEN,Copy_u8PIN);
							//if the direction is input Pull up
							if (Copy_u8UP_DOWN_PUSHPULL_OD == PULL_UP){
								SET_BIT(GPIOC_PUR,Copy_u8PIN);
							}
							//if the direction is input Pull down
							else{
								SET_BIT(GPIOC_PDR,Copy_u8PIN);
							}
						}
						//Current Selection
						if (Copy_u8Curr == R2R){
							SET_BIT(GPIOC_R2R,Copy_u8PIN);
						}
						else if (Copy_u8Curr == R4R){
							SET_BIT(GPIOC_R4R,Copy_u8PIN);
						}
						else {
							SET_BIT(GPIOC_R8R,Copy_u8PIN);
						}
					}
					else {
//						#error "Wrong Port name or number"
					}
					break;
					
		case GPIOD :
					
					if (Copy_u8PIN < 8||Copy_u8PORT>8){
						//if the direction is OUT
						if (Copy_u8DIR == OUTPUT){
							SET_BIT(GPIOD_DIR,Copy_u8PIN);
							//if the direction is OUT and OD
							if (Copy_u8UP_DOWN_PUSHPULL_OD == OPEN_DRAIN){
								SET_BIT(GPIOD_DATA,Copy_u8PIN);
							}
							//if the direction is OUT and PP
							else {
								CLR_BIT(GPIOD_DATA,Copy_u8PIN);
							}
						}
						//if the direction is INPUT
						else{
							CLR_BIT(GPIOD_DIR,Copy_u8PIN);
						}
						//if the Analog/digital selection is analog
						if (Copy_u8ADS == ANALOG){
							SET_BIT(GPIOD_AMSEL,Copy_u8PIN);
						}
						//if the analog/digital selection is digital
						else {
							SET_BIT(GPIOD_DEN,Copy_u8PIN);
							//if the direction is input Pull up
							if (Copy_u8UP_DOWN_PUSHPULL_OD == PULL_UP){
								SET_BIT(GPIOD_PUR,Copy_u8PIN);
							}
							//if the direction is input Pull down
							else{
								SET_BIT(GPIOD_PDR,Copy_u8PIN);
							}
						}
						//Current Selection
						if (Copy_u8Curr == R2R){
							SET_BIT(GPIOD_R2R,Copy_u8PIN);
						}
						else if (Copy_u8Curr == R4R){
							SET_BIT(GPIOD_R4R,Copy_u8PIN);
						}
						else {
							SET_BIT(GPIOD_R8R,Copy_u8PIN);
						}
					}
					else {
//						#error "Wrong Port name or number"
					}
					break;
		case GPIOE :
					
					if (Copy_u8PIN < 6||Copy_u8PORT>8){
						//if the direction is OUT
						if (Copy_u8DIR == OUTPUT){
							SET_BIT(GPIOE_DIR,Copy_u8PIN);
							//if the direction is OUT and OD
							if (Copy_u8UP_DOWN_PUSHPULL_OD == OPEN_DRAIN){
								SET_BIT(GPIOE_DATA,Copy_u8PIN);
							}
							//if the direction is OUT and PP
							else {
								CLR_BIT(GPIOE_DATA,Copy_u8PIN);
							}
						}
						//if the direction is INPUT
						else{
							CLR_BIT(GPIOE_DIR,Copy_u8PIN);
						}
						//if the Analog/digital selection is analog
						if (Copy_u8ADS == ANALOG){
							SET_BIT(GPIOE_AMSEL,Copy_u8PIN);
						}
						//if the analog/digital selection is digital
						else {
							SET_BIT(GPIOE_DEN,Copy_u8PIN);
							//if the direction is input Pull up
							if (Copy_u8UP_DOWN_PUSHPULL_OD == PULL_UP){
								SET_BIT(GPIOE_PUR,Copy_u8PIN);
							}
							//if the direction is input Pull down
							else{
								SET_BIT(GPIOE_PDR,Copy_u8PIN);
							}
						}
						//Current Selection
						if (Copy_u8Curr == R2R){
							SET_BIT(GPIOE_R2R,Copy_u8PIN);
						}
						else if (Copy_u8Curr == R4R){
							SET_BIT(GPIOE_R4R,Copy_u8PIN);
						}
						else {
							SET_BIT(GPIOE_R8R,Copy_u8PIN);
						}
					}
					else {
//						#error "Wrong Port name or number"
					}
					break;
					
		case GPIOF :
					
					if (Copy_u8PIN < 4||Copy_u8PORT>6){
						//if the direction is OUT
						if (Copy_u8DIR == OUTPUT){
							SET_BIT(GPIOF_DIR,Copy_u8PIN);
							//if the direction is OUT and OD
							if (Copy_u8UP_DOWN_PUSHPULL_OD == OPEN_DRAIN){
								SET_BIT(GPIOF_ODR,Copy_u8PIN);
							}
							//if the direction is OUT and PP
							else {
								CLR_BIT(GPIOF_ODR,Copy_u8PIN);
							}
						}
						//if the direction is INPUT
						else{
							CLR_BIT(GPIOF_DIR,Copy_u8PIN);
						}
						//if the Analog/digital selection is analog
						if (Copy_u8ADS == ANALOG){
							SET_BIT(GPIOF_AMSEL,Copy_u8PIN);
						}
						//if the analog/digital selection is digital
						else {
							SET_BIT(GPIOF_DEN,Copy_u8PIN);
							//if the direction is input Pull up
							if (Copy_u8UP_DOWN_PUSHPULL_OD == PULL_UP){
								SET_BIT(GPIOF_PUR,Copy_u8PIN);
							}
							//if the direction is input Pull down
							else{
								SET_BIT(GPIOF_PDR,Copy_u8PIN);
							}
						}
						//Current Selection
						if (Copy_u8Curr == R2R){
							SET_BIT(GPIOF_R2R,Copy_u8PIN);
						}
						else if (Copy_u8Curr == R4R){
							SET_BIT(GPIOF_R4R,Copy_u8PIN);
						}
						else {
							SET_BIT(GPIOF_R8R,Copy_u8PIN);
						}
					}
					else {
//						#error "Wrong Port name or number"
					}
					break;
		default		:break;
	}
}

void GPIO_voidSetPinValue(u8 Copy_u8PORT , u8 Copy_u8PIN , u8 Copy_u8Value){
	switch (Copy_u8PORT){
		case GPIOA:
					if (Copy_u8Value == GPIO_HIGH){
						SET_BIT(GPIOA_DATA , Copy_u8PIN);
					}
					else if (Copy_u8Value == GPIO_LOW){
						CLR_BIT(GPIOA_DATA , Copy_u8PIN);
					}
					break;
		case GPIOB:
					if (Copy_u8Value == GPIO_HIGH){
						SET_BIT(GPIOB_DATA , Copy_u8PIN);
					}
					else if (Copy_u8Value == GPIO_LOW){
						CLR_BIT(GPIOB_DATA , Copy_u8PIN);
					}
					break;
		case GPIOC:
					if (Copy_u8Value == GPIO_HIGH){
						SET_BIT(GPIOC_DATA , Copy_u8PIN);
					}
					else if (Copy_u8Value == GPIO_LOW){
						CLR_BIT(GPIOC_DATA , Copy_u8PIN);
					}
					break;
		case GPIOD:
					if (Copy_u8Value == GPIO_HIGH){
						SET_BIT(GPIOD_DATA , Copy_u8PIN);
					}
					else if (Copy_u8Value == GPIO_LOW){
						CLR_BIT(GPIOD_DATA , Copy_u8PIN);
					}
					break;
		case GPIOE:
					if (Copy_u8Value == GPIO_HIGH){
						SET_BIT(GPIOE_DATA , Copy_u8PIN);
					}
					else if (Copy_u8Value == GPIO_LOW){
						CLR_BIT(GPIOE_DATA , Copy_u8PIN);
					}
					break;
		case GPIOF:
					if (Copy_u8Value == GPIO_HIGH){
						SET_BIT(GPIOF_ODR , Copy_u8PIN);
					}
					else if (Copy_u8Value == GPIO_LOW){
						CLR_BIT(GPIOF_ODR , Copy_u8PIN);
					}
					break;
		default:	break;
	}
}

u8 GPIO_u8GetPinValue(u8 Copy_u8PORT , u8 Copy_u8PIN){
	u8 LOC_u8Result = 0;
	switch(Copy_u8PORT){
		case GPIOA:	LOC_u8Result = GET_BIT(GPIOA_DATA , Copy_u8PIN);
			break;                               
		case GPIOB:	LOC_u8Result = GET_BIT(GPIOB_DATA , Copy_u8PIN);
			break;                               
		case GPIOC:	LOC_u8Result = GET_BIT(GPIOC_DATA , Copy_u8PIN);
			break;                               
		case GPIOD:	LOC_u8Result = GET_BIT(GPIOD_DATA , Copy_u8PIN);
			break;                               
		case GPIOE:	LOC_u8Result = GET_BIT(GPIOE_DATA , Copy_u8PIN);
			break;                               
		case GPIOF:	LOC_u8Result = GET_BIT(GPIOF_DATA , Copy_u8PIN);
			break;
		default: 
			break;
	}
		return LOC_u8Result;
}
