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
static const char *ng0 = "C:/Users/152/CS-M152-A/lab4/float_mult.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static int ng5[] = {23, 0};
static int ng6[] = {22, 0};
static int ng7[] = {127, 0};



static void Always_55_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5376);
    *((int *)t2) = 1;
    t3 = (t0 + 4592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 3640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_60_1(char *t0)
{
    char t9[16];
    char t10[8];
    char t21[16];
    char t22[8];
    char t33[16];
    char t35[8];
    char t36[8];
    char t47[8];
    char t105[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t106;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5392);
    *((int *)t2) = 1;
    t3 = (t0 + 4840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 3480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 1, t7, 1);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 1);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(63, ng0);

LAB12:    xsi_set_current_line(66, ng0);
    t11 = (t0 + 1480U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 8388607U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 8388607U);
    t20 = ((char*)((ng2)));
    xsi_vlogtype_concat(t9, 48, 24, 2U, t20, 1, t10, 23);
    t23 = (t0 + 1640U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t25 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 8388607U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 8388607U);
    t32 = ((char*)((ng2)));
    xsi_vlogtype_concat(t21, 48, 24, 2U, t32, 1, t22, 23);
    xsi_vlog_unsigned_multiply(t33, 48, t9, 48, t21, 48);
    t34 = (t0 + 2680);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 48);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t7 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 0);
    *((unsigned int *)t5) = t17;
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t18 & 4194303U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 4194303U);
    memset(t10, 0, 8);
    t11 = (t22 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t22);
    t29 = (t28 & t27);
    t30 = (t29 & 4194303U);
    if (t30 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t11) != 0)
        goto LAB15;

LAB16:    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t10, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t5 = (t10 + 4);
    t7 = (t4 + 8);
    t11 = (t4 + 12);
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t5) = t19;
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t5) == 0)
        goto LAB17;

LAB19:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;

LAB20:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t11);
    t26 = (~(t19));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB11;

LAB9:    xsi_set_current_line(79, ng0);

LAB24:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    memset(t22, 0, 8);
    t3 = (t22 + 4);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 0);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t18 & 8388607U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 8388607U);
    memset(t10, 0, 8);
    t7 = (t22 + 4);
    t26 = *((unsigned int *)t7);
    t27 = (~(t26));
    t28 = *((unsigned int *)t22);
    t29 = (t28 & t27);
    t30 = (t29 & 8388607U);
    if (t30 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t7) == 0)
        goto LAB25;

LAB27:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;

LAB28:    t12 = (t0 + 1640U);
    t13 = *((char **)t12);
    memset(t36, 0, 8);
    t12 = (t36 + 4);
    t20 = (t13 + 4);
    t31 = *((unsigned int *)t13);
    t37 = (t31 >> 0);
    *((unsigned int *)t36) = t37;
    t38 = *((unsigned int *)t20);
    t39 = (t38 >> 0);
    *((unsigned int *)t12) = t39;
    t40 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t40 & 8388607U);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & 8388607U);
    memset(t35, 0, 8);
    t23 = (t36 + 4);
    t42 = *((unsigned int *)t23);
    t43 = (~(t42));
    t44 = *((unsigned int *)t36);
    t45 = (t44 & t43);
    t46 = (t45 & 8388607U);
    if (t46 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t23) == 0)
        goto LAB29;

LAB31:    t24 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t24) = 1;

LAB32:    t48 = *((unsigned int *)t10);
    t49 = *((unsigned int *)t35);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t25 = (t10 + 4);
    t32 = (t35 + 4);
    t34 = (t47 + 4);
    t51 = *((unsigned int *)t25);
    t52 = *((unsigned int *)t32);
    t53 = (t51 | t52);
    *((unsigned int *)t34) = t53;
    t54 = *((unsigned int *)t34);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB33;

LAB34:
LAB35:    t72 = (t47 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(83, ng0);

LAB40:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 1640U);
    t7 = *((char **)t5);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t11 = (t7 + 4);
    t26 = *((unsigned int *)t7);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t22) = t28;
    t29 = *((unsigned int *)t11);
    t30 = (t29 >> 31);
    t31 = (t30 & 1);
    *((unsigned int *)t5) = t31;
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t22);
    t39 = (t37 ^ t38);
    *((unsigned int *)t35) = t39;
    t12 = (t10 + 4);
    t13 = (t22 + 4);
    t20 = (t35 + 4);
    t40 = *((unsigned int *)t12);
    t41 = *((unsigned int *)t13);
    t42 = (t40 | t41);
    *((unsigned int *)t20) = t42;
    t43 = *((unsigned int *)t20);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB41;

LAB42:
LAB43:    t23 = (t0 + 2520);
    xsi_vlogvar_assign_value(t23, t35, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t5 = (t10 + 4);
    t7 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 24);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 24);
    *((unsigned int *)t5) = t17;
    t11 = (t4 + 8);
    t12 = (t4 + 12);
    t18 = *((unsigned int *)t11);
    t19 = (t18 << 8);
    t26 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t26 | t19);
    t27 = *((unsigned int *)t12);
    t28 = (t27 << 8);
    t29 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t29 | t28);
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & 8388607U);
    t31 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t31 & 8388607U);
    t13 = (t0 + 2680);
    t20 = (t13 + 56U);
    t23 = *((char **)t20);
    t24 = (t0 + 2680);
    t25 = (t24 + 72U);
    t32 = *((char **)t25);
    t34 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t22, 23, t23, t32, 2, t34, 32, 1);
    t58 = (t0 + 2680);
    t59 = (t58 + 56U);
    t72 = *((char **)t59);
    t78 = (t0 + 2680);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t35, 23, t72, t80, 2, t81, 32, 1);
    t82 = (t0 + 3160);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t37 = *((unsigned int *)t35);
    t38 = *((unsigned int *)t84);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t85 = (t35 + 4);
    t86 = (t84 + 4);
    t87 = (t36 + 4);
    t40 = *((unsigned int *)t85);
    t41 = *((unsigned int *)t86);
    t42 = (t40 | t41);
    *((unsigned int *)t87) = t42;
    t43 = *((unsigned int *)t87);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB44;

