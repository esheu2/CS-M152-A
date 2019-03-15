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
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {24, 0};
static int ng6[] = {23, 0};



static void Cont_56_0(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6272);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 31, 31);
    t18 = (t0 + 6144);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_57_1(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6336);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 23, 30);
    t18 = (t0 + 6160);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_58_2(char *t0)
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
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 8388607U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8388607U);
    t14 = (t0 + 6400);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 8388607U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 22);
    t27 = (t0 + 6176);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_60_3(char *t0)
{
    char t6[8];
    char t15[8];
    char t45[8];
    char t47[8];
    char t60[8];
    char t68[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;

LAB0:    t1 = (t0 + 5824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 6192);
    *((int *)t2) = 1;
    t3 = (t0 + 5856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 23);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 23);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t5 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t7 = (t6 + 4);
    t14 = (t5 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t14);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t14);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB9;

LAB6:    if (t25 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    t29 = (t15 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t15);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(65, ng0);

LAB14:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 23);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 23);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 8388607U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 8388607U);
    t5 = ((char*)((ng2)));
    xsi_vlogtype_concat(t6, 24, 24, 2U, t5, 1, t15, 23);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 24);

LAB12:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 23);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 23);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t5 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t7 = (t6 + 4);
    t14 = (t5 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t14);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t14);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB18;

LAB15:    if (t25 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t15) = 1;

LAB18:    t29 = (t15 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t15);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(73, ng0);

LAB23:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 23);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 23);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 8388607U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 8388607U);
    t5 = ((char*)((ng2)));
    xsi_vlogtype_concat(t6, 24, 24, 2U, t5, 1, t15, 23);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 24);

LAB21:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t28 = (t4 + 4);
    t29 = (t14 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t14);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t28);
    t12 = *((unsigned int *)t29);
    t13 = (t11 ^ t12);
    t16 = (t10 | t13);
    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t29);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB27;

LAB24:    if (t19 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t6) = 1;

LAB27:    t36 = (t6 + 4);
    t22 = *((unsigned int *)t36);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(93, ng0);

LAB53:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t28 = (t4 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB55;

LAB54:    t29 = (t14 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t4) > *((unsigned int *)t14))
        goto LAB56;

LAB57:    t36 = (t6 + 4);
    t8 = *((unsigned int *)t36);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t28 = (t4 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB71;

LAB70:    t29 = (t14 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t4) < *((unsigned int *)t14))
        goto LAB72;

LAB73:    t36 = (t6 + 4);
    t8 = *((unsigned int *)t36);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB75;

LAB76:
LAB77:
LAB61:
LAB30:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t28 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t28, 32, 1);
    t29 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t35 = (t6 + 4);
    t36 = (t29 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t29);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t35);
    t12 = *((unsigned int *)t36);
    t13 = (t11 ^ t12);
    t16 = (t10 | t13);
    t17 = *((unsigned int *)t35);
    t18 = *((unsigned int *)t36);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB91;

LAB88:    if (t19 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t15) = 1;

LAB91:    t38 = (t15 + 4);
    t22 = *((unsigned int *)t38);
    t23 = (~(t22));
    t24 = *((unsigned int *)t15);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t28 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t28, 32, 1);
    t29 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t35 = (t6 + 4);
    t36 = (t29 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t29);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t35);
    t12 = *((unsigned int *)t36);
    t13 = (t11 ^ t12);
    t16 = (t10 | t13);
    t17 = *((unsigned int *)t35);
    t18 = *((unsigned int *)t36);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB97;

LAB96:    if (t19 != 0)
        goto LAB98;

LAB99:    memset(t45, 0, 8);
    t38 = (t15 + 4);
    t22 = *((unsigned int *)t38);
    t23 = (~(t22));
    t24 = *((unsigned int *)t15);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t38) != 0)
        goto LAB102;

LAB103:    t40 = (t45 + 4);
    t27 = *((unsigned int *)t45);
    t30 = *((unsigned int *)t40);
    t31 = (t27 || t30);
    if (t31 > 0)
        goto LAB104;

LAB105:    memcpy(t68, t45, 8);

LAB106:    t99 = (t68 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t68);
    t103 = (t102 & t101);
    t104 = (t103 != 0);
    if (t104 > 0)
        goto LAB118;

