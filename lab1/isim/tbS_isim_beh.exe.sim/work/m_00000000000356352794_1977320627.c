/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/152/CS-M152-A/lab1/FPCVT.v";
static int ng1[] = {11, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {2048U, 0U};
static unsigned int ng4[] = {4095U, 0U};
static unsigned int ng5[] = {1U, 0U};



static void Always_161_0(char *t0)
{
    char t6[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(162, ng0);

LAB5:    xsi_set_current_line(163, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1448);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = (t14 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t14);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t17);
    t13 = (t11 ^ t12);
    t18 = (t10 | t13);
    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t17);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB9;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    t25 = (t15 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t15);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(167, ng0);

LAB13:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t18 = (t10 | t13);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB17;

LAB14:    if (t21 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t14 = (t6 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    *((unsigned int *)t6) = t9;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB22;

LAB21:    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 4095U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 4095U);
    t5 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 12, t6, 12, t5, 12);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t15, 0, 0, 12);

LAB20:
LAB12:    goto LAB2;

LAB8:    t24 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(165, ng0);
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    t31 = (t0 + 1608);
    xsi_vlogvar_assign_value(t31, t32, 0, 0, 12);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(169, ng0);
    t16 = ((char*)((ng4)));
    t17 = (t0 + 1608);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 12);
    goto LAB20;

LAB22:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t6) = (t10 | t11);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t2) = (t12 | t13);
    goto LAB21;

}


extern void work_m_00000000000356352794_1977320627_init()
{
	static char *pe[] = {(void *)Always_161_0};
	xsi_register_didat("work_m_00000000000356352794_1977320627", "isim/tbS_isim_beh.exe.sim/work/m_00000000000356352794_1977320627.didat");
	xsi_register_executes(pe);
}
