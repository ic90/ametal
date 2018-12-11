/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief AMKS16RFID ģ�幤��
 *
 * - ʵ������:
 *   ģ������:LED0��1���Ƶ����˸; demo�������:���demo��ں����ļ�����
 *
 * \internal
 * \par Modification history
 * - 1.00 18-12-04  htf, first implementation.
 * \endinternal
 */ 

/**
 * \brief AMetal Ӧ�ó������
 */
#include "ametal.h"
#include "am_board.h"
#include "am_vdebug.h"
#include "am_delay.h"
#include "am_led.h"

int am_main (void)
{
    AM_DBG_INFO("Start up successful!\r\n");

    while (1) {

        am_led_toggle(LED0);

        am_mdelay(1000);
    }
}

/* end of file */