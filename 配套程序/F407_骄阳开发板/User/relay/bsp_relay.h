#ifndef __RELAY_H
#define	__RELAY_H

#include "stm32f4xx.h"


#define RELAY1_GPIO_PORT    	GPIOH	              
#define RELAY1_GPIO_CLK() 	    __GPIOH_CLK_ENABLE()		
#define RELAY1_GPIO_PIN		    GPIO_PIN_8	        

#define RELAY2_GPIO_PORT    	GPIOH	              
#define RELAY2_GPIO_CLK() 	    __GPIOH_CLK_ENABLE()		
#define RELAY2_GPIO_PIN		    GPIO_PIN_7

#define RELAY3_GPIO_PORT    	GPIOC		              
#define RELAY3_GPIO_CLK() 	    __GPIOC_CLK_ENABLE()			
#define RELAY3_GPIO_PIN		    GPIO_PIN_12

#define RELAY4_GPIO_PORT    	GPIOD		              
#define RELAY4_GPIO_CLK() 	    __GPIOD_CLK_ENABLE()	
#define RELAY4_GPIO_PIN		    GPIO_PIN_2


/* 直接操作寄存器的方法控制IO */
#define	 Hi(p,i)		 {p->BSRR=i;}	 //输出为高电平		
#define  Lo(p,i)		 {p->BSRR=i<<16;}	 //输出低电平



/* 定义控制IO的宏 */
#define RELAY1_ON		        Hi(RELAY1_GPIO_PORT,RELAY1_GPIO_PIN)
#define RELAY1_OFF			    Lo(RELAY1_GPIO_PORT,RELAY1_GPIO_PIN)


#define RELAY2_ON		        Hi(RELAY2_GPIO_PORT,RELAY2_GPIO_PIN)
#define RELAY2_OFF			    Lo(RELAY2_GPIO_PORT,RELAY2_GPIO_PIN)


#define RELAY3_ON		        Hi(RELAY3_GPIO_PORT,RELAY3_GPIO_PIN)
#define RELAY3_OFF			    Lo(RELAY3_GPIO_PORT,RELAY3_GPIO_PIN)

#define RELAY4_ON		        Hi(RELAY4_GPIO_PORT,RELAY4_GPIO_PIN)
#define RELAY4_OFF			    Lo(RELAY4_GPIO_PORT,RELAY4_GPIO_PIN)

void RELAY_GPIO_Config(void);

#endif /* __RELAY_H */
