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
static const char *ng0 = "/home/ise/Desktop/CS-M152-A/lab3/stopwatch.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {9, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {5, 0};
static int ng6[] = {1, 0};
static int ng7[] = {8, 0};
static int ng8[] = {2, 0};



static void Always_183_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
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

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 6816);
    *((int *)t2) = 1;
    t3 = (t0 + 4792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(184, ng0);

LAB5:    xsi_set_current_line(185, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(186, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    t28 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Cont_191_1(char *t0)
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

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7008);
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6832);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_193_2(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 6848);
    *((int *)t2) = 1;
    t3 = (t0 + 5288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(194, ng0);

LAB5:    xsi_set_current_line(195, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(196, ng0);
    t12 = (t0 + 3688);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t15) == 0)
        goto LAB9;

LAB11:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;

LAB12:    t22 = (t11 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    *((unsigned int *)t11) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB14;

LAB13:    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t32, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB14:    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t11) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB13;

}

static void Always_201_3(char *t0)
{
    char t13[8];
    char t23[8];
    char t35[8];
    char t54[8];
    char t62[8];
    char t104[8];
    char t118[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t119;

LAB0:    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 6864);
    *((int *)t2) = 1;
    t3 = (t0 + 5536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(202, ng0);

LAB5:    xsi_set_current_line(203, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB10;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB13:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB15;

LAB14:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    memset(t23, 0, 8);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t24) != 0)
        goto LAB18;

LAB19:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB20;

LAB21:    memcpy(t62, t23, 8);

LAB22:    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB85;

LAB83:    if (*((unsigned int *)t5) == 0)
        goto LAB82;

LAB84:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB85:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB87;

LAB86:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    memset(t23, 0, 8);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t24) != 0)
        goto LAB90;

LAB91:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB92;

LAB93:    memcpy(t54, t23, 8);

LAB94:    t67 = (t54 + 4);
    t79 = *((unsigned int *)t67);
    t80 = (~(t79));
    t81 = *((unsigned int *)t54);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB102;

LAB103:
LAB104:
LAB38:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(204, ng0);

LAB9:    xsi_set_current_line(205, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB14;

LAB16:    *((unsigned int *)t23) = 1;
    goto LAB19;

LAB18:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB19;

LAB20:    t36 = (t0 + 1848U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t37 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t37);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t36) == 0)
        goto LAB23;

LAB25:    t43 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t43) = 1;

LAB26:    t44 = (t35 + 4);
    t45 = (t37 + 4);
    t46 = *((unsigned int *)t37);
    t47 = (~(t46));
    *((unsigned int *)t35) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB28;

LAB27:    t52 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    memset(t54, 0, 8);
    t55 = (t35 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t35);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t55) != 0)
        goto LAB31;

LAB32:    t63 = *((unsigned int *)t23);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t23 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB22;

LAB23:    *((unsigned int *)t35) = 1;
    goto LAB26;

LAB28:    t48 = *((unsigned int *)t35);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t35) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB27;

LAB29:    *((unsigned int *)t54) = 1;
    goto LAB32;

LAB31:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB32;

LAB33:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t23 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t23);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB35;

LAB36:    xsi_set_current_line(211, ng0);

LAB39:    xsi_set_current_line(212, ng0);
    t100 = (t0 + 3528);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t103 = ((char*)((ng3)));
    memset(t104, 0, 8);
    t105 = (t102 + 4);
    if (*((unsigned int *)t105) != 0)
        goto LAB41;

LAB40:    t106 = (t103 + 4);
    if (*((unsigned int *)t106) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t102) < *((unsigned int *)t103))
        goto LAB42;

LAB43:    t108 = (t104 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t104);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB51;

LAB48:    if (t19 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t13) = 1;

LAB51:    t24 = (t13 + 4);
    t22 = *((unsigned int *)t24);
    t25 = (~(t22));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB52;

LAB53:
LAB54:
LAB47:    goto LAB38;

