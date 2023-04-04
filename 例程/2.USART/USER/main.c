#include "stm32f10x.h"
#include "usart.h"

int main(){
	USART_Config(USART_1,USART_MODE_COMMON,115200);
	
	printf("hello\n");
	while(1){
		
		
	}

}
