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
static const char *ng0 = "/home/ise/Desktop/CS-M152-A/lab4/int_to_float.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {1065353216U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {1073741824U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {1077936128U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {1082130432U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {1084227584U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {1086324736U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {1088421888U, 0U};
static unsigned int ng16[] = {8U, 0U};
static unsigned int ng17[] = {1090519040U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {1091567616U, 0U};



static void Always_28_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3088);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB29;

LAB9:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB29;

LAB11:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB29;

LAB13:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB29;

LAB15:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB29;

LAB17:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB29;

}

static void Cont_45_1(char *t0)
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

LAB0:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3104);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_02287399127455127054_1201782191_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Cont_45_1};
	xsi_register_didat("work_m_02287399127455127054_1201782191", "isim/nn_tb_isim_beh.exe.sim/work/m_02287399127455127054_1201782191.didat");
	xsi_register_executes(pe);
}