LAB119:
LAB120:
LAB94:    goto LAB2;

LAB8:    t28 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(62, ng0);

LAB13:    xsi_set_current_line(63, ng0);
    t35 = ((char*)((ng2)));
    t36 = (t0 + 2248);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 8388607U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 8388607U);
    t5 = ((char*)((ng3)));
    xsi_vlogtype_concat(t6, 24, 24, 2U, t5, 1, t15, 23);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 24);
    goto LAB12;

LAB17:    t28 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(70, ng0);

LAB22:    xsi_set_current_line(71, ng0);
    t35 = ((char*)((ng2)));
    t36 = (t0 + 2728);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 8388607U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 8388607U);
    t5 = ((char*)((ng3)));
    xsi_vlogtype_concat(t6, 24, 24, 2U, t5, 1, t15, 23);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 24);
    goto LAB21;

LAB26:    t35 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(77, ng0);

LAB31:    xsi_set_current_line(78, ng0);
    t37 = (t0 + 2248);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 3208);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t28 = (t4 + 4);
    t29 = (t14 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t14);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t28);
    t12 = *((unsigned int *)t29);
    t13 = (t11 ^ t12);
    t16 = (t10 | t13);
    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t29);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB35;

LAB32:    if (t19 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t6) = 1;

LAB35:    t36 = (t6 + 4);
    t22 = *((unsigned int *)t36);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(84, ng0);

LAB42:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t28 = (t4 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB44;

LAB43:    t29 = (t14 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t4) > *((unsigned int *)t14))
        goto LAB45;

LAB46:    t36 = (t6 + 4);
    t8 = *((unsigned int *)t36);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(88, ng0);

LAB52:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 25, t4, 24, t14, 24);
    t28 = (t0 + 3368);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 25);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB50:
LAB38:    goto LAB30;

LAB34:    t35 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(79, ng0);

LAB39:    xsi_set_current_line(80, ng0);
    t37 = (t0 + 2408);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 2888);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 25, t39, 24, t42, 24);
    t43 = (t0 + 3368);
    xsi_vlogvar_assign_value(t43, t15, 0, 0, 25);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3368);
    t4 = (t0 + 3368);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t14, 32, 1);
    t28 = (t6 + 4);
    t8 = *((unsigned int *)t28);
    t44 = (!(t8));
    if (t44 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB38;

LAB40:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB41;

LAB44:    t35 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t6) = 1;
    goto LAB46;

LAB48:    xsi_set_current_line(85, ng0);

LAB51:    xsi_set_current_line(86, ng0);
    t37 = (t0 + 2408);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 2888);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 25, t39, 24, t42, 24);
    t43 = (t0 + 3368);
    xsi_vlogvar_assign_value(t43, t15, 0, 0, 25);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB50;

LAB55:    t35 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t6) = 1;
    goto LAB57;

LAB59:    xsi_set_current_line(94, ng0);

LAB62:    xsi_set_current_line(95, ng0);
    t37 = (t0 + 2248);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 3208);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 8);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t4, 8, t14, 8);
    t28 = (t0 + 3528);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 8);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 24, t4, 24, t14, 8);
    t28 = (t0 + 3688);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 24);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t28 = (t4 + 4);
    t29 = (t14 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t14);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t28);
    t12 = *((unsigned int *)t29);
    t13 = (t11 ^ t12);
    t16 = (t10 | t13);
    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t29);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB66;

LAB63:    if (t19 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t6) = 1;

LAB66:    t36 = (t6 + 4);
    t22 = *((unsigned int *)t36);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 25, t4, 24, t14, 24);
    t28 = (t0 + 3368);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 25);

LAB69:    goto LAB61;

LAB65:    t35 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(100, ng0);
    t37 = (t0 + 2408);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 3688);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 25, t39, 24, t42, 24);
    t43 = (t0 + 3368);
    xsi_vlogvar_assign_value(t43, t15, 0, 0, 25);
    goto LAB69;

LAB71:    t35 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t6) = 1;
    goto LAB73;

LAB75:    xsi_set_current_line(103, ng0);

