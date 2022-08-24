/*****************************************/
/* Author  :	Mina Tarek				 */			
/* Version :  V01                        */
/* Date    :  22 August 2022             */
/*****************************************/

#ifndef _GPIO_PRIVATE_H
#define _GPIO_PRIVATE_H


#define		SCTRL_REG_BASE	0x400FE000

#define		SCTRL_RCGCGPIO		*((u32*) SCTRL_REG_BASE + 0x608)
#define		SCTRL_PRGPIO		*((u32*) SCTRL_REG_BASE + 0xA08)
#define		SCTRL_PPGPIO		*((u32*) SCTRL_REG_BASE + 0x308)
#define		SCTRL_SRGPIO		*((u32*) SCTRL_REG_BASE + 0x508)
#define		SCTRL_GPIOHBCTL		*((u32*) SCTRL_REG_BASE + 0x06C)

#define		GPIOA_APB_BASE_ADDRESS		 0x40004000
#define		GPIOA_AHB_BASE_ADDRESS		 0x40058000
#define		GPIOB_APB_BASE_ADDRESS		 0x40005000
#define		GPIOB_AHB_BASE_ADDRESS		 0x40059000
#define		GPIOC_APB_BASE_ADDRESS		 0x40006000
#define		GPIOC_AHB_BASE_ADDRESS		 0x4005A000
#define		GPIOD_APB_BASE_ADDRESS		 0x40007000
#define		GPIOD_AHB_BASE_ADDRESS		 0x4005B000
#define		GPIOE_APB_BASE_ADDRESS		 0x40024000
#define		GPIOE_AHB_BASE_ADDRESS		 0x4005C000
#define		GPIOF_APB_BASE_ADDRESS		 0x40025000
#define		GPIOF_AHB_BASE_ADDRESS		 0x4005D000

				/*			Register Offset						*/
#define		DATA_OFFSET					0x000		//Data register
#define		DIR_OFFSET					0x400		//Direction
#define		R2R_OFFSET					0x500		//2mA
#define		R4R_OFFSET					0x504		//4mA
#define		R8R_OFFSET					0x508		//8mA
#define		ODR_OFFSET					0x50C		//Open-Drain
#define		PUR_OFFSET					0x510		//Pull-Up
#define		PDR_OFFSET					0x514		//Pull-Down
#define		SLR_OFFSET					0x518		//Slew Rate
#define		DEN_OFFSET					0x51C		//Digital enable
#define		LOCK_OFFSET					0x520		//Lock 
#define		CR_OFFSET					0x524		//Commit 
#define		AMSEL_OFFSET				0x528		//Analog mode select
#define		CTL_OFFSET					0x52C		//GPIO Control Register
#define		ADCCTL_OFFSET				0x530		//ADC Control
#define		DMACTL_OFFSET				0x534		//DMA Control



				/*			GPIO Bus Selection					*/
#if			GPIO_BUS	==	GPIO_APB		
				/*		APB Register addresses for PORTA		*/
#define		 GPIOA_DATA			*((u32 *) (GPIOA_APB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOA_DIR			*((u32 *) (GPIOA_APB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOA_R2R			*((u32 *) (GPIOA_APB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOA_R4R			*((u32 *) (GPIOA_APB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOA_R8R			*((u32 *) (GPIOA_APB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOA_ODR			*((u32 *) (GPIOA_APB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOA_PUR			*((u32 *) (GPIOA_APB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOA_PDR			*((u32 *) (GPIOA_APB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOA_SLR			*((u32 *) (GPIOA_APB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOA_DEN			*((u32 *) (GPIOA_APB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOA_LOCK			*((u32 *) (GPIOA_APB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOA_CR			*((u32 *) (GPIOA_APB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOA_AMSEL		*((u32 *) (GPIOA_APB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOA_CTL			*((u32 *) (GPIOA_APB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOA_ADCCTL		*((u32 *) (GPIOA_APB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOA_DMACTL		*((u32 *) (GPIOA_APB_BASE_ADDRESS + DMACTL_OFFSET))
		
				/*		APB Register addresses for PORTB		*/
#define		 GPIOB_DATA			*((u32 *) (GPIOB_APB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOB_DIR			*((u32 *) (GPIOB_APB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOB_R2R			*((u32 *) (GPIOB_APB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOB_R4R			*((u32 *) (GPIOB_APB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOB_R8R			*((u32 *) (GPIOB_APB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOB_ODR			*((u32 *) (GPIOB_APB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOB_PUR			*((u32 *) (GPIOB_APB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOB_PDR			*((u32 *) (GPIOB_APB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOB_SLR			*((u32 *) (GPIOB_APB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOB_DEN			*((u32 *) (GPIOB_APB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOB_LOCK			*((u32 *) (GPIOB_APB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOB_CR			*((u32 *) (GPIOB_APB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOB_AMSEL		*((u32 *) (GPIOB_APB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOB_CTL			*((u32 *) (GPIOB_APB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOB_ADCCTL		*((u32 *) (GPIOB_APB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOB_DMACTL		*((u32 *) (GPIOB_APB_BASE_ADDRESS + DMACTL_OFFSET))
		
				/*		APB Register addresses for PORTC		*/
