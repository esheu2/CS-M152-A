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
static const char *ng0 = "C:/Users/152/CS-M152-A/lab2_new/tb.v";
static const char *ng1 = "%d ... Running instruction %08b";
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static const char *ng8 = "fib.code";
static const char *ng9 = "%d ... instruction %08b executed";
static const char *ng10 = "%d ... led output changed to %08b";



static int sp_tskRunInst(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    *((int *)t5) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t6 = (t5 + 4);
    *((int *)t6) = 0;
    t7 = (t1 + 4888);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 3, t10, (char)118, t5, 32, (char)118, t9, 8);
    xsi_set_current_line(85, ng0);
    t4 = (t1 + 4888);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1500000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(86, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t1 + 4248);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 3000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(87, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 4248);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB4;

}

static int sp_tskRunPUSH(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t7 = (t1 + 5208);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 15U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 15U);
    t19 = (t1 + 5048);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t30 = ((char*)((ng4)));
    xsi_vlogtype_concat(t5, 8, 8, 3U, t30, 2, t18, 2, t6, 4);
    t31 = (t1 + 5368);
    xsi_vlogvar_assign_value(t31, t5, 0, 0, 8);
    xsi_set_current_line(97, ng0);
    t4 = (t1 + 5368);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 848);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t30 = (t1 + 4888);
    xsi_vlogvar_assign_value(t30, t8, 0, 0, 8);

LAB8:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = ((int  (*)(char *, char *))t38)(t1, t32);
    if (t39 == -1)
        goto LAB9;

LAB10:    if (t39 != 0)
        goto LAB11;

LAB6:    t32 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t32);

LAB7:    t40 = (t2 + 64U);
    t41 = *((char **)t40);
    t40 = (t1 + 848);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_delete_subprogram_invocation(t40, t41, t1, t43, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t31 = (t2 + 48U);
    *((char **)t31) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunSEND(char *t1, char *t2)
{
    char t5[8];
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(105, ng0);
    t6 = ((char*)((ng4)));
    t8 = (t1 + 5528);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 3U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 3U);
    t19 = ((char*)((ng5)));
    xsi_vlogtype_concat(t5, 8, 8, 3U, t19, 2, t7, 2, t6, 4);
    t20 = (t1 + 5688);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 8);
    xsi_set_current_line(106, ng0);
    t4 = (t1 + 5688);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB6);
    t19 = (t2 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 848);
    t22 = xsi_create_subprogram_invocation(t20, 0, t1, t21, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t21, t22);
    t23 = (t1 + 4888);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 8);

LAB8:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t1, t25);
    if (t32 == -1)
        goto LAB9;

LAB10:    if (t32 != 0)
        goto LAB11;

LAB6:    t25 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t25);

LAB7:    t33 = (t2 + 64U);
    t34 = *((char **)t33);
    t33 = (t1 + 848);
    t35 = (t2 + 56U);
    t36 = *((char **)t35);
    xsi_delete_subprogram_invocation(t33, t34, t1, t36, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t24 = (t2 + 48U);
    *((char **)t24) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunADD(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    char t30[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(115, ng0);

LAB5:    xsi_set_current_line(116, ng0);
    t7 = (t1 + 6168);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    t19 = (t1 + 6008);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t31 = (t1 + 5848);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 3U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 3U);
    t42 = ((char*)((ng6)));
    xsi_vlogtype_concat(t5, 8, 8, 4U, t42, 2, t30, 2, t18, 2, t6, 2);
    t43 = (t1 + 6328);
    xsi_vlogvar_assign_value(t43, t5, 0, 0, 8);
    xsi_set_current_line(117, ng0);
    t4 = (t1 + 6328);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 848);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t31 = (t1 + 4888);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);

