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
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {24, 0};
static unsigned int ng3[] = {0U, 0U};



static void Always_93_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t21[8];
    char t31[8];
    char t62[8];
    char t83[8];
    char t93[8];
    char t124[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
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
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
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
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4120);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    t76 = *((unsigned int *)t5);
    t77 = (~(t76));
    t78 = *((unsigned int *)t14);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t14) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t124, 8);

LAB18:    t138 = (t0 + 2408);
    xsi_vlogvar_assign_value(t138, t4, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t21, 0, 8);
    t2 = (t21 + 4);
    t6 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 24);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 24);
    t15 = (t12 & 1);
    *((unsigned int *)t2) = t15;
    t7 = (t0 + 1688U);
    t13 = *((char **)t7);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t13);
    t23 = (t16 & t17);
    *((unsigned int *)t31) = t23;
    t7 = (t21 + 4);
    t14 = (t13 + 4);
    t18 = (t31 + 4);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t14);
    t26 = (t24 | t25);
    *((unsigned int *)t18) = t26;
    t27 = *((unsigned int *)t18);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB31;

LAB32:
LAB33:    memset(t5, 0, 8);
    t22 = (t31 + 4);
    t52 = *((unsigned int *)t22);
    t53 = (~(t52));
    t56 = *((unsigned int *)t31);
    t57 = (t56 & t53);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t22) != 0)
        goto LAB36;

LAB37:    t30 = (t5 + 4);
    t59 = *((unsigned int *)t5);
    t60 = *((unsigned int *)t30);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB38;

LAB39:    t74 = *((unsigned int *)t5);
    t75 = (~(t74));
    t76 = *((unsigned int *)t30);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t30) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t5) > 0)
        goto LAB44;

LAB45:    memcpy(t4, t67, 8);

LAB46:    t66 = (t0 + 2888);
    xsi_vlogvar_assign_value(t66, t4, 0, 0, 25);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t13 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 16777215U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 16777215U);
    t14 = (t0 + 2728);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 24);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t54 = (t10 & t9);
    t6 = (t0 + 5560);
    *((int *)t6) = t54;

LAB49:    t7 = (t0 + 5560);
    if (*((int *)t7) > 0)
        goto LAB50;

LAB51:    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    t18 = (t0 + 1048U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 24);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 24);
    t28 = (t27 & 1);
    *((unsigned int *)t18) = t28;
    t29 = (t0 + 1688U);
    t30 = *((char **)t29);
    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t30);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t29 = (t21 + 4);
    t35 = (t30 + 4);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t29);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB19;

LAB20:
LAB21:    t63 = *((unsigned int *)t19);
    t64 = *((unsigned int *)t31);
    t65 = (t63 ^ t64);
    *((unsigned int *)t62) = t65;
    t66 = (t19 + 4);
    t67 = (t31 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB11;

LAB12:    t80 = (t0 + 1528U);
    t81 = *((char **)t80);
    t80 = (t0 + 1048U);
    t82 = *((char **)t80);
    memset(t83, 0, 8);
    t80 = (t83 + 4);
    t84 = (t82 + 4);
    t85 = *((unsigned int *)t82);
    t86 = (t85 >> 24);
    t87 = (t86 & 1);
    *((unsigned int *)t83) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 >> 24);
    t90 = (t89 & 1);
    *((unsigned int *)t80) = t90;
    t91 = (t0 + 1688U);
    t92 = *((char **)t91);
    t94 = *((unsigned int *)t83);
    t95 = *((unsigned int *)t92);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t91 = (t83 + 4);
    t97 = (t92 + 4);
    t98 = (t93 + 4);
    t99 = *((unsigned int *)t91);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB25;

LAB26:
LAB27:    t125 = *((unsigned int *)t81);
    t126 = *((unsigned int *)t93);
    t127 = (t125 ^ t126);
    *((unsigned int *)t124) = t127;
    t128 = (t81 + 4);
    t129 = (t93 + 4);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t128);
    t132 = *((unsigned int *)t129);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = *((unsigned int *)t130);
    t135 = (t134 != 0);
    if (t135 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 1, t62, 1, t124, 1);
    goto LAB18;

LAB16:    memcpy(t4, t62, 8);
    goto LAB18;

LAB19:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t31) = (t42 | t43);
    t44 = (t21 + 4);
    t45 = (t30 + 4);
    t46 = *((unsigned int *)t21);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t60 & t56);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    goto LAB21;