#define		 GPIOC_DATA			*((u32 *) (GPIOC_APB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOC_DIR			*((u32 *) (GPIOC_APB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOC_R2R			*((u32 *) (GPIOC_APB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOC_R4R			*((u32 *) (GPIOC_APB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOC_R8R			*((u32 *) (GPIOC_APB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOC_ODR			*((u32 *) (GPIOC_APB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOC_PUR			*((u32 *) (GPIOC_APB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOC_PDR			*((u32 *) (GPIOC_APB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOC_SLR			*((u32 *) (GPIOC_APB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOC_DEN			*((u32 *) (GPIOC_APB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOC_LOCK			*((u32 *) (GPIOC_APB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOC_CR			*((u32 *) (GPIOC_APB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOC_AMSEL		*((u32 *) (GPIOC_APB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOC_CTL			*((u32 *) (GPIOC_APB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOC_ADCCTL		*((u32 *) (GPIOC_APB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOC_DMACTL		*((u32 *) (GPIOC_APB_BASE_ADDRESS + DMACTL_OFFSET))

				/*		APB Register addresses for PORTD		*/
#define		 GPIOD_DATA			*((u32 *) (GPIOD_APB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOD_DIR			*((u32 *) (GPIOD_APB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOD_R2R			*((u32 *) (GPIOD_APB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOD_R4R			*((u32 *) (GPIOD_APB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOD_R8R			*((u32 *) (GPIOD_APB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOD_ODR			*((u32 *) (GPIOD_APB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOD_PUR			*((u32 *) (GPIOD_APB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOD_PDR			*((u32 *) (GPIOD_APB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOD_SLR			*((u32 *) (GPIOD_APB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOD_DEN			*((u32 *) (GPIOD_APB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOD_LOCK			*((u32 *) (GPIOD_APB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOD_CR			*((u32 *) (GPIOD_APB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOD_AMSEL		*((u32 *) (GPIOD_APB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOD_CTL			*((u32 *) (GPIOD_APB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOD_ADCCTL		*((u32 *) (GPIOD_APB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOD_DMACTL		*((u32 *) (GPIOD_APB_BASE_ADDRESS + DMACTL_OFFSET))

				/*		APB Register addresses for PORTE		*/
#define		 GPIOE_DATA			*((u32 *) (GPIOE_APB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOE_DIR			*((u32 *) (GPIOE_APB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOE_R2R			*((u32 *) (GPIOE_APB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOE_R4R			*((u32 *) (GPIOE_APB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOE_R8R			*((u32 *) (GPIOE_APB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOE_ODR			*((u32 *) (GPIOE_APB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOE_PUR			*((u32 *) (GPIOE_APB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOE_PDR			*((u32 *) (GPIOE_APB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOE_SLR			*((u32 *) (GPIOE_APB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOE_DEN			*((u32 *) (GPIOE_APB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOE_LOCK			*((u32 *) (GPIOE_APB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOE_CR			*((u32 *) (GPIOE_APB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOE_AMSEL		*((u32 *) (GPIOE_APB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOE_CTL			*((u32 *) (GPIOE_APB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOE_ADCCTL		*((u32 *) (GPIOE_APB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOE_DMACTL		*((u32 *) (GPIOE_APB_BASE_ADDRESS + DMACTL_OFFSET))

				/*		APB Register addresses for PORTF		*/
#define		 GPIOF_DATA			*((u32 *) (GPIOF_APB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOF_DIR			*((u32 *) (GPIOF_APB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOF_R2R			*((u32 *) (GPIOF_APB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOF_R4R			*((u32 *) (GPIOF_APB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOF_R8R			*((u32 *) (GPIOF_APB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOF_ODR			*((u32 *) (GPIOF_APB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOF_PUR			*((u32 *) (GPIOF_APB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOF_PDR			*((u32 *) (GPIOF_APB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOF_SLR			*((u32 *) (GPIOF_APB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOF_DEN			*((u32 *) (GPIOF_APB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOF_LOCK			*((u32 *) (GPIOF_APB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOF_CR			*((u32 *) (GPIOF_APB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOF_AMSEL		*((u32 *) (GPIOF_APB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOF_CTL			*((u32 *) (GPIOF_APB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOF_ADCCTL		*((u32 *) (GPIOF_APB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOF_DMACTL		*((u32 *) (GPIOF_APB_BASE_ADDRESS + DMACTL_OFFSET))