LAB45:
LAB46:    t60 = *((unsigned int *)t22);
    t61 = *((unsigned int *)t36);
    t62 = (t60 & t61);
    *((unsigned int *)t47) = t62;
    t90 = (t22 + 4);
    t91 = (t36 + 4);
    t92 = (t47 + 4);
    t64 = *((unsigned int *)t90);
    t65 = *((unsigned int *)t91);
    t66 = (t64 | t65);
    *((unsigned int *)t92) = t66;
    t68 = *((unsigned int *)t92);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB47;

LAB48:
LAB49:    memset(t105, 0, 8);
    xsi_vlog_unsigned_add(t105, 23, t10, 23, t47, 23);
    t106 = (t0 + 2200);
    xsi_vlogvar_assign_value(t106, t105, 0, 0, 23);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 23);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 23);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 255U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 255U);
    t5 = (t0 + 1640U);
    t7 = *((char **)t5);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t11 = (t7 + 4);
    t26 = *((unsigned int *)t7);
    t27 = (t26 >> 23);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t11);
    t29 = (t28 >> 23);
    *((unsigned int *)t5) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 255U);
    t31 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t31 & 255U);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t10, 32, t22, 32);
    t12 = ((char*)((ng7)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_minus(t36, 32, t35, 32, t12, 32);
    t13 = (t0 + 3320);
    t20 = (t13 + 56U);
    t23 = *((char **)t20);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 32, t36, 32, t23, 1);
    t24 = (t0 + 2360);
    xsi_vlogvar_assign_value(t24, t47, 0, 0, 8);

LAB38:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB11;

LAB13:    *((unsigned int *)t10) = 1;
    goto LAB16;

LAB15:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t10) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(74, ng0);
    t12 = (t0 + 2680);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t23 = ((char*)((ng3)));
    xsi_vlog_unsigned_lshift(t9, 48, t20, 48, t23, 32);
    t24 = (t0 + 2680);
    xsi_vlogvar_assign_value(t24, t9, 0, 0, 48);
    goto LAB23;

LAB25:    *((unsigned int *)t10) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t35) = 1;
    goto LAB32;

LAB33:    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t47) = (t56 | t57);
    t58 = (t10 + 4);
    t59 = (t35 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t10);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = *((unsigned int *)t35);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t70 & t68);
    t71 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t71 & t69);
    goto LAB35;

LAB36:    xsi_set_current_line(81, ng0);

LAB39:    xsi_set_current_line(82, ng0);
    t78 = ((char*)((ng4)));
    t79 = (t0 + 2520);
    xsi_vlogvar_assign_value(t79, t78, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB38;

LAB41:    t45 = *((unsigned int *)t35);
    t46 = *((unsigned int *)t20);
    *((unsigned int *)t35) = (t45 | t46);
    goto LAB43;

LAB44:    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t87);
    *((unsigned int *)t36) = (t45 | t46);
    t88 = (t35 + 4);
    t89 = (t84 + 4);
    t48 = *((unsigned int *)t88);
    t49 = (~(t48));
    t50 = *((unsigned int *)t35);
    t8 = (t50 & t49);
    t51 = *((unsigned int *)t89);
    t52 = (~(t51));
    t53 = *((unsigned int *)t84);
    t63 = (t53 & t52);
    t54 = (~(t8));
    t55 = (~(t63));
    t56 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t56 & t54);
    t57 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t57 & t55);
    goto LAB46;

LAB47:    t70 = *((unsigned int *)t47);
    t71 = *((unsigned int *)t92);
    *((unsigned int *)t47) = (t70 | t71);
    t93 = (t22 + 4);
    t94 = (t36 + 4);
    t73 = *((unsigned int *)t22);
    t74 = (~(t73));
    t75 = *((unsigned int *)t93);
    t76 = (~(t75));
    t77 = *((unsigned int *)t36);
    t95 = (~(t77));
    t96 = *((unsigned int *)t94);
    t97 = (~(t96));
    t67 = (t74 & t76);
    t98 = (t95 & t97);
    t99 = (~(t67));
    t100 = (~(t98));
    t101 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t101 & t99);
    t102 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t102 & t100);
    t103 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t103 & t99);
    t104 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t104 & t100);
    goto LAB49;

}

static void Cont_101_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 5056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2360);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2520);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t11, 1, t8, 8, t5, 23);
    t12 = (t0 + 5488);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t17 = (t0 + 5408);
    *((int *)t17) = 1;

LAB1:    return;
}


extern void work_m_00000000001863350154_2583037537_init()
{
	static char *pe[] = {(void *)Always_55_0,(void *)Always_60_1,(void *)Cont_101_2};
	xsi_register_didat("work_m_00000000001863350154_2583037537", "isim/sigmoid_approx_tb_isim_beh.exe.sim/work/m_00000000001863350154_2583037537.didat");
	xsi_register_executes(pe);
}
