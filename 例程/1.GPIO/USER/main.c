#include "stm32f10x.h"
#include "led.h"
#include "key.h"

int main(){
	
	LED_GPIO_Config(LED1);
	LED_GPIO_Config(LED2);
	LED_GPIO_Config(LED3);
	KEY_GPIO_Cofig(KEY1);
	KEY_GPIO_Cofig(KEY2);
	KEY_GPIO_Cofig(KEY3);
	
	
	while(1){
		if(Key_Scan_HIGH(KEY1)){
			LED_State_Config(LED2,TOGGLE);
		
		}else if(Key_Scan_HIGH(KEY3)){
			LED_State_Config(LED1,TOGGLE);
		
		
		}else if(Key_Scan_HIGH(KEY2)){
			LED_State_Config(LED3,TOGGLE);
			
		}
		
	}

}
