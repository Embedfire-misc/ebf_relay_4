/**
  ******************************************************************
  * @file    bsp_relay.c
  * @author  fire
  * @version V1.0
  * @date    2019-xx-xx
  * @brief   继电器应用函数接口
  ******************************************************************
  * @attention
  *
  * 实验平台:野火 STM32F407 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************
  */  
  
#include "./relay/bsp_relay.h"   


void RELAY_GPIO_Config(void)
{		

		/*定义一个GPIO_InitTypeDef类型的结构体*/
	   GPIO_InitTypeDef  GPIO_InitStruct;

     RELAY1_GPIO_CLK();
	   RELAY2_GPIO_CLK(); 
	   RELAY3_GPIO_CLK();
	   RELAY4_GPIO_CLK(); 
							
			/*选择要控制的GPIO引脚*/															   
		GPIO_InitStruct.Pin = RELAY1_GPIO_PIN;	

		/*设置引脚的输出类型为推挽输出*/
		GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;  

		/*设置引脚为上拉模式*/
		GPIO_InitStruct.Pull  = GPIO_PULLUP;

		/*设置引脚速率为高速 */   
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH; 

		/*调用库函数，使用上面配置的GPIO_InitStructure初始化GPIO*/
		HAL_GPIO_Init(RELAY1_GPIO_PORT, &GPIO_InitStruct);	

		/*选择要控制的GPIO引脚*/															   
		GPIO_InitStruct.Pin = RELAY2_GPIO_PIN;	
		HAL_GPIO_Init(RELAY2_GPIO_PORT, &GPIO_InitStruct);	

		/*选择要控制的GPIO引脚*/															   
		GPIO_InitStruct.Pin = RELAY3_GPIO_PIN;	
		HAL_GPIO_Init(RELAY3_GPIO_PORT, &GPIO_InitStruct);	
		
		/*选择要控制的GPIO引脚*/															   
		GPIO_InitStruct.Pin = RELAY4_GPIO_PIN;	
		HAL_GPIO_Init(RELAY4_GPIO_PORT, &GPIO_InitStruct);	
	
		
		HAL_GPIO_WritePin(RELAY1_GPIO_PORT, RELAY1_GPIO_PIN,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(RELAY2_GPIO_PORT, RELAY2_GPIO_PIN,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(RELAY3_GPIO_PORT, RELAY3_GPIO_PIN,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(RELAY4_GPIO_PORT, RELAY4_GPIO_PIN,GPIO_PIN_RESET);
}
/*********************************************END OF FILE**********************/
