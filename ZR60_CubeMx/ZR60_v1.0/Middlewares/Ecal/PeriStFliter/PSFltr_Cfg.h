/******************************************************
文件名：	PSFltr_Cfg

描述：		 

Data			  Vasion			author
2018/6/28		   V1.0			    liujian      
*******************************************************/
#ifndef		PSFLTR_CFG_H
#define		PSFLTR_CFG_H
/*******************************************************
description： include the header file
*******************************************************/
#include "Include.h"


/*******************************************************
description： macro definitions
*******************************************************/
/**********宏开关定义*********/


/**********宏常量定义*********/
#define  PSFLTR_FLTRTIME   10U/*外设开关状态滤波时间门限*/


/***********宏函数***********/

/*******************************************************
description： struct definitions
*******************************************************/

/*******************************************************
description： typedef definitions
*******************************************************/
/*****struct definitions*****/
typedef struct
{
	uint8 e_u_PSt;/*外设开/关状态*/
	uint8 e_u_OnFltrCnt;/*开/关开启状态滤波计时器*/
	uint8 e_u_OffFltrCnt;/*开/关关闭状态滤波计时器*/
}PSFltrStruct;


/******enum definitions******/
typedef enum
{
	DoorLockSt,	  /*门锁状态*/
	Key_Alarm,	  /*消防报警*/
	PSFLTR_NUM	  /*外设数量*/
}PSFltrEnum;

/******union definitions*****/

/*******************************************************
description： variable External declaration
*******************************************************/
extern const uint8  CaPSFltr_u_Active[PSFLTR_NUM];


/*******************************************************
description： function External declaration
*******************************************************/
extern uint8 GetPSFltrCfg_u_RTSt(uint8 LePSFltr_u_Index);
    
#endif

