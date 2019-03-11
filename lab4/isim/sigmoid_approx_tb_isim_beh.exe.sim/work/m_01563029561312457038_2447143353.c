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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Desktop/CS-M152-A/lab4/fp_add.v";



static void Always_117_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memcpy(t6, t5, 8);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 24);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    *((unsigned int *)t6) = t9;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t5);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB6;

LAB7:
LAB8:    t18 = (t0 + 2728);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t11 = (t9 & t8);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(129, ng0);

LAB13:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 25, t3, 24, t4, 24);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 25);

LAB11:    goto LAB2;

LAB6:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t6) = (t16 | t17);
    goto LAB8;

LAB9:    xsi_set_current_line(125, ng0);

LAB12:    xsi_set_current_line(126, ng0);
    t10 = (t0 + 1048U);
    t18 = *((char **)t10);
    t10 = (t0 + 1208U);
    t19 = *((char **)t10);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 25, t18, 24, t19, 24);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 25);
    goto LAB11;

}


extern void work_m_01563029561312457038_2447143353_init()
{
	static char *pe[] = {(void *)Always_117_0};
	xsi_register_didat("work_m_01563029561312457038_2447143353", "isim/sigmoid_approx_tb_isim_beh.exe.sim/work/m_01563029561312457038_2447143353.didat");
	xsi_register_executes(pe);
}
