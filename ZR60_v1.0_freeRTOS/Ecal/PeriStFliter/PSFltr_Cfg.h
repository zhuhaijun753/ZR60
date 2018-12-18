/******************************************************
�ļ�����	PSFltr_Cfg

������		 

Data			  Vasion			author
2018/6/28		   V1.0			    liujian      
*******************************************************/
#ifndef		PSFLTR_CFG_H
#define		PSFLTR_CFG_H
/*******************************************************
description�� include the header file
*******************************************************/
#include "Include.h"


/*******************************************************
description�� macro definitions
*******************************************************/
/**********�꿪�ض���*********/


/**********�곣������*********/
#define  PSFLTR_FLTRTIME   10U/*���迪��״̬�˲�ʱ������*/


/***********�꺯��***********/

/*******************************************************
description�� struct definitions
*******************************************************/

/*******************************************************
description�� typedef definitions
*******************************************************/
/*****struct definitions*****/
typedef struct
{
	uint8 e_u_PSt;/*���迪/��״̬*/
	uint8 e_u_OnFltrCnt;/*��/�ؿ���״̬�˲���ʱ��*/
	uint8 e_u_OffFltrCnt;/*��/�عر�״̬�˲���ʱ��*/
}PSFltrStruct;


/******enum definitions******/
typedef enum
{
	DoorLockSt,	  /*����״̬*/
	Key_Alarm,	  /*��������*/
	PSFLTR_NUM	  /*��������*/
}PSFltrEnum;

/******union definitions*****/

/*******************************************************
description�� variable External declaration
*******************************************************/
extern const uint8  CaPSFltr_u_Active[PSFLTR_NUM];


/*******************************************************
description�� function External declaration
*******************************************************/
extern uint8 GetPSFltrCfg_u_RTSt(uint8 LePSFltr_u_Index);
    
#endif
