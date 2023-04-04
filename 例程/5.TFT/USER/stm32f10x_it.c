#include "stm32f10x_it.h"
#include "lcd_init.h"

void SysTick_Handler(void){				   

}

void EXTI0_IRQHandler(void)
{
	if(RESET != EXTI_GetITStatus(EXTI_Line0))
	{
		LCD_Off();
	}
	EXTI_ClearITPendingBit(EXTI_Line0);
}

