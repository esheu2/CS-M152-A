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
static int ng1[] = {1, 0};
static unsigned int ng2[] = {15U, 0U};
static unsigned int ng3[] = {7U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {2, 0};



static void Always_247_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t74[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(247, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(248, ng0);

LAB5:    xsi_set_current_line(249, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) > *((unsigned int *)t4))
        goto LAB8;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(309, ng0);

LAB69:    xsi_set_current_line(310, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(311, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);

LAB13:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(250, ng0);

LAB14:    xsi_set_current_line(251, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 10);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 10);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    t26 = (t18 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(280, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng6)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t8, 3, t7, 32);
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t18, 32, 2);
    t9 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t10 = (t6 + 4);
    t16 = (t9 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t16);
    t20 = (t14 ^ t15);
    t21 = (t13 | t20);
    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t16);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t27 = (t21 & t25);
    if (t27 != 0)
        goto LAB45;

LAB42:    if (t24 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t34) = 1;

LAB45:    t19 = (t34 + 4);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    t30 = *((unsigned int *)t34);
    t31 = (t30 & t29);
    t36 = (t31 != 0);
    if (t36 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(303, ng0);

LAB68:    xsi_set_current_line(304, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(305, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);

LAB48:
LAB17:    goto LAB13;

LAB15:    xsi_set_current_line(252, ng0);

LAB18:    xsi_set_current_line(253, ng0);
    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t32 = (t34 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 6);
    t38 = (t37 & 1);
    *((unsigned int *)t34) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 6);
    t41 = (t40 & 1);
    *((unsigned int *)t32) = t41;
    t42 = (t34 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t34);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(275, ng0);

LAB41:    xsi_set_current_line(276, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(277, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB21:    goto LAB17;

LAB19:    xsi_set_current_line(254, ng0);

LAB22:    xsi_set_current_line(255, ng0);
    t48 = (t0 + 1368U);
    t49 = *((char **)t48);
    t48 = ((char*)((ng2)));
    memset(t50, 0, 8);
    t51 = (t49 + 4);
    t52 = (t48 + 4);
    t53 = *((unsigned int *)t49);
    t54 = *((unsigned int *)t48);
    t55 = (t53 ^ t54);
    t56 = *((unsigned int *)t51);
    t57 = *((unsigned int *)t52);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t52);
    t62 = (t60 | t61);
    t63 = (~(t62));
    t64 = (t59 & t63);
    if (t64 != 0)
        goto LAB26;

LAB23:    if (t62 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t50) = 1;

LAB26:    t66 = (t50 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t50);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(269, ng0);

LAB40:    xsi_set_current_line(270, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 4, t3, 4, t2, 4);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB29:    goto LAB21;

LAB25:    t65 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(256, ng0);

LAB30:    xsi_set_current_line(257, ng0);
    t72 = (t0 + 1208U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng3)));
    memset(t74, 0, 8);
    t75 = (t73 + 4);
    t76 = (t72 + 4);
    t77 = *((unsigned int *)t73);
    t78 = *((unsigned int *)t72);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB34;

LAB31:    if (t86 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t74) = 1;

LAB34:    t90 = (t74 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t74);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(263, ng0);

LAB39:    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(265, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t3, 3, t2, 3);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 3);

LAB37:    goto LAB29;

LAB33:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(258, ng0);

LAB38:    xsi_set_current_line(259, ng0);
    t96 = (t0 + 1368U);
    t97 = *((char **)t96);
    t96 = (t0 + 1928);
    xsi_vlogvar_assign_value(t96, t97, 0, 0, 4);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB37;

LAB44:    t17 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(281, ng0);

LAB49:    xsi_set_current_line(282, ng0);
    t26 = (t0 + 1368U);
    t32 = *((char **)t26);
    t26 = ((char*)((ng2)));
    memset(t50, 0, 8);
    t33 = (t32 + 4);
    t35 = (t26 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t26);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t33);
    t41 = *((unsigned int *)t35);
    t43 = (t40 ^ t41);
    t44 = (t39 | t43);
    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t35);
    t47 = (t45 | t46);
    t53 = (~(t47));
    t54 = (t44 & t53);
    if (t54 != 0)
        goto LAB53;

LAB50:    if (t47 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t50) = 1;

LAB53:    t48 = (t50 + 4);
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(296, ng0);

LAB67:    xsi_set_current_line(297, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 4, t3, 4, t2, 4);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    xsi_set_current_line(298, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB56:    goto LAB48;

LAB52:    t42 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(283, ng0);

LAB57:    xsi_set_current_line(284, ng0);
    t49 = (t0 + 1208U);
    t51 = *((char **)t49);
    t49 = ((char*)((ng3)));
    memset(t74, 0, 8);
    t52 = (t51 + 4);
    t65 = (t49 + 4);
    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t49);
    t62 = (t60 ^ t61);
    t63 = *((unsigned int *)t52);
    t64 = *((unsigned int *)t65);
    t67 = (t63 ^ t64);
    t68 = (t62 | t67);
    t69 = *((unsigned int *)t52);
    t70 = *((unsigned int *)t65);
    t71 = (t69 | t70);
    t77 = (~(t71));
    t78 = (t68 & t77);
    if (t78 != 0)
        goto LAB61;

LAB58:    if (t71 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t74) = 1;

LAB61:    t72 = (t74 + 4);
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(290, ng0);

LAB66:    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(292, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t3, 3, t2, 3);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 3);

LAB64:    goto LAB56;

LAB60:    t66 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(285, ng0);

LAB65:    xsi_set_current_line(286, ng0);
    t73 = (t0 + 1368U);
    t75 = *((char **)t73);
    t73 = (t0 + 1928);
    xsi_vlogvar_assign_value(t73, t75, 0, 0, 4);
    xsi_set_current_line(287, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB64;

}


extern void work_m_00000000003209552623_3408695897_init()
{
	static char *pe[] = {(void *)Always_247_0};
	xsi_register_didat("work_m_00000000003209552623_3408695897", "isim/FPCVT_TB_isim_beh.exe.sim/work/m_00000000003209552623_3408695897.didat");
	xsi_register_executes(pe);
}
