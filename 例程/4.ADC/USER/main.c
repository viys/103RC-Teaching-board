#include "stm32f10x.h"
#include "usart.h"
#include "adc.h"
#include "systick.h"
#include "adc_dma.h"

int main(){
	USART_Config(USART_1,USART_MODE_COMMON,115200);
	
	
	
	printf("hello\n");
	ADCx_Init();
	while(1){
		ADC_ConvertedValue = ADC_GetConversionValue(ADCx);
		SysTick_Delay(200);
		printf("ADC:%d\r\n",ADC_ConvertedValue);
		
	}

}
