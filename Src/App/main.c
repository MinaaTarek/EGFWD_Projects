#include	"BIT_MATH.h"
#include	"STD_TYPES.h"

#include	"RCC_interface.h"
#include	"STK_interface.h"
#include	"NVIC_interface.h"
#include	"GPIO_interface.h"

int main(){
	RCC_voidClockTypeInit();
	RCC_voidClockEnable(RCC_GPIO,RCC_GPIOA);
	STK_voidInit();
	NVIC_voidInit();
	GPIO_voidSetPinDirection(GPIOA,PIN0,OUTPUT_2mA_OD);
	while(1){
	GPIO_voidSetPinValue(GPIOA,PIN0,GPIO_HIGH);
	STK_voidSetBusyWait(1000000);
	GPIO_voidSetPinValue(GPIOA,PIN0,GPIO_LOW);
	STK_voidSetBusyWait(1000000);
	}
}