LAB41:    t107 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t104) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(213, ng0);
    t114 = (t0 + 3528);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    t117 = ((char*)((ng4)));
    memset(t118, 0, 8);
    xsi_vlog_unsigned_add(t118, 4, t116, 4, t117, 4);
    t119 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t119, t118, 0, 0, 4, 0LL);
    goto LAB47;

LAB50:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(215, ng0);

LAB55:    xsi_set_current_line(216, ng0);
    t30 = (t0 + 3368);
    t31 = (t30 + 56U);
    t36 = *((char **)t31);
    t37 = ((char*)((ng5)));
    memset(t23, 0, 8);
    t43 = (t36 + 4);
    t44 = (t37 + 4);
    t29 = *((unsigned int *)t36);
    t32 = *((unsigned int *)t37);
    t33 = (t29 ^ t32);
    t34 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t44);
    t39 = (t34 ^ t38);
    t40 = (t33 | t39);
    t41 = *((unsigned int *)t43);
    t42 = *((unsigned int *)t44);
    t46 = (t41 | t42);
    t47 = (~(t46));
    t48 = (t40 & t47);
    if (t48 != 0)
        goto LAB59;

LAB56:    if (t46 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t23) = 1;

LAB59:    t55 = (t23 + 4);
    t49 = *((unsigned int *)t55);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(238, ng0);

LAB81:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB62:    goto LAB54;

LAB58:    t45 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(217, ng0);

LAB63:    xsi_set_current_line(218, ng0);
    t61 = (t0 + 3208);
    t66 = (t61 + 56U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng3)));
    memset(t35, 0, 8);
    t76 = (t67 + 4);
    t77 = (t68 + 4);
    t56 = *((unsigned int *)t67);
    t57 = *((unsigned int *)t68);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t76);
    t60 = *((unsigned int *)t77);
    t63 = (t59 ^ t60);
    t64 = (t58 | t63);
    t65 = *((unsigned int *)t76);
    t69 = *((unsigned int *)t77);
    t70 = (t65 | t69);
    t71 = (~(t70));
    t72 = (t64 & t71);
    if (t72 != 0)
        goto LAB67;

LAB64:    if (t70 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t35) = 1;

LAB67:    t100 = (t35 + 4);
    t73 = *((unsigned int *)t100);
    t74 = (~(t73));
    t75 = *((unsigned int *)t35);
    t78 = (t75 & t74);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(231, ng0);

LAB80:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB70:    goto LAB62;

LAB66:    t94 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(219, ng0);

LAB71:    xsi_set_current_line(220, ng0);
    t101 = (t0 + 3048);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t105 = ((char*)((ng5)));
    memset(t54, 0, 8);
    t106 = (t103 + 4);
    t107 = (t105 + 4);
    t80 = *((unsigned int *)t103);
    t81 = *((unsigned int *)t105);
    t82 = (t80 ^ t81);
    t83 = *((unsigned int *)t106);
    t84 = *((unsigned int *)t107);
    t85 = (t83 ^ t84);
    t88 = (t82 | t85);
    t89 = *((unsigned int *)t106);
    t90 = *((unsigned int *)t107);
    t91 = (t89 | t90);
    t92 = (~(t91));
    t93 = (t88 & t92);
    if (t93 != 0)
        goto LAB75;

LAB72:    if (t91 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t54) = 1;

LAB75:    t114 = (t54 + 4);
    t95 = *((unsigned int *)t114);
    t96 = (~(t95));
    t97 = *((unsigned int *)t54);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(223, ng0);

LAB79:    xsi_set_current_line(224, ng0);
    t115 = (t0 + 2008U);
    t116 = *((char **)t115);
    t115 = ((char*)((ng4)));
    memset(t62, 0, 8);
    xsi_vlog_unsigned_add(t62, 4, t116, 4, t115, 4);
    t117 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t117, t62, 0, 0, 4, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB78:    goto LAB70;

LAB74:    t108 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB75;

LAB76:    goto LAB78;

LAB82:    *((unsigned int *)t13) = 1;
    goto LAB85;

