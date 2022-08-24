/****************************************/
/*	Author	: Mina Tarek Abdelsayed		*/
/*	Version	: V01						*/
/*	Date	: 22 August 2022			*/
/****************************************/


#ifndef _RCC_PRIVATE_H
#define _RCC_PRIVATE_H

//base address of system control registers: 0x400FE000
#define		SCTRL_REG_BASE	0x400FE000

//Register values 			(			base		+offset)
#define		SCTRL_RCC			*((u32*) SCTRL_REG_BASE + 0x060)					//Clock control //choice of clock on processor
#define		SCTRL_RCC2			*((u32*) SCTRL_REG_BASE + 0x070)
#define		SCTRL_RCGC0			*((u32*) SCTRL_REG_BASE + 0x100)
#define		SCTRL_RCGC1			*((u32*) SCTRL_REG_BASE + 0x104)
#define		SCTRL_RCGC2			*((u32*) SCTRL_REG_BASE + 0x108)
#define		SCTRL_RCGCTIMER 	*((u32*) SCTRL_REG_BASE + 0x604)
#define		SCTRL_RCGCWTIMER	*((u32*) SCTRL_REG_BASE + 0x65C)

#define		SCTRL_PRTIMER		*((u32*) SCTRL_REG_BASE + 0xA04)
#define		SCTRL_PRWTIMER		*((u32*) SCTRL_REG_BASE + 0xA5C)

#define		SCTRL_RCGCGPIO		*((u32*) SCTRL_REG_BASE + 0x608)		//RCC


#endif