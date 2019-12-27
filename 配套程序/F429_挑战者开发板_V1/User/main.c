/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2015-xx-xx
  * @brief   使用SysTick进行精确延时
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火  STM32 F429 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
#include "stm32f4xx.h"
#include "./relay/bsp_relay.h"
#include "./systick/bsp_SysTick.h"


/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{
	RELAY_GPIO_Config();

	for(;;)
	{
		RELAY1_ON; 
		SysTick_Delay_Ms( 1000 );
		RELAY1_OFF;
	  
		RELAY2_ON; 
		SysTick_Delay_Ms( 1000 );
		RELAY2_OFF;
		
		RELAY3_ON; 
		SysTick_Delay_Ms( 1000 );
		RELAY3_OFF;
	  
		RELAY4_ON; 
		SysTick_Delay_Ms( 1000 );
		RELAY4_OFF;
	} 
}



/*********************************************END OF FILE**********************/

