/****************************************Copyright (c)****************************************************
**                                ������6lowpan���߿���ƽ̨
**                                  һ��Ϊ��ԴӦ�ö���                         
**
**
**--------------File Info---------------------------------------------------------------------------------
** File Name:               bsm.h
** Last modified Date:      2018-04-09
** Last Version:            v1.0
** Description:             BSM �����Լ�������shi
** 
**--------------------------------------------------------------------------------------------------------
** Created By:              ��УԴ
** Created date:            2018-04-09
** Version:                 v1.0
** Descriptions:            The original version ��ʼ�汾
**
**--------------------------------------------------------------------------------------------------------
** Modified by:             
** Modified date:           
** Version:                 
** Description:             
**
*********************************************************************************************************/
#ifndef __BSM_H__ 
#define __BSM_H__ 

#include "includes.h"
#include "moteid.h"

/*********************************************************************************************************
  �豸������ض���
*********************************************************************************************************/
//�̶���ַ��
//TODO������ʵ��
#define MAX_ROUTE_COUNT 50
#define FALSE           0
#define TRUE            1

typedef struct node_info{
   uint16_t source_addr;
   uint16_t receive_packet;
   int16_t delay;
   int32_t delay_sum;
}node_info;

typedef struct route_info{
  uint8_t AliveNodesCount;
  node_info node_info[MAX_ROUTE_COUNT]; 
}route_info;

void pacet_info_statistics_init();
void pacet_info_statistics(uint16_t addr,int16_t delay);
uint8_t CheckIfExist(uint16_t addr);
void addAliveNode(uint16_t addr);
void addAliveNodeInfo(uint16_t pos,uint16_t addr,int16_t delay);
void report_node_info();
#endif
/*********************************************************************************************************
  END FILE 
*********************************************************************************************************/