LAB78:    xsi_set_current_line(104, ng0);
    t37 = (t0 + 2728);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 3208);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 8);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t4, 8, t14, 8);
    t28 = (t0 + 3528);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 24, t4, 24, t14, 8);
    t28 = (t0 + 3688);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 24);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t28 = (t4 + 4);
    t29 = (t14 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t14);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t28);
    t12 = *((unsigned int *)t29);
    t13 = (t11 ^ t12);
    t16 = (t10 | t13);
    t17 = *((unsigned int *)t28);
    t18 = *((unsigned int *)t29);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB82;

LAB79:    if (t19 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t6) = 1;

LAB82:    t36 = (t6 + 4);
    t22 = *((unsigned int *)t36);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(110, ng0);

LAB87:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 25, t4, 24, t14, 24);
    t28 = (t0 + 3368);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 25);

LAB85:    goto LAB77;

LAB81:    t35 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(108, ng0);

LAB86:    xsi_set_current_line(109, ng0);
    t37 = (t0 + 2888);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 3688);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 25, t39, 24, t42, 24);
    t43 = (t0 + 3368);
    xsi_vlogvar_assign_value(t43, t15, 0, 0, 25);
    goto LAB85;

LAB90:    t37 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(115, ng0);

LAB95:    xsi_set_current_line(116, ng0);
    t39 = (t0 + 3208);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng4)));
    memset(t45, 0, 8);
    xsi_vlog_unsigned_add(t45, 32, t41, 8, t42, 32);
    t43 = (t0 + 3208);
    xsi_vlogvar_assign_value(t43, t45, 0, 0, 8);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 25, t4, 25, t5, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 25);
    goto LAB94;

LAB97:    *((unsigned int *)t15) = 1;
    goto LAB99;

LAB98:    t37 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB99;

LAB100:    *((unsigned int *)t45) = 1;
    goto LAB103;

LAB102:    t39 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB103;

LAB104:    t41 = (t0 + 3208);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t46 = ((char*)((ng1)));
    memset(t47, 0, 8);
    t48 = (t43 + 4);
    t49 = (t46 + 4);
    t32 = *((unsigned int *)t43);
    t33 = *((unsigned int *)t46);
    t34 = (t32 ^ t33);
    t50 = *((unsigned int *)t48);
    t51 = *((unsigned int *)t49);
    t52 = (t50 ^ t51);
    t53 = (t34 | t52);
    t54 = *((unsigned int *)t48);
    t55 = *((unsigned int *)t49);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB108;

LAB107:    if (t56 != 0)
        goto LAB109;

LAB110:    memset(t60, 0, 8);
    t61 = (t47 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t47);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t61) != 0)
        goto LAB113;

LAB114:    t69 = *((unsigned int *)t45);
    t70 = *((unsigned int *)t60);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t45 + 4);
    t73 = (t60 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB115;

LAB116:
LAB117:    goto LAB106;

LAB108:    *((unsigned int *)t47) = 1;
    goto LAB110;

LAB109:    t59 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB110;

LAB111:    *((unsigned int *)t60) = 1;
    goto LAB114;

LAB113:    t67 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB114;

LAB115:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t45 + 4);
    t83 = (t60 + 4);
    t84 = *((unsigned int *)t45);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t60);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t44 = (t85 & t87);
    t92 = (t89 & t91);
    t93 = (~(t44));
    t94 = (~(t92));
    t95 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t95 & t93);
    t96 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t96 & t94);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    t98 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t98 & t94);
    goto LAB117;

LAB118:    xsi_set_current_line(118, ng0);

LAB121:    xsi_set_current_line(119, ng0);
    t105 = (t0 + 3208);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    t108 = (t0 + 4008);
    xsi_vlogvar_assign_value(t108, t107, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 25);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 25);
    goto LAB120;

}


extern void work_m_09895931702687521119_1611881108_init()
{
	static char *pe[] = {(void *)Cont_56_0,(void *)Cont_57_1,(void *)Cont_58_2,(void *)Always_60_3};
	xsi_register_didat("work_m_09895931702687521119_1611881108", "isim/nn_tb_isim_beh.exe.sim/work/m_09895931702687521119_1611881108.didat");
	xsi_register_executes(pe);
}
