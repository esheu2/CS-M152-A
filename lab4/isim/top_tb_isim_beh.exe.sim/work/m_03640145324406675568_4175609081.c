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
static const char *ng0 = "/home/ise/Desktop/CS-M152-A/lab4/sigmoid_approx.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {1023410176U, 0U};
static unsigned int ng3[] = {1062731776U, 0U};
static unsigned int ng4[] = {1040187392U, 0U};
static unsigned int ng5[] = {1059061760U, 0U};
static unsigned int ng6[] = {1048576000U, 0U};
static unsigned int ng7[] = {1056964608U, 0U};
static unsigned int ng8[] = {3212836864U, 0U};
static unsigned int ng9[] = {1084227584U, 0U};
static unsigned int ng10[] = {1065353216U, 0U};
static int ng11[] = {0, 0};
static unsigned int ng12[] = {1075314688U, 0U};



static void Always_37_0(char *t0)
{
    char t6[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 8112);
    *((int *)t2) = 1;
    t3 = (t0 + 5592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t5, 32, t4, 32);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_rshift(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 32, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Cont_47_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8224);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_48_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8288);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_50_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8352);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_51_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8416);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_53_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_54_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 8544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_56_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 8608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Always_112_8(char *t0)
{
    char t8[8];
    char t18[8];
    char t37[8];
    char t38[8];
    char t40[8];
    char t76[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
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
    char *t39;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 7544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 8128);
    *((int *)t2) = 1;
    t3 = (t0 + 7576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(113, ng0);

LAB5:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 4488);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB23;

LAB22:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB25;

LAB24:    *((unsigned int *)t8) = 1;

LAB25:    memset(t18, 0, 8);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t10) != 0)
        goto LAB29;

LAB30:    t12 = (t18 + 4);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t12);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB31;

LAB32:    memcpy(t40, t18, 8);

LAB33:    t70 = (t40 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t40);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB58;

LAB57:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB58;

LAB61:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB60;

LAB59:    *((unsigned int *)t8) = 1;

LAB60:    memset(t18, 0, 8);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t10) != 0)
        goto LAB64;

LAB65:    t12 = (t18 + 4);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t12);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB66;

LAB67:    memcpy(t40, t18, 8);

LAB68:    t70 = (t40 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t40);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB93;

LAB92:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB93;

LAB96:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB95;

LAB94:    *((unsigned int *)t8) = 1;

LAB95:    memset(t18, 0, 8);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t10) != 0)
        goto LAB99;

LAB100:    t12 = (t18 + 4);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t12);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB101;

LAB102:    memcpy(t40, t18, 8);

LAB103:    t70 = (t40 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t40);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB116;

LAB117:
LAB118:
LAB83:
LAB48:
LAB13:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(115, ng0);

LAB14:    xsi_set_current_line(116, ng0);
    t19 = (t0 + 4648);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t22) == 0)
        goto LAB15;

LAB17:    t28 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t28) = 1;

LAB18:    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t18);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    goto LAB13;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(117, ng0);
    t35 = ((char*)((ng10)));
    t36 = (t0 + 4328);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 32);
    goto LAB21;

LAB23:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB27:    *((unsigned int *)t18) = 1;
    goto LAB30;

LAB29:    t11 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB30;

LAB31:    t19 = (t0 + 4488);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng9)));
    memset(t37, 0, 8);
    t28 = (t21 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB35;

LAB34:    t29 = (t22 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB36;

LAB37:    memset(t38, 0, 8);
    t36 = (t37 + 4);
    t26 = *((unsigned int *)t36);
    t27 = (~(t26));
    t30 = *((unsigned int *)t37);
    t31 = (t30 & t27);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t36) != 0)
        goto LAB41;

LAB42:    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t38);
    t41 = (t33 & t34);
    *((unsigned int *)t40) = t41;
    t42 = (t18 + 4);
    t43 = (t38 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB33;

LAB35:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t37) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t38) = 1;
    goto LAB42;

LAB41:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB42;

LAB43:    t50 = *((unsigned int *)t40);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t50 | t51);
    t52 = (t18 + 4);
    t53 = (t38 + 4);
    t54 = *((unsigned int *)t18);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t68 & t64);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    goto LAB45;

LAB46:    xsi_set_current_line(123, ng0);

LAB49:    xsi_set_current_line(124, ng0);
    t77 = (t0 + 4648);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t76, 0, 8);
    t80 = (t79 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB53;

LAB51:    if (*((unsigned int *)t80) == 0)
        goto LAB50;

LAB52:    t86 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t86) = 1;

LAB53:    t87 = (t76 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t76);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB56:    goto LAB48;

LAB50:    *((unsigned int *)t76) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(125, ng0);
    t93 = (t0 + 1688U);
    t94 = *((char **)t93);
    t93 = (t0 + 4328);
    xsi_vlogvar_assign_value(t93, t94, 0, 0, 32);
    goto LAB56;

