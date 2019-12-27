#ifndef __RELAY_H
#define	__RELAY_H


#include "stm32f10x.h"



#define RELAY1_GPIO_PORT    	GPIOB			              
#define RELAY1_GPIO_CLK 	    RCC_APB2Periph_GPIOB		
#define RELAY1_GPIO_PIN		    GPIO_Pin_12	        

#define RELAY2_GPIO_PORT    	GPIOB			              
#define RELAY2_GPIO_CLK 	    RCC_APB2Periph_GPIOB		
#define RELAY2_GPIO_PIN		    GPIO_Pin_13	

#define RELAY3_GPIO_PORT    	GPIOB			              
#define RELAY3_GPIO_CLK 	    RCC_APB2Periph_GPIOB		
#define RELAY3_GPIO_PIN		    GPIO_Pin_14

#define RELAY4_GPIO_PORT    	GPIOB			              
#define RELAY4_GPIO_CLK 	    RCC_APB2Periph_GPIOB		
#define RELAY4_GPIO_PIN		    GPIO_Pin_15	

/* 直接操作寄存器的方法控制IO */
#define	digitalHi(p,i)		 {p->BSRR=i;}	 //输出为高电平		
#define digitalLo(p,i)		 {p->BRR=i;}	 //输出低电平
#define digitalToggle(p,i) {p->ODR ^=i;} //输出反转状态


/* 定义控制IO的宏 */
#define RELAY1_TOGGLE		 digitalToggle(RELAY1_GPIO_PORT,RELAY1_GPIO_PIN)
#define RELAY1_ON		   digitalHi(RELAY1_GPIO_PORT,RELAY1_GPIO_PIN)
#define RELAY1_OFF			   digitalLo(RELAY1_GPIO_PORT,RELAY1_GPIO_PIN)

#define RELAY2_TOGGLE		 digitalToggle(RELAY2_GPIO_PORT,RELAY2_GPIO_PIN)
#define RELAY2_ON		   digitalHi(RELAY2_GPIO_PORT,RELAY2_GPIO_PIN)
#define RELAY2_OFF			   digitalLo(RELAY2_GPIO_PORT,RELAY2_GPIO_PIN)

#define RELAY3_TOGGLE		 digitalToggle(RELAY3_GPIO_PORT,RELAY3_GPIO_PIN)
#define RELAY3_ON		   digitalHi(RELAY3_GPIO_PORT,RELAY3_GPIO_PIN)
#define RELAY3_OFF			   digitalLo(RELAY3_GPIO_PORT,RELAY3_GPIO_PIN)

#define RELAY4_TOGGLE		 digitalToggle(RELAY4_GPIO_PORT,RELAY4_GPIO_PIN)
#define RELAY4_ON		   digitalHi(RELAY4_GPIO_PORT,RELAY4_GPIO_PIN)
#define RELAY4_OFF			   digitalLo(RELAY4_GPIO_PORT,RELAY4_GPIO_PIN)

void RELAY_GPIO_Config(void);

#endif /* __RELAY_H */
