/*****************************************/
/* Author  :  Mina Tarek                 */
/* Version :  V01                        */
/* Date    : 22 August 2022              */
/*****************************************/
#ifndef STK_INTERFACE_H
#define STK_INTERFACE_H


/* Apply Clock choice from configuration file 
   Disable SysTick interrupt 
   Disable Systick                          */
void STK_voidInit(void);
void STK_voidSetBusyWait( u32 Copy_u32Ticks );
void STK_voidSetIntervalSingle  ( u32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void STK_voidSetIntervalPeriodic( u32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void STK_voidStopInterval(void);
u32  STK_u32GetElapsedTime(void);
u32  STK_u32GetRemainingTime(void);

#endif