LAB8:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t42 = (t35 + 272U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t46 = ((int  (*)(char *, char *))t45)(t1, t33);
    if (t46 == -1)
        goto LAB9;

LAB10:    if (t46 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t33);

LAB7:    t47 = (t2 + 64U);
    t48 = *((char **)t47);
    t47 = (t1 + 848);
    t49 = (t2 + 56U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t47, t48, t1, t50, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 48U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunMULT(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    char t30[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(126, ng0);

LAB5:    xsi_set_current_line(127, ng0);
    t7 = (t1 + 6808);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    t19 = (t1 + 6648);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t31 = (t1 + 6488);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 3U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 3U);
    t42 = ((char*)((ng7)));
    xsi_vlogtype_concat(t5, 8, 8, 4U, t42, 2, t30, 2, t18, 2, t6, 2);
    t43 = (t1 + 6968);
    xsi_vlogvar_assign_value(t43, t5, 0, 0, 8);
    xsi_set_current_line(128, ng0);
    t4 = (t1 + 6968);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 848);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t31 = (t1 + 4888);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);

LAB8:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t42 = (t35 + 272U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t46 = ((int  (*)(char *, char *))t45)(t1, t33);
    if (t46 == -1)
        goto LAB9;

LAB10:    if (t46 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t33);

LAB7:    t47 = (t2 + 64U);
    t48 = *((char **)t47);
    t47 = (t1 + 848);
    t49 = (t2 + 56U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t47, t48, t1, t50, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 48U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static void Initial_21_0(char *t0)
{
    char t5[8];
    char t22[8];
    char t32[8];
    char t46[8];
    char t56[8];
    char t68[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    int t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;

LAB0:    t1 = (t0 + 7888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);

LAB4:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 7696);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 7696);
    xsi_process_wait(t2, 1500000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4728);
    xsi_vlogfile_readmemb(ng8, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 4728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 7696);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB8:    xsi_set_current_line(35, ng0);

LAB10:    xsi_set_current_line(36, ng0);
    t19 = (t0 + 4728);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 4728);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 4728);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 4568);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_get_array_select_value(t22, 8, t21, t25, t28, 2, 1, t31, 32, 1);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t34 = (t22 + 4);
    t35 = *((unsigned int *)t22);
    t36 = (t35 >> 6);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 6);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 & 3U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 3U);

LAB11:    t41 = ((char*)((ng4)));
    t42 = xsi_vlog_unsigned_case_compare(t32, 2, t41, 2);
    if (t42 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t42 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t42 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t42 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t42 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng5)));
    t42 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t42 == 1)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t7 = (t0 + 4568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    goto LAB7;

LAB12:    xsi_set_current_line(37, ng0);
    t43 = (t0 + 4728);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t47 = (t0 + 4728);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t0 + 4728);
    t51 = (t50 + 64U);
    t52 = *((char **)t51);
    t53 = (t0 + 4568);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    xsi_vlog_generic_get_array_select_value(t46, 8, t45, t49, t52, 2, 1, t55, 32, 1);
    memset(t56, 0, 8);
    t57 = (t56 + 4);
    t58 = (t46 + 4);
    t59 = *((unsigned int *)t46);
    t60 = (t59 >> 4);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t58);
    t62 = (t61 >> 4);
    *((unsigned int *)t57) = t62;
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t63 & 3U);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 & 3U);
    t65 = (t0 + 4728);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t69 = (t0 + 4728);
    t70 = (t69 + 72U);
    t71 = *((char **)t70);
    t72 = (t0 + 4728);
    t73 = (t72 + 64U);
    t74 = *((char **)t73);
    t75 = (t0 + 4568);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    xsi_vlog_generic_get_array_select_value(t68, 8, t67, t71, t74, 2, 1, t77, 32, 1);
    memset(t78, 0, 8);
    t79 = (t78 + 4);
    t80 = (t68 + 4);
    t81 = *((unsigned int *)t68);
    t82 = (t81 >> 0);
    *((unsigned int *)t78) = t82;
    t83 = *((unsigned int *)t80);
    t84 = (t83 >> 0);
    *((unsigned int *)t79) = t84;
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t85 & 15U);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t86 & 15U);
    t87 = (t0 + 7696);
    t88 = (t0 + 1280);
    t89 = xsi_create_subprogram_invocation(t87, 0, t0, t88, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t88, t89);
    t90 = (t0 + 5048);
    xsi_vlogvar_assign_value(t90, t56, 0, 0, 2);
    t91 = (t0 + 5208);
    xsi_vlogvar_assign_value(t91, t78, 0, 0, 4);

LAB23:    t92 = (t0 + 7792);
    t93 = *((char **)t92);
    t94 = (t93 + 80U);
    t95 = *((char **)t94);
    t96 = (t95 + 272U);
    t97 = *((char **)t96);
    t98 = (t97 + 0U);
    t99 = *((char **)t98);
    t100 = ((int  (*)(char *, char *))t99)(t0, t93);

LAB25:    if (t100 != 0)
        goto LAB26;

LAB21:    t93 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t93);

LAB22:    t101 = (t0 + 7792);
    t102 = *((char **)t101);
    t101 = (t0 + 1280);
    t103 = (t0 + 7696);
    t104 = 0;
    xsi_delete_subprogram_invocation(t101, t102, t0, t103, t104);
    goto LAB20;

