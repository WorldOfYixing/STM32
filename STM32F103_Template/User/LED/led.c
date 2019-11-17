#include "led.h"

/**************************************************************************************
 * 描  述 : LED闪烁
 * 入  参 : 无
 * 返回值 : 无
 **************************************************************************************/
void LED_Blink(void)
{
	GPIO_ResetBits(GPIOC, GPIO_Pin_13);  //将PC13引脚置低,点亮指示灯
	Delay_ms(500);
	GPIO_SetBits(GPIOC, GPIO_Pin_13);    //将PC13引脚置高,熄灭指示灯
	Delay_ms(500);
}


