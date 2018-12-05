/***********************************************************
  * @file    bsp_led.c
  * @author  liujian
  * @version V1.0
  * @date    2018-xx-xx
  * @brief   led应用函数接口
***********************************************************/
  
#include "./led/bsp_led.h"   
#include "stm32f4xx_gpio.h"
 /**
  * @brief  初始化控制LED的IO
  * @param  无
  * @retval 无
  */
void LED_GPIO_Config(void)
{		
	/*定义一个GPIO_InitTypeDef类型的结构体*/
	GPIO_InitTypeDef GPIO_InitStructure;

	/*开启LED相关的GPIO外设时钟*/
	RCC_AHB1PeriphClockCmd ( LED1_GPIO_CLK | LED2_GPIO_CLK | LED3_GPIO_CLK | OPEN_DOOR_GPIO_CLK, ENABLE); 

	/*选择要控制的GPIO引脚*/															   
	GPIO_InitStructure.GPIO_Pin = LED1_PIN;	

	/*设置引脚模式为输出模式*/
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;   

	/*设置引脚的输出类型为推挽输出*/
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;

	/*设置引脚为上拉模式*/
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;

	/*设置引脚速率为2MHz */   
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz; 

	/*调用库函数，使用上面配置的GPIO_InitStructure初始化GPIO*/
	GPIO_Init(LED1_GPIO_PORT, &GPIO_InitStructure);	

	/*选择要控制的GPIO引脚*/															   
	GPIO_InitStructure.GPIO_Pin = LED2_PIN;	
	GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStructure);	

	/*选择要控制的GPIO引脚*/															   
	GPIO_InitStructure.GPIO_Pin = LED3_PIN;	
	GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStructure);	
	
	/*选择要控制的read_card en引脚*/															   
	GPIO_InitStructure.GPIO_Pin = READ_CARD_EN_PIN;	
	GPIO_Init(READ_CARD_EN_GPIO_PORT, &GPIO_InitStructure);	
	
	/*选择要控制的开门引脚*/													   
	GPIO_InitStructure.GPIO_Pin = OPEN_DOOR_PIN;	
	GPIO_Init(OPEN_DOOR_GPIO_PORT, &GPIO_InitStructure);	

	/*关闭RGB灯*/
	LED_RGBOFF;
	/*打开读卡器电源*/
	digitalHi(READ_CARD_EN_GPIO_PORT,READ_CARD_EN_PIN)
}
/*********************************************END OF FILE**********************/
