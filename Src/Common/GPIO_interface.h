/************************************/
/* Author	:		Mina Tarek		*/
/* MC		:		TivaC4			*/
/* Date   	:		22 August 2022	*/
/* Version	:		V01				*/
/************************************/


#ifndef _GPIO_INTERFACE_H
#define _GPIO_INTERFACE_H

#define		GPIO_APB			0
#define		GPIO_AHB			1

#define		GPIOA				0
#define		GPIOB				1
#define		GPIOC				2
#define		GPIOD				3
#define		GPIOE				4
#define		GPIOF				5

#define		PIN0				0
#define		PIN1				1
#define		PIN2				2
#define		PIN3				3
#define		PIN4				4
#define		PIN5				5
#define		PIN6				6
#define		PIN7				7

#define		INPUT				0
#define		OUTPUT				1

#define		DIGITAL				0
#define		ANALOG				1

#define		PULL_DOWN			0
#define		PULL_UP				1

#define		PUSH_PULL			0
#define		OPEN_DRAIN			1

#define		R2R					0
#define		R4R					1
#define		R8R					2

//bits for registers respectively: DIR, D/A, PU/PD/OD, Curr
#define		INPUT_ANALOG_2mA	INPUT,ANALOG,R2R,0
#define		INPUT_ANALOG_4mA	INPUT,ANALOG,R4R,0
#define		INPUT_ANALOG_8mA	INPUT,ANALOG,R8R,0

#define		INPUT_PD_2mA		INPUT,DIGITAL,R2R,PULL_DOWN
#define		INPUT_PD_4mA		INPUT,DIGITAL,R4R,PULL_DOWN
#define		INPUT_PD_8mA		INPUT,DIGITAL,R8R,PULL_DOWN

#define		INPUT_PU_2mA		INPUT,DIGITAL,R2R,PULL_UP
#define		INPUT_PU_4mA		INPUT,DIGITAL,R4R,PULL_UP
#define		INPUT_PU_8mA		INPUT,DIGITAL,R8R,PULL_UP

#define		OUTPUT_2mA_OD		OUTPUT,DIGITAL,R2R,OPEN_DRAIN
#define		OUTPUT_4mA_OD		OUTPUT,DIGITAL,R4R,OPEN_DRAIN
#define		OUTPUT_8mA_OD		OUTPUT,DIGITAL,R8R,OPEN_DRAIN

#define		OUTPUT_2mA_PP		OUTPUT,DIGITAL,R2R,PUSH_PULL
#define		OUTPUT_4mA_PP		OUTPUT,DIGITAL,R4R,PUSH_PULL
#define		OUTPUT_8mA_PP		OUTPUT,DIGITAL,R8R,PUSH_PULL

#define 	GPIO_HIGH			 1
#define 	GPIO_LOW 			 0

void		GPIO_voidInit			(u8	Copy_u8PORT);
void 		GPIO_voidSetPinDirection(u8 Copy_u8PORT , u8 Copy_u8PIN , u8 Copy_u8DIR, u8 Copy_u8ADS, u8 Copy_u8Curr, u8 Copy_u8UP_DOWN_PUSHPULL_OD);
void 		GPIO_voidSetPinValue	(u8 Copy_u8PORT , u8 Copy_u8PIN , u8 Copy_u8Value);
u8	 		GPIO_voidGetPinValue	(u8 Copy_u8PORT , u8 Copy_u8PIN);



#endif
