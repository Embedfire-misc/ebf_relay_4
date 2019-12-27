#ifndef __SYSTICK_H
#define __SYSTICK_H

#include "stm32f4xx.h"

void SysTick_Init(void);
void Delay_us(__IO u32 nTime);
#define Delay_ms(x) Delay_us(100*x)	 //µ¥Î»ms

void SysTick_Delay_Ms( __IO uint32_t ms);
void SysTick_Delay_Us( __IO uint32_t us);

#endif /* __SYSTICK_H */