LAB22:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    goto LAB24;

LAB25:    t104 = *((unsigned int *)t93);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t93) = (t104 | t105);
    t106 = (t83 + 4);
    t107 = (t92 + 4);
    t108 = *((unsigned int *)t83);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t92);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t122 & t118);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    goto LAB27;

LAB28:    t136 = *((unsigned int *)t124);
    t137 = *((unsigned int *)t130);
    *((unsigned int *)t124) = (t136 | t137);
    goto LAB30;

LAB31:    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t18);
    *((unsigned int *)t31) = (t32 | t33);
    t19 = (t21 + 4);
    t20 = (t13 + 4);
    t34 = *((unsigned int *)t21);
    t37 = (~(t34));
    t38 = *((unsigned int *)t19);
    t39 = (~(t38));
    t40 = *((unsigned int *)t13);
    t41 = (~(t40));
    t42 = *((unsigned int *)t20);
    t43 = (~(t42));
    t54 = (t37 & t39);
    t55 = (t41 & t43);
    t46 = (~(t54));
    t47 = (~(t55));
    t48 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t48 & t46);
    t49 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t49 & t47);
    t50 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t50 & t46);
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t47);
    goto LAB33;

LAB34:    *((unsigned int *)t5) = 1;
    goto LAB37;

LAB36:    t29 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB37;

LAB38:    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t62, 0, 8);
    t35 = (t62 + 4);
    t44 = (t36 + 4);
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    *((unsigned int *)t62) = t64;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t44) != 0)
        goto LAB48;

LAB47:    t72 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t72 & 33554431U);
    t73 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t73 & 33554431U);
    t45 = ((char*)((ng1)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 25, t62, 25, t45, 25);
    goto LAB39;

LAB40:    t66 = (t0 + 1048U);
    t67 = *((char **)t66);
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t4, 25, t83, 25, t67, 25);
    goto LAB46;

LAB44:    memcpy(t4, t83, 8);
    goto LAB46;

LAB48:    t65 = *((unsigned int *)t62);
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t62) = (t65 | t69);
    t70 = *((unsigned int *)t35);
    t71 = *((unsigned int *)t44);
    *((unsigned int *)t35) = (t70 | t71);
    goto LAB47;

LAB50:    xsi_set_current_line(100, ng0);

LAB52:    xsi_set_current_line(101, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memset(t4, 0, 8);
    t19 = (t4 + 4);
    t20 = (t18 + 4);
    t11 = *((unsigned int *)t18);
    t12 = (t11 >> 23);
    t15 = (t12 & 1);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t20);
    t17 = (t16 >> 23);
    t23 = (t17 & 1);
    *((unsigned int *)t19) = t23;
    t22 = ((char*)((ng3)));
    memset(t5, 0, 8);
    t29 = (t4 + 4);
    t30 = (t22 + 4);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t22);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t29);
    t28 = *((unsigned int *)t30);
    t32 = (t27 ^ t28);
    t33 = (t26 | t32);
    t34 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t30);
    t38 = (t34 | t37);
    t39 = (~(t38));
    t40 = (t33 & t39);
    if (t40 != 0)
        goto LAB56;

LAB53:    if (t38 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t5) = 1;

LAB56:    t36 = (t5 + 4);
    t41 = *((unsigned int *)t36);
    t42 = (~(t41));
    t43 = *((unsigned int *)t5);
    t46 = (t43 & t42);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB57;

LAB58:
LAB59:    t2 = (t0 + 5560);
    t54 = *((int *)t2);
    *((int *)t2) = (t54 - 1);
    goto LAB49;

LAB55:    t35 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(102, ng0);

LAB60:    xsi_set_current_line(103, ng0);
    t44 = (t0 + 2728);
    t45 = (t44 + 56U);
    t66 = *((char **)t45);
    t67 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_lshift(t21, 24, t66, 24, t67, 1);
    t68 = (t0 + 2728);
    xsi_vlogvar_assign_value(t68, t21, 0, 0, 24);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 8, t6, 8, t7, 8);
    t13 = (t0 + 2568);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);
    goto LAB59;

}


extern void work_m_09468151983046656444_2377480360_init()
{
	static char *pe[] = {(void *)Always_93_0};
	xsi_register_didat("work_m_09468151983046656444_2377480360", "isim/top_tb_isim_beh.exe.sim/work/m_09468151983046656444_2377480360.didat");
	xsi_register_executes(pe);
}
