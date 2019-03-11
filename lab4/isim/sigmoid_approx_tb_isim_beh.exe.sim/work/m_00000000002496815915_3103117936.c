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
static const char *ng0 = "C:/Users/152/CS-M152-A/lab4/cheat_fp_mult.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};



static void Always_33_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4144);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 8388607U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 8388607U);
    memset(t6, 0, 8);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t7);
    t19 = (t18 & t17);
    t20 = (t19 & 8388607U);
    if (t20 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t15) == 0)
        goto LAB6;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 8388607U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 8388607U);
    memset(t6, 0, 8);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t7);
    t19 = (t18 & t17);
    t20 = (t19 & 8388607U);
    if (t20 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t15) == 0)
        goto LAB15;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;

LAB18:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2248);
    t31 = (t0 + 2248);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t30, t33, 2, t34, 32, 1);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    if (t37 == 1)
        goto LAB13;

LAB14:    goto LAB12;

LAB13:    xsi_vlogvar_assign_value(t29, t28, 0, *((unsigned int *)t30), 1);
    goto LAB14;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(40, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2408);
    t31 = (t0 + 2408);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t30, t33, 2, t34, 32, 1);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    if (t37 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB22:    xsi_vlogvar_assign_value(t29, t28, 0, *((unsigned int *)t30), 1);
    goto LAB23;

}

static void Cont_43_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4160);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_44_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4176);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002496815915_3103117936_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Cont_43_1,(void *)Cont_44_2};
	xsi_register_didat("work_m_00000000002496815915_3103117936", "isim/sigmoid_approx_tb_isim_beh.exe.sim/work/m_00000000002496815915_3103117936.didat");
	xsi_register_executes(pe);
}