LAB14:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 4728);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t0 + 4728);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4728);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 4568);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t5, 8, t6, t9, t12, 2, 1, t20, 32, 1);
    memset(t22, 0, 8);
    t21 = (t22 + 4);
    t23 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 4);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t23);
    t17 = (t16 >> 4);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t18 & 3U);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & 3U);
    t24 = (t0 + 4728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 4728);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 4728);
    t31 = (t30 + 64U);
    t33 = *((char **)t31);
    t34 = (t0 + 4568);
    t41 = (t34 + 56U);
    t43 = *((char **)t41);
    xsi_vlog_generic_get_array_select_value(t46, 8, t26, t29, t33, 2, 1, t43, 32, 1);
    memset(t56, 0, 8);
    t44 = (t56 + 4);
    t45 = (t46 + 4);
    t36 = *((unsigned int *)t46);
    t37 = (t36 >> 2);
    *((unsigned int *)t56) = t37;
    t38 = *((unsigned int *)t45);
    t39 = (t38 >> 2);
    *((unsigned int *)t44) = t39;
    t40 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t40 & 3U);
    t59 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t59 & 3U);
    t47 = (t0 + 4728);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t0 + 4728);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 4728);
    t54 = (t53 + 64U);
    t55 = *((char **)t54);
    t57 = (t0 + 4568);
    t58 = (t57 + 56U);
    t65 = *((char **)t58);
    xsi_vlog_generic_get_array_select_value(t68, 8, t49, t52, t55, 2, 1, t65, 32, 1);
    memset(t78, 0, 8);
    t66 = (t78 + 4);
    t67 = (t68 + 4);
    t60 = *((unsigned int *)t68);
    t61 = (t60 >> 0);
    *((unsigned int *)t78) = t61;
    t62 = *((unsigned int *)t67);
    t63 = (t62 >> 0);
    *((unsigned int *)t66) = t63;
    t64 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t64 & 3U);
    t81 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t81 & 3U);
    t69 = (t0 + 7696);
    t70 = (t0 + 2144);
    t71 = xsi_create_subprogram_invocation(t69, 0, t0, t70, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t70, t71);
    t72 = (t0 + 5848);
    xsi_vlogvar_assign_value(t72, t22, 0, 0, 2);
    t73 = (t0 + 6008);
    xsi_vlogvar_assign_value(t73, t56, 0, 0, 2);
    t74 = (t0 + 6168);
    xsi_vlogvar_assign_value(t74, t78, 0, 0, 2);

LAB29:    t75 = (t0 + 7792);
    t76 = *((char **)t75);
    t77 = (t76 + 80U);
    t79 = *((char **)t77);
    t80 = (t79 + 272U);
    t87 = *((char **)t80);
    t88 = (t87 + 0U);
    t89 = *((char **)t88);
    t100 = ((int  (*)(char *, char *))t89)(t0, t76);

LAB31:    if (t100 != 0)
        goto LAB32;

LAB27:    t76 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t76);

LAB28:    t90 = (t0 + 7792);
    t91 = *((char **)t90);
    t90 = (t0 + 2144);
    t92 = (t0 + 7696);
    t93 = 0;
    xsi_delete_subprogram_invocation(t90, t91, t0, t92, t93);
    goto LAB20;

LAB16:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 4728);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t0 + 4728);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4728);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 4568);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t5, 8, t6, t9, t12, 2, 1, t20, 32, 1);
    memset(t22, 0, 8);
    t21 = (t22 + 4);
    t23 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 4);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t23);
    t17 = (t16 >> 4);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t18 & 3U);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & 3U);
    t24 = (t0 + 4728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 4728);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 4728);
    t31 = (t30 + 64U);
    t33 = *((char **)t31);
    t34 = (t0 + 4568);
    t41 = (t34 + 56U);
    t43 = *((char **)t41);
    xsi_vlog_generic_get_array_select_value(t46, 8, t26, t29, t33, 2, 1, t43, 32, 1);
    memset(t56, 0, 8);
    t44 = (t56 + 4);
    t45 = (t46 + 4);
    t36 = *((unsigned int *)t46);
    t37 = (t36 >> 2);
    *((unsigned int *)t56) = t37;
    t38 = *((unsigned int *)t45);
    t39 = (t38 >> 2);
    *((unsigned int *)t44) = t39;
    t40 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t40 & 3U);
    t59 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t59 & 3U);
    t47 = (t0 + 4728);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t0 + 4728);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 4728);
    t54 = (t53 + 64U);
    t55 = *((char **)t54);
    t57 = (t0 + 4568);
    t58 = (t57 + 56U);
    t65 = *((char **)t58);
    xsi_vlog_generic_get_array_select_value(t68, 8, t49, t52, t55, 2, 1, t65, 32, 1);
    memset(t78, 0, 8);
    t66 = (t78 + 4);
    t67 = (t68 + 4);
    t60 = *((unsigned int *)t68);
    t61 = (t60 >> 0);
    *((unsigned int *)t78) = t61;
    t62 = *((unsigned int *)t67);
    t63 = (t62 >> 0);
    *((unsigned int *)t66) = t63;
    t64 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t64 & 3U);
    t81 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t81 & 3U);
    t69 = (t0 + 7696);
    t70 = (t0 + 2576);
    t71 = xsi_create_subprogram_invocation(t69, 0, t0, t70, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t70, t71);
    t72 = (t0 + 6488);
    xsi_vlogvar_assign_value(t72, t22, 0, 0, 2);
    t73 = (t0 + 6648);
    xsi_vlogvar_assign_value(t73, t56, 0, 0, 2);
    t74 = (t0 + 6808);
    xsi_vlogvar_assign_value(t74, t78, 0, 0, 2);