#elif		GPIO_BUS	==	GPIO_AHB
				/*		AHB Register addresses for PORTA		*/
#define		 GPIOA_DATA			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOA_DIR			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOA_R2R			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOA_R4R			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOA_R8R			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOA_ODR			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOA_PUR			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOA_PDR			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOA_SLR			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOA_DEN			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOA_LOCK			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOA_CR			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOA_AMSEL		*((u32 *) (GPIOA_AHB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOA_CTL			*((u32 *) (GPIOA_AHB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOA_ADCCTL		*((u32 *) (GPIOA_AHB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOA_DMACTL		*((u32 *) (GPIOA_AHB_BASE_ADDRESS + DMACTL_OFFSET))

		
				/*		AHB Register addresses for PORTB		*/
#define		 GPIOB_DATA			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOB_DIR			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOB_R2R			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOB_R4R			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOB_R8R			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOB_ODR			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOB_PUR			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOB_PDR			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOB_SLR			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOB_DEN			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOB_LOCK			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOB_CR			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOB_AMSEL		*((u32 *) (GPIOB_AHB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOB_CTL			*((u32 *) (GPIOB_AHB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOB_ADCCTL		*((u32 *) (GPIOB_AHB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOB_DMACTL		*((u32 *) (GPIOB_AHB_BASE_ADDRESS + DMACTL_OFFSET))
		
				/*		AHB Register addresses for PORTC		*/
#define		 GPIOC_DATA			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOC_DIR			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOC_R2R			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOC_R4R			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOC_R8R			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOC_ODR			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOC_PUR			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOC_PDR			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOC_SLR			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOC_DEN			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOC_LOCK			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOC_CR			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOC_AMSEL		*((u32 *) (GPIOC_AHB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOC_CTL			*((u32 *) (GPIOC_AHB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOC_ADCCTL		*((u32 *) (GPIOC_AHB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOC_DMACTL		*((u32 *) (GPIOC_AHB_BASE_ADDRESS + DMACTL_OFFSET))

				/*		AHB Register addresses for PORTD		*/
#define		 GPIOD_DATA			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOD_DIR			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOD_R2R			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOD_R4R			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOD_R8R			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOD_ODR			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOD_PUR			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOD_PDR			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOD_SLR			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOD_DEN			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOD_LOCK			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOD_CR			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOD_AMSEL		*((u32 *) (GPIOD_AHB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOD_CTL			*((u32 *) (GPIOD_AHB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOD_ADCCTL		*((u32 *) (GPIOD_AHB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOD_DMACTL		*((u32 *) (GPIOD_AHB_BASE_ADDRESS + DMACTL_OFFSET))

				/*		AHB Register addresses for PORTE		*/
#define		 GPIOE_DATA			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOE_DIR			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOE_R2R			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOE_R4R			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOE_R8R			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOE_ODR			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOE_PUR			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOE_PDR			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOE_SLR			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOE_DEN			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOE_LOCK			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOE_CR			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOE_AMSEL		*((u32 *) (GPIOE_AHB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOE_CTL			*((u32 *) (GPIOE_AHB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOE_ADCCTL		*((u32 *) (GPIOE_AHB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOE_DMACTL		*((u32 *) (GPIOE_AHB_BASE_ADDRESS + DMACTL_OFFSET))

				/*		AHB Register addresses for PORTF		*/
#define		 GPIOF_DATA			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + DATA_OFFSET))
#define		 GPIOF_DIR			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + DIR_OFFSET))
#define		 GPIOF_R2R			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + R2R_OFFSET))
#define		 GPIOF_R4R			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + R4R_OFFSET))
#define		 GPIOF_R8R			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + R8R_OFFSET))
#define		 GPIOF_ODR			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + ODR_OFFSET))
#define		 GPIOF_PUR			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + PUR_OFFSET))
#define		 GPIOF_PDR			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + PDR_OFFSET))
#define		 GPIOF_SLR			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + SLR_OFFSET))
#define		 GPIOF_DEN			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + DEN_OFFSET))
#define		 GPIOF_LOCK			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + LOCK_OFFSET))
#define		 GPIOF_CR			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + CR_OFFSET))
#define		 GPIOF_AMSEL		*((u32 *) (GPIOF_AHB_BASE_ADDRESS + AMSEL_OFFSET))
#define		 GPIOF_CTL			*((u32 *) (GPIOF_AHB_BASE_ADDRESS + CTL_OFFSET))
#define		 GPIOF_ADCCTL		*((u32 *) (GPIOF_AHB_BASE_ADDRESS + ADCCTL_OFFSET))
#define		 GPIOF_DMACTL		*((u32 *) (GPIOF_AHB_BASE_ADDRESS + DMACTL_OFFSET))

#endif



#endif