LAB87:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB86;

LAB88:    *((unsigned int *)t23) = 1;
    goto LAB91;

LAB90:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB91;

LAB92:    t36 = (t0 + 1848U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t37 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t37);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t36) != 0)
        goto LAB97;

LAB98:    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t35);
    t48 = (t46 & t47);
    *((unsigned int *)t54) = t48;
    t44 = (t23 + 4);
    t45 = (t35 + 4);
    t55 = (t54 + 4);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 | t50);
    *((unsigned int *)t55) = t51;
    t52 = *((unsigned int *)t55);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB94;

LAB95:    *((unsigned int *)t35) = 1;
    goto LAB98;

LAB97:    t43 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB98;

LAB99:    t56 = *((unsigned int *)t54);
    t57 = *((unsigned int *)t55);
    *((unsigned int *)t54) = (t56 | t57);
    t61 = (t23 + 4);
    t66 = (t35 + 4);
    t58 = *((unsigned int *)t23);
    t59 = (~(t58));
    t60 = *((unsigned int *)t61);
    t63 = (~(t60));
    t64 = *((unsigned int *)t35);
    t65 = (~(t64));
    t69 = *((unsigned int *)t66);
    t70 = (~(t69));
    t86 = (t59 & t63);
    t87 = (t65 & t70);
    t71 = (~(t86));
    t72 = (~(t87));
    t73 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t73 & t71);
    t74 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t74 & t72);
    t75 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t75 & t71);
    t78 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t78 & t72);
    goto LAB101;

LAB102:    xsi_set_current_line(245, ng0);

LAB105:    xsi_set_current_line(246, ng0);
    t68 = (t0 + 1368U);
    t76 = *((char **)t68);
    t68 = (t76 + 4);
    t84 = *((unsigned int *)t68);
    t85 = (~(t84));
    t88 = *((unsigned int *)t76);
    t89 = (t88 & t85);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(253, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB113;

LAB110:    if (t19 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t13) = 1;

LAB113:    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t25 = (~(t22));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(284, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB155;

LAB152:    if (t19 != 0)
        goto LAB154;

LAB153:    *((unsigned int *)t13) = 1;

LAB155:    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t25 = (~(t22));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB156;

LAB157:
LAB158:
LAB116:
LAB108:    goto LAB104;

LAB106:    xsi_set_current_line(247, ng0);

LAB109:    xsi_set_current_line(248, ng0);
    t77 = ((char*)((ng2)));
    t94 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t94, t77, 0, 0, 4, 0LL);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB108;

LAB112:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(254, ng0);

LAB117:    xsi_set_current_line(255, ng0);
    t14 = (t0 + 3528);
    t24 = (t14 + 56U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng7)));
    memset(t23, 0, 8);
    t36 = (t30 + 4);
    t37 = (t31 + 4);
    t29 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t31);
    t33 = (t29 ^ t32);
    t34 = *((unsigned int *)t36);
    t38 = *((unsigned int *)t37);
    t39 = (t34 ^ t38);
    t40 = (t33 | t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t46 = (t41 | t42);
    t47 = (~(t46));
    t48 = (t40 & t47);
    if (t48 != 0)
        goto LAB121;

LAB118:    if (t46 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t23) = 1;

LAB121:    t44 = (t23 + 4);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(268, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB138;

LAB135:    if (t19 != 0)
        goto LAB137;

LAB136:    *((unsigned int *)t13) = 1;

LAB138:    t24 = (t13 + 4);
    t22 = *((unsigned int *)t24);
    t25 = (~(t22));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(282, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB141:
LAB124:    goto LAB116;

LAB120:    t43 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(256, ng0);

LAB125:    xsi_set_current_line(257, ng0);
    t45 = (t0 + 3368);
    t55 = (t45 + 56U);
    t61 = *((char **)t55);
    t66 = ((char*)((ng5)));
    memset(t35, 0, 8);
    t67 = (t61 + 4);
    t68 = (t66 + 4);
    t56 = *((unsigned int *)t61);
    t57 = *((unsigned int *)t66);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t67);
    t60 = *((unsigned int *)t68);
    t63 = (t59 ^ t60);
    t64 = (t58 | t63);
    t65 = *((unsigned int *)t67);
    t69 = *((unsigned int *)t68);
    t70 = (t65 | t69);
    t71 = (~(t70));
    t72 = (t64 & t71);
    if (t72 != 0)
        goto LAB129;

LAB126:    if (t70 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t35) = 1;

LAB129:    t77 = (t35 + 4);
    t73 = *((unsigned int *)t77);
    t74 = (~(t73));
    t75 = *((unsigned int *)t35);
    t78 = (t75 & t74);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB130;

LAB131:    xsi_set_current_line(263, ng0);

LAB134:    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB132:    goto LAB124;

LAB128:    t76 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB129;

LAB130:    xsi_set_current_line(258, ng0);

LAB133:    xsi_set_current_line(259, ng0);
    t94 = ((char*)((ng2)));
    t100 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t100, t94, 0, 0, 4, 0LL);
    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB132;

LAB137:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB138;

LAB139:    xsi_set_current_line(269, ng0);

LAB142:    xsi_set_current_line(270, ng0);
    t30 = (t0 + 3368);
    t31 = (t30 + 56U);
    t36 = *((char **)t31);
    t37 = ((char*)((ng5)));
    memset(t23, 0, 8);
    t43 = (t36 + 4);
    t44 = (t37 + 4);
    t29 = *((unsigned int *)t36);
    t32 = *((unsigned int *)t37);
    t33 = (t29 ^ t32);
    t34 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t44);
    t39 = (t34 ^ t38);
    t40 = (t33 | t39);
    t41 = *((unsigned int *)t43);
    t42 = *((unsigned int *)t44);
    t46 = (t41 | t42);
    t47 = (~(t46));
    t48 = (t40 & t47);
    if (t48 != 0)
        goto LAB146;

