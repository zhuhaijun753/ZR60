/******************************************************
文件名：	crc32.h

描述�	

Data			  Vasion			author
2018/7/13		  V1.0			    liujian
*******************************************************/
#ifndef		_CRC32_H
#define		_CRC32_H
/*******************************************************
description�include the header file
*******************************************************/
#include "Include.h"


/*******************************************************
description�macro definitions
*******************************************************/
/**********宏开关定�********/

/**********宏常量定�********/



/***********宏函�**********/

/*******************************************************
description�struct definitions
*******************************************************/

/*******************************************************
description�typedef definitions
*******************************************************/
/*****struct definitions*****/

/******enum definitions******/

/******union definitions*****/

/*******************************************************
description�variable External declaration
*******************************************************/

/*******************************************************
description�function External declaration
*******************************************************/
extern uint32 crc32(uint32 Le_dw_crc,uint8* Le_u_Dt, uint32 Le_dw_Lng);

#endif