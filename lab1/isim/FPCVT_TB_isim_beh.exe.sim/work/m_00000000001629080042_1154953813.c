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
static const char *ng0 = "E:/lab1/FPCVT_TB.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {170U, 0U};
static unsigned int ng4[] = {2628U, 0U};

static void NetReassign_45_1(char *);
static void NetReassign_46_2(char *);
static void NetReassign_47_3(char *);
static void NetReassign_53_4(char *);
static void NetReassign_56_5(char *);


static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1448);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 5764);
    *((int *)t3) = 1;
    NetReassign_45_1(t0);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1608);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 5768);
    *((int *)t3) = 1;
    NetReassign_46_2(t0);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1768);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 5772);
    *((int *)t3) = 1;
    NetReassign_47_3(t0);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1448);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 5776);
    *((int *)t3) = 1;
    NetReassign_53_4(t0);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1448);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 5780);
    *((int *)t3) = 1;
    NetReassign_56_5(t0);
    goto LAB1;

}

static void NetReassign_45_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t3 = 0;
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5764);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 1448);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 12, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_46_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t3 = 0;
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5768);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 1608);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 3, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_47_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t3 = 0;
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5772);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 4, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_53_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t3 = 0;
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5776);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 1448);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 12, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_56_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t3 = 0;
    t2 = ((char*)((ng4)));
    t4 = (t0 + 5780);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 1448);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 12, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}


extern void work_m_00000000001629080042_1154953813_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)NetReassign_45_1,(void *)NetReassign_46_2,(void *)NetReassign_47_3,(void *)NetReassign_53_4,(void *)NetReassign_56_5};
	xsi_register_didat("work_m_00000000001629080042_1154953813", "isim/FPCVT_TB_isim_beh.exe.sim/work/m_00000000001629080042_1154953813.didat");
	xsi_register_executes(pe);
}
