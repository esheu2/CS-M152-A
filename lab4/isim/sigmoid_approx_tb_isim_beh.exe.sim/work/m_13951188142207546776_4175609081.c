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
static unsigned int ng8[] = {1084227584U, 0U};
static unsigned int ng9[] = {1065353216U, 0U};
static unsigned int ng10[] = {1075314688U, 0U};
static int ng11[] = {0, 0};



static void Cont_35_0(char *t0)
{
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 32, t3, 32, t2, 32);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 7072);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 6976);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7136);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_41_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7200);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_43_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7264);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_44_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7328);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_46_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7392);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_47_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7456);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Always_89_7(char *t0)
{
    char t6[8];
    char t18[8];
    char t22[8];
    char t26[8];
    char t34[8];
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
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
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
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;

LAB0:    t1 = (t0 + 6656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6992);
    *((int *)t2) = 1;
    t3 = (t0 + 6688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB16;

LAB15:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;

LAB18:    memset(t18, 0, 8);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t8) != 0)
        goto LAB22;

LAB23:    t10 = (t18 + 4);
    t19 = *((unsigned int *)t18);
    t20 = *((unsigned int *)t10);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB24;

LAB25:    memcpy(t34, t18, 8);

LAB26:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB44;

LAB43:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB46;

LAB45:    *((unsigned int *)t6) = 1;

LAB46:    memset(t18, 0, 8);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t8) != 0)
        goto LAB50;

LAB51:    t10 = (t18 + 4);
    t19 = *((unsigned int *)t18);
    t20 = *((unsigned int *)t10);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB52;

LAB53:    memcpy(t34, t18, 8);

LAB54:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB72;

LAB71:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB72;

LAB75:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB74;

LAB73:    *((unsigned int *)t6) = 1;

LAB74:    memset(t18, 0, 8);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t8) != 0)
        goto LAB78;

LAB79:    t10 = (t18 + 4);
    t19 = *((unsigned int *)t18);
    t20 = *((unsigned int *)t10);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB80;

LAB81:    memcpy(t34, t18, 8);

LAB82:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB95;

LAB96:
LAB97:
LAB69:
LAB41:
LAB13:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(92, ng0);

LAB14:    xsi_set_current_line(93, ng0);
    t16 = ((char*)((ng9)));
    t17 = (t0 + 4008);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 32);
    goto LAB13;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t18) = 1;
    goto LAB23;

LAB22:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB23;

LAB24:    t16 = (t0 + 1528U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng8)));
    memset(t22, 0, 8);
    t23 = (t17 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB28;

LAB27:    t24 = (t16 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t17) < *((unsigned int *)t16))
        goto LAB29;

LAB30:    memset(t26, 0, 8);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t22);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t27) != 0)
        goto LAB34;

LAB35:    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t18 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB26;

LAB28:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB30;

LAB29:    *((unsigned int *)t22) = 1;
    goto LAB30;

LAB32:    *((unsigned int *)t26) = 1;
    goto LAB35;

LAB34:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB35;

LAB36:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t18 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t18);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB38;

LAB39:    xsi_set_current_line(97, ng0);

LAB42:    xsi_set_current_line(98, ng0);
    t72 = (t0 + 1848U);
    t73 = *((char **)t72);
    t72 = (t0 + 4008);
    xsi_vlogvar_assign_value(t72, t73, 0, 0, 32);
    goto LAB41;

LAB44:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB46;

LAB48:    *((unsigned int *)t18) = 1;
    goto LAB51;

LAB50:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB51;

LAB52:    t16 = (t0 + 1528U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng10)));
    memset(t22, 0, 8);
    t23 = (t17 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB56;

LAB55:    t24 = (t16 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t17) < *((unsigned int *)t16))
        goto LAB57;

LAB58:    memset(t26, 0, 8);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t22);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t27) != 0)
        goto LAB62;

LAB63:    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t18 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB54;

LAB56:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB58;

LAB57:    *((unsigned int *)t22) = 1;
    goto LAB58;

LAB60:    *((unsigned int *)t26) = 1;
    goto LAB63;

LAB62:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB63;

LAB64:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t18 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t18);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB66;

LAB67:    xsi_set_current_line(102, ng0);

LAB70:    xsi_set_current_line(103, ng0);
    t72 = (t0 + 2168U);
    t73 = *((char **)t72);
    t72 = (t0 + 4008);
    xsi_vlogvar_assign_value(t72, t73, 0, 0, 32);
    goto LAB69;

LAB72:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB74;

LAB76:    *((unsigned int *)t18) = 1;
    goto LAB79;

LAB78:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB79;

LAB80:    t16 = (t0 + 1528U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng9)));
    memset(t22, 0, 8);
    t23 = (t17 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB84;

LAB83:    t24 = (t16 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB84;

LAB87:    if (*((unsigned int *)t17) < *((unsigned int *)t16))
        goto LAB85;

LAB86:    memset(t26, 0, 8);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t22);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t27) != 0)
        goto LAB90;

LAB91:    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t18 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB92;

LAB93:
LAB94:    goto LAB82;

LAB84:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB86;

LAB85:    *((unsigned int *)t22) = 1;
    goto LAB86;

LAB88:    *((unsigned int *)t26) = 1;
    goto LAB91;

LAB90:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB91;

LAB92:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t18 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t18);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB94;

LAB95:    xsi_set_current_line(107, ng0);

LAB98:    xsi_set_current_line(108, ng0);
    t72 = (t0 + 2488U);
    t73 = *((char **)t72);
    t72 = (t0 + 4008);
    xsi_vlogvar_assign_value(t72, t73, 0, 0, 32);
    goto LAB97;

}


extern void work_m_13951188142207546776_4175609081_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_40_1,(void *)Cont_41_2,(void *)Cont_43_3,(void *)Cont_44_4,(void *)Cont_46_5,(void *)Cont_47_6,(void *)Always_89_7};
	xsi_register_didat("work_m_13951188142207546776_4175609081", "isim/sigmoid_approx_tb_isim_beh.exe.sim/work/m_13951188142207546776_4175609081.didat");
	xsi_register_executes(pe);
}