LAB58:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB60;

LAB62:    *((unsigned int *)t18) = 1;
    goto LAB65;

LAB64:    t11 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB65;

LAB66:    t19 = (t0 + 4488);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng12)));
    memset(t37, 0, 8);
    t28 = (t21 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB70;

LAB69:    t29 = (t22 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB71;

LAB72:    memset(t38, 0, 8);
    t36 = (t37 + 4);
    t26 = *((unsigned int *)t36);
    t27 = (~(t26));
    t30 = *((unsigned int *)t37);
    t31 = (t30 & t27);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t36) != 0)
        goto LAB76;

LAB77:    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t38);
    t41 = (t33 & t34);
    *((unsigned int *)t40) = t41;
    t42 = (t18 + 4);
    t43 = (t38 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB68;

LAB70:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB72;

LAB71:    *((unsigned int *)t37) = 1;
    goto LAB72;

LAB74:    *((unsigned int *)t38) = 1;
    goto LAB77;

LAB76:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB77;

LAB78:    t50 = *((unsigned int *)t40);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t50 | t51);
    t52 = (t18 + 4);
    t53 = (t38 + 4);
    t54 = *((unsigned int *)t18);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t68 & t64);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    goto LAB80;

LAB81:    xsi_set_current_line(131, ng0);

LAB84:    xsi_set_current_line(132, ng0);
    t77 = (t0 + 4648);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t76, 0, 8);
    t80 = (t79 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB88;

LAB86:    if (*((unsigned int *)t80) == 0)
        goto LAB85;

LAB87:    t86 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t86) = 1;

LAB88:    t87 = (t76 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t76);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB91:    goto LAB83;

LAB85:    *((unsigned int *)t76) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(133, ng0);
    t93 = (t0 + 2008U);
    t94 = *((char **)t93);
    t93 = (t0 + 4328);
    xsi_vlogvar_assign_value(t93, t94, 0, 0, 32);
    goto LAB91;

LAB93:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB95;

LAB97:    *((unsigned int *)t18) = 1;
    goto LAB100;

LAB99:    t11 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB100;

LAB101:    t19 = (t0 + 4488);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng10)));
    memset(t37, 0, 8);
    t28 = (t21 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB105;

LAB104:    t29 = (t22 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB105;

LAB108:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB106;

LAB107:    memset(t38, 0, 8);
    t36 = (t37 + 4);
    t26 = *((unsigned int *)t36);
    t27 = (~(t26));
    t30 = *((unsigned int *)t37);
    t31 = (t30 & t27);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t36) != 0)
        goto LAB111;

LAB112:    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t38);
    t41 = (t33 & t34);
    *((unsigned int *)t40) = t41;
    t42 = (t18 + 4);
    t43 = (t38 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB113;

LAB114:
LAB115:    goto LAB103;

LAB105:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB107;

LAB106:    *((unsigned int *)t37) = 1;
    goto LAB107;

LAB109:    *((unsigned int *)t38) = 1;
    goto LAB112;

LAB111:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB112;

LAB113:    t50 = *((unsigned int *)t40);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t50 | t51);
    t52 = (t18 + 4);
    t53 = (t38 + 4);
    t54 = *((unsigned int *)t18);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t68 & t64);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    goto LAB115;

LAB116:    xsi_set_current_line(139, ng0);

LAB119:    xsi_set_current_line(140, ng0);
    t77 = (t0 + 4648);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t76, 0, 8);
    t80 = (t79 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB123;

LAB121:    if (*((unsigned int *)t80) == 0)
        goto LAB120;

LAB122:    t86 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t86) = 1;

LAB123:    t87 = (t76 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t76);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB126:    goto LAB118;

LAB120:    *((unsigned int *)t76) = 1;
    goto LAB123;

LAB124:    xsi_set_current_line(141, ng0);
    t93 = (t0 + 2328U);
    t94 = *((char **)t93);
    t93 = (t0 + 4328);
    xsi_vlogvar_assign_value(t93, t94, 0, 0, 32);
    goto LAB126;

}

static void Cont_147_9(char *t0)
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

LAB0:    t1 = (t0 + 7792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8672);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 8144);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_03640145324406675568_4175609081_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Cont_47_1,(void *)Cont_48_2,(void *)Cont_50_3,(void *)Cont_51_4,(void *)Cont_53_5,(void *)Cont_54_6,(void *)Cont_56_7,(void *)Always_112_8,(void *)Cont_147_9};
	xsi_register_didat("work_m_03640145324406675568_4175609081", "isim/top_tb_isim_beh.exe.sim/work/m_03640145324406675568_4175609081.didat");
	xsi_register_executes(pe);
}