LAB143:    if (t46 != 0)
        goto LAB145;

LAB144:    *((unsigned int *)t23) = 1;

LAB146:    t55 = (t23 + 4);
    t49 = *((unsigned int *)t55);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB147;

LAB148:    xsi_set_current_line(276, ng0);

LAB151:    xsi_set_current_line(277, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(278, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB149:    goto LAB141;

LAB145:    t45 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB146;

LAB147:    xsi_set_current_line(271, ng0);

LAB150:    xsi_set_current_line(272, ng0);
    t61 = ((char*)((ng2)));
    t66 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t66, t61, 0, 0, 4, 0LL);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB149;

LAB154:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB155;

LAB156:    xsi_set_current_line(285, ng0);

LAB159:    xsi_set_current_line(286, ng0);
    t14 = (t0 + 3208);
    t24 = (t14 + 56U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng7)));
    memset(t23, 0, 8);
    t36 = (t30 + 4);
    t37 = (t31 + 4);
    t29 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t31);
    t33 = (t29 ^ t32);
    t34 = *((unsigned int *)t36);
    t38 = *((unsigned int *)t37);
    t39 = (t34 ^ t38);
    t40 = (t33 | t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t46 = (t41 | t42);
    t47 = (~(t46));
    t48 = (t40 & t47);
    if (t48 != 0)
        goto LAB163;

LAB160:    if (t46 != 0)
        goto LAB162;

LAB161:    *((unsigned int *)t23) = 1;

LAB163:    t44 = (t23 + 4);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB164;

LAB165:    xsi_set_current_line(299, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB180;

LAB177:    if (t19 != 0)
        goto LAB179;

LAB178:    *((unsigned int *)t13) = 1;

LAB180:    t24 = (t13 + 4);
    t22 = *((unsigned int *)t24);
    t25 = (~(t22));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB181;

LAB182:    xsi_set_current_line(313, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB183:
LAB166:    goto LAB158;

LAB162:    t43 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB163;

LAB164:    xsi_set_current_line(287, ng0);

LAB167:    xsi_set_current_line(288, ng0);
    t45 = (t0 + 3048);
    t55 = (t45 + 56U);
    t61 = *((char **)t55);
    t66 = ((char*)((ng5)));
    memset(t35, 0, 8);
    t67 = (t61 + 4);
    t68 = (t66 + 4);
    t56 = *((unsigned int *)t61);
    t57 = *((unsigned int *)t66);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t67);
    t60 = *((unsigned int *)t68);
    t63 = (t59 ^ t60);
    t64 = (t58 | t63);
    t65 = *((unsigned int *)t67);
    t69 = *((unsigned int *)t68);
    t70 = (t65 | t69);
    t71 = (~(t70));
    t72 = (t64 & t71);
    if (t72 != 0)
        goto LAB171;

LAB168:    if (t70 != 0)
        goto LAB170;

LAB169:    *((unsigned int *)t35) = 1;

LAB171:    t77 = (t35 + 4);
    t73 = *((unsigned int *)t77);
    t74 = (~(t73));
    t75 = *((unsigned int *)t35);
    t78 = (t75 & t74);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB172;

LAB173:    xsi_set_current_line(294, ng0);

LAB176:    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB174:    goto LAB166;

LAB170:    t76 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB171;

LAB172:    xsi_set_current_line(289, ng0);

LAB175:    xsi_set_current_line(290, ng0);
    t94 = ((char*)((ng2)));
    t100 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t100, t94, 0, 0, 4, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB174;

LAB179:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB180;

LAB181:    xsi_set_current_line(300, ng0);

LAB184:    xsi_set_current_line(301, ng0);
    t30 = (t0 + 3048);
    t31 = (t30 + 56U);
    t36 = *((char **)t31);
    t37 = ((char*)((ng5)));
    memset(t23, 0, 8);
    t43 = (t36 + 4);
    t44 = (t37 + 4);
    t29 = *((unsigned int *)t36);
    t32 = *((unsigned int *)t37);
    t33 = (t29 ^ t32);
    t34 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t44);
    t39 = (t34 ^ t38);
    t40 = (t33 | t39);
    t41 = *((unsigned int *)t43);
    t42 = *((unsigned int *)t44);
    t46 = (t41 | t42);
    t47 = (~(t46));
    t48 = (t40 & t47);
    if (t48 != 0)
        goto LAB188;

LAB185:    if (t46 != 0)
        goto LAB187;

LAB186:    *((unsigned int *)t23) = 1;

LAB188:    t55 = (t23 + 4);
    t49 = *((unsigned int *)t55);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB189;

LAB190:    xsi_set_current_line(307, ng0);

LAB193:    xsi_set_current_line(308, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB191:    goto LAB183;

LAB187:    t45 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB188;

LAB189:    xsi_set_current_line(302, ng0);

LAB192:    xsi_set_current_line(303, ng0);
    t61 = ((char*)((ng2)));
    t66 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t66, t61, 0, 0, 4, 0LL);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB191;

}

static void Cont_318_4(char *t0)
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

LAB0:    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7072);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
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
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 6880);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_319_5(char *t0)
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

LAB0:    t1 = (t0 + 6000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(319, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7136);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
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
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 6896);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_320_6(char *t0)
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

LAB0:    t1 = (t0 + 6248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(320, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7200);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
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
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 6912);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_321_7(char *t0)
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

LAB0:    t1 = (t0 + 6496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(321, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
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
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 6928);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_15282813991771502216_2908904151_init()
{
	static char *pe[] = {(void *)Always_183_0,(void *)Cont_191_1,(void *)Always_193_2,(void *)Always_201_3,(void *)Cont_318_4,(void *)Cont_319_5,(void *)Cont_320_6,(void *)Cont_321_7};
	xsi_register_didat("work_m_15282813991771502216_2908904151", "isim/top_tb_isim_beh.exe.sim/work/m_15282813991771502216_2908904151.didat");
	xsi_register_executes(pe);
}