LAB35:    t75 = (t0 + 7792);
    t76 = *((char **)t75);
    t77 = (t76 + 80U);
    t79 = *((char **)t77);
    t80 = (t79 + 272U);
    t87 = *((char **)t80);
    t88 = (t87 + 0U);
    t89 = *((char **)t88);
    t100 = ((int  (*)(char *, char *))t89)(t0, t76);

LAB37:    if (t100 != 0)
        goto LAB38;

LAB33:    t76 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t76);

LAB34:    t90 = (t0 + 7792);
    t91 = *((char **)t90);
    t90 = (t0 + 2576);
    t92 = (t0 + 7696);
    t93 = 0;
    xsi_delete_subprogram_invocation(t90, t91, t0, t92, t93);
    goto LAB20;

LAB18:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 4728);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t0 + 4728);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4728);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 4568);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t5, 8, t6, t9, t12, 2, 1, t20, 32, 1);
    memset(t22, 0, 8);
    t21 = (t22 + 4);
    t23 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 4);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t23);
    t17 = (t16 >> 4);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t18 & 3U);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & 3U);
    t24 = (t0 + 7696);
    t25 = (t0 + 1712);
    t26 = xsi_create_subprogram_invocation(t24, 0, t0, t25, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t25, t26);
    t27 = (t0 + 5528);
    xsi_vlogvar_assign_value(t27, t22, 0, 0, 2);

LAB41:    t28 = (t0 + 7792);
    t29 = *((char **)t28);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t33 = (t31 + 272U);
    t34 = *((char **)t33);
    t41 = (t34 + 0U);
    t43 = *((char **)t41);
    t100 = ((int  (*)(char *, char *))t43)(t0, t29);

LAB43:    if (t100 != 0)
        goto LAB44;

LAB39:    t29 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t29);

LAB40:    t44 = (t0 + 7792);
    t45 = *((char **)t44);
    t44 = (t0 + 1712);
    t47 = (t0 + 7696);
    t48 = 0;
    xsi_delete_subprogram_invocation(t44, t45, t0, t47, t48);
    goto LAB20;

LAB24:;
LAB26:    t92 = (t0 + 7888U);
    *((char **)t92) = &&LAB23;
    goto LAB1;

LAB30:;
LAB32:    t75 = (t0 + 7888U);
    *((char **)t75) = &&LAB29;
    goto LAB1;

LAB36:;
LAB38:    t75 = (t0 + 7888U);
    *((char **)t75) = &&LAB35;
    goto LAB1;

LAB42:;
LAB44:    t28 = (t0 + 7888U);
    *((char **)t28) = &&LAB41;
    goto LAB1;

LAB45:    xsi_set_current_line(55, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_58_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 8136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 7944);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 4088);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_132_2(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 8384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 8952);
    *((int *)t2) = 1;
    t3 = (t0 + 8416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(133, ng0);
    t4 = (t0 + 11188);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(134, ng0);
    *((int *)t14) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t15 = (t14 + 4);
    *((int *)t15) = 0;
    t16 = (t0 + 11212);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 56U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)118, t14, 32, (char)118, t19, 8);
    goto LAB7;

}

static void Always_136_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 8968);
    *((int *)t2) = 1;
    t3 = (t0 + 8664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);
    *((int *)t4) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t5 = (t4 + 4);
    *((int *)t5) = 0;
    t6 = (t0 + 3528U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)118, t4, 32, (char)118, t7, 8);
    goto LAB2;

}


extern void work_m_00000000000410131471_3671711236_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Always_58_1,(void *)Always_132_2,(void *)Always_136_3};
	static char *se[] = {(void *)sp_tskRunInst,(void *)sp_tskRunPUSH,(void *)sp_tskRunSEND,(void *)sp_tskRunADD,(void *)sp_tskRunMULT};
	xsi_register_didat("work_m_00000000000410131471_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000000410131471_3671711236.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
