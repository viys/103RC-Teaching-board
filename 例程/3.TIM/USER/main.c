#include "stm32f10x.h"
#include "led.h"
#include "remote.h"
#include "systick.h"

int main(){

	Remote_Init(); 
	
	LED_GPIO_Config(LED1);
	LED_GPIO_Config(LED2);
	LED_GPIO_Config(LED3);
	
	while(1){
	
		
	}
}
