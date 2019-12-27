
  
#include "./relay/bsp_relay.h"   


void RELAY_GPIO_Config(void)
{		

		GPIO_InitTypeDef GPIO_InitStructure;


		RCC_AHB1PeriphClockCmd ( RELAY1_GPIO_CLK|
	                           RELAY2_GPIO_CLK|
	                           RELAY3_GPIO_CLK|
	                           RELAY4_GPIO_CLK, ENABLE); 
															   
		GPIO_InitStructure.GPIO_Pin = RELAY1_GPIO_PIN;	
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_DOWN;	
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;

		GPIO_Init(RELAY1_GPIO_PORT, &GPIO_InitStructure);	    
														   
		GPIO_InitStructure.GPIO_Pin = RELAY2_GPIO_PIN;	
    GPIO_Init(RELAY2_GPIO_PORT, &GPIO_InitStructure);	
    
		GPIO_InitStructure.GPIO_Pin = RELAY3_GPIO_PIN;	
    GPIO_Init(RELAY3_GPIO_PORT, &GPIO_InitStructure);	
		
		GPIO_InitStructure.GPIO_Pin = RELAY4_GPIO_PIN;	
    GPIO_Init(RELAY4_GPIO_PORT, &GPIO_InitStructure);	
		
		GPIO_ResetBits(RELAY1_GPIO_PORT, RELAY1_GPIO_PIN);
		GPIO_ResetBits(RELAY2_GPIO_PORT, RELAY2_GPIO_PIN);
		GPIO_ResetBits(RELAY3_GPIO_PORT, RELAY3_GPIO_PIN);
		GPIO_ResetBits(RELAY4_GPIO_PORT, RELAY4_GPIO_PIN);
}
/*********************************************END OF FILE**********************/
