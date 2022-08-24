/********************************/
/* Author :		Mina Tarek		*/
/* Date   :		22 August 2022	*/
/* Version:		V01				*/
/********************************/

#ifndef _NVIC_PRIVATE_H
#define _NVIC_PRIVATE_H

/* Base Address	:	0xE000E100	*/

#define	NVIC_ISER0	*((u32*)	0xE000E100)				//Enables External interrupt from 0 to 31
#define	NVIC_ISER1	*((u32*)	0xE000E104)				//Enables External interrupt from 32 to 63

#define NVIC_ICER0	*((u32*)	0xE000E180)				//Disables External interrupt from 0 to 31
#define NVIC_ICER1	*((u32*)	0xE000E184)				//Disables External interrupt from 32 to 63

#define NVIC_ISPR0	*((u32*)	0xE000E200)				//Sets pending flag on external interrupt from 0 to 31
#define NVIC_ISPR1	*((u32*)	0xE000E204)				//Sets pending flag on External interrupt from 32 to 63

#define NVIC_ICPR0	*((u32*)	0xE000E280)				//Clears pending flag on external interrupt from 0 to 31
#define NVIC_ICPR1	*((u32*)	0xE000E284)				//Clears pending flag on External interrupt from 32 to 63

#define NVIC_IABR0	*((volatile u32*)	0xE000E300)		//Checks on active interrupts from 0 to 31
#define NVIC_IABR1	*((volatile u32*)	0xE000E304)		//Checks on active interrupts from 32 to 63

/*					without Dereference								*/
#define NVIC_IPR		  ((volatile u8 *)0xE000E100 + 0x300)

#define SCB_AIRCR		 *((volatile u32*)0xE000ED00 + 0x0C)

/* in (SCB => AIRCR) 4 bits for group and 0 sub => 4bits in (IPR) to determine group number	*/
#define		NVIC_GROUP_4_SUB_0		0x05FA0300
/* in (SCB => AIRCR) 3 bits for Group and 1 bit for sub										*/
#define		NVIC_GROUP_3_SUB_1		0x05FA0400
/* in (SCB => AIRCR) 2 bits for Group and 2 bit for sub										*/
#define		NVIC_GROUP_2_SUB_2		0x05FA0500
/* in (SCB => AIRCR) 1 bits for Group and 3 bit for sub										*/
#define		NVIC_GROUP_1_SUB_3		0x05FA0600
/* in (SCB => AIRCR) 0 group for 4 bits for sub												*/
#define		NVIC_GROUP_0_SUB_4		0x05FA0700

#define		NVIC_EXTI0		6

#endif
