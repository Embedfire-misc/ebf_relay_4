
#include "stm32f10x.h"
#include "bsp_SysTick.h"
#include "bsp_relay.h"


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
