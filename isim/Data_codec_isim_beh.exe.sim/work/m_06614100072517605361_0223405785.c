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
static const char *ng0 = "/home/anderson/Matrix_RGB/Data_codec.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {31, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {128U, 0U};
static unsigned int ng6[] = {192U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {224U, 0U};
static unsigned int ng9[] = {240U, 0U};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {248U, 0U};
static int ng12[] = {5, 0};
static unsigned int ng13[] = {252U, 0U};
static int ng14[] = {6, 0};
static unsigned int ng15[] = {254U, 0U};
static int ng16[] = {7, 0};
static unsigned int ng17[] = {255U, 0U};



static void Initial_21_0(char *t0)
{
    char t3[8];
    char t27[8];
    char t32[24];
    char t43[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    xsi_set_current_line(21, ng0);

LAB2:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1208U);
    t2 = *((char **)t1);
    t1 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t1, t2, 0, 0, 96, 0LL);
    xsi_set_current_line(23, ng0);

LAB3:    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng1)));
    memset(t3, 0, 8);
    t4 = (t2 + 4);
    t5 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB7;

LAB4:    if (t15 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t3) = 1;

LAB7:    t19 = (t3 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);

LAB37:    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng2)));
    memset(t3, 0, 8);
    t5 = (t2 + 4);
    t18 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t18);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t18);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB41;

LAB38:    if (t15 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t3) = 1;

LAB41:    t25 = (t3 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(58, ng0);

LAB45:    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng1)));
    memset(t3, 0, 8);
    t5 = (t2 + 4);
    t18 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t18);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t18);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB49;

LAB46:    if (t15 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t3) = 1;

LAB49:    t25 = (t3 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(62, ng0);

LAB53:    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng7)));
    memset(t3, 0, 8);
    t5 = (t2 + 4);
    t18 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t18);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t18);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB57;

LAB54:    if (t15 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t3) = 1;

LAB57:    t25 = (t3 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(66, ng0);

LAB61:    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng4)));
    memset(t3, 0, 8);
    t5 = (t2 + 4);
    t18 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t18);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t18);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB65;

LAB62:    if (t15 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t3) = 1;

LAB65:    t25 = (t3 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(70, ng0);

LAB69:    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng10)));
    memset(t3, 0, 8);
    t5 = (t2 + 4);
    t18 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t18);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t18);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB73;

LAB70:    if (t15 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t3) = 1;

LAB73:    t25 = (t3 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(74, ng0);

LAB77:    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng12)));
    memset(t3, 0, 8);
    t5 = (t2 + 4);
    t18 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t18);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t18);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB81;

LAB78:    if (t15 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t3) = 1;

LAB81:    t25 = (t3 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(78, ng0);

LAB85:    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng14)));
    memset(t3, 0, 8);
    t5 = (t2 + 4);
    t18 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t18);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t18);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB89;

LAB86:    if (t15 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t3) = 1;

LAB89:    t25 = (t3 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(82, ng0);

LAB93:    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    t1 = ((char*)((ng16)));
    memset(t3, 0, 8);
    t5 = (t2 + 4);
    t18 = (t1 + 4);
    t6 = *((unsigned int *)t2);
    t7 = *((unsigned int *)t1);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t18);
    t11 = (t9 ^ t10);
    t12 = (t8 | t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t18);
    t15 = (t13 | t14);
    t16 = (~(t15));
    t17 = (t12 & t16);
    if (t17 != 0)
        goto LAB97;

LAB94:    if (t15 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t3) = 1;

LAB97:    t25 = (t3 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB98;

LAB99:
LAB1:    return;
LAB6:    t18 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB7;

LAB8:    xsi_set_current_line(23, ng0);

LAB10:    xsi_set_current_line(24, ng0);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t26, t25, 0, 0, 1, 0LL);
    xsi_set_current_line(25, ng0);
    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB11:    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng3)));
    memset(t3, 0, 8);
    xsi_vlog_signed_leq(t3, 32, t4, 32, t5, 32);
    t18 = (t3 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    goto LAB3;

LAB12:    xsi_set_current_line(25, ng0);

LAB14:    xsi_set_current_line(27, ng0);
    t19 = (t0 + 3528);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t28 = (t27 + 4);
    t29 = (t26 + 16);
    t30 = (t26 + 20);
    t11 = *((unsigned int *)t29);
    t12 = (t11 >> 29);
    *((unsigned int *)t27) = t12;
    t13 = *((unsigned int *)t30);
    t14 = (t13 >> 29);
    *((unsigned int *)t28) = t14;
    t15 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t15 & 7U);
    t16 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t16 & 7U);
    t31 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t31, t27, 0, 0, 32, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 3528);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng4)));
    xsi_vlog_unsigned_lshift(t32, 96, t4, 96, t5, 32);
    t18 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t18, t32, 0, 0, 96, 0LL);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);

LAB15:    t5 = ((char*)((ng2)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t33 == 1)
        goto LAB16;

LAB17:    t1 = ((char*)((ng1)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t1, 32);
    if (t33 == 1)
        goto LAB18;

LAB19:    t1 = ((char*)((ng7)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t1, 32);
    if (t33 == 1)
        goto LAB20;

LAB21:    t1 = ((char*)((ng4)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t1, 32);
    if (t33 == 1)
        goto LAB22;

LAB23:    t1 = ((char*)((ng10)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t1, 32);
    if (t33 == 1)
        goto LAB24;

LAB25:    t1 = ((char*)((ng12)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t1, 32);
    if (t33 == 1)
        goto LAB26;

LAB27:    t1 = ((char*)((ng14)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t1, 32);
    if (t33 == 1)
        goto LAB28;

LAB29:    t1 = ((char*)((ng16)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t1, 32);
    if (t33 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng17)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB34:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t18 = (t0 + 3208);
    t19 = (t0 + 3208);
    t25 = (t19 + 72U);
    t26 = *((char **)t25);
    t28 = (t0 + 3208);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 2568);
    t34 = (t31 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_convert_array_indices(t3, t27, t26, t30, 2, 1, t35, 32, 1);
    t36 = (t3 + 4);
    t6 = *((unsigned int *)t36);
    t33 = (!(t6));
    t37 = (t27 + 4);
    t7 = *((unsigned int *)t37);
    t38 = (!(t7));
    t39 = (t33 && t38);
    if (t39 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t18 = ((char*)((ng1)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t18, 32);
    t19 = (t0 + 2568);
    xsi_vlogvar_assign_value(t19, t3, 0, 0, 32);
    goto LAB11;

LAB16:    xsi_set_current_line(36, ng0);
    t18 = ((char*)((ng5)));
    t19 = (t0 + 3368);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 8);
    goto LAB34;

LAB18:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    goto LAB34;

LAB20:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng8)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    goto LAB34;

LAB22:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng9)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    goto LAB34;

LAB24:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng11)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    goto LAB34;

LAB26:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng13)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    goto LAB34;

LAB28:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    goto LAB34;

LAB30:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng17)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    goto LAB34;

LAB35:    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t27);
    t40 = (t8 - t9);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t18, t5, 0, *((unsigned int *)t27), t41);
    goto LAB36;

LAB40:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(54, ng0);

LAB44:    xsi_set_current_line(55, ng0);
    t26 = (t0 + 3208);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3208);
    t31 = (t30 + 72U);
    t34 = *((char **)t31);
    t35 = (t0 + 3208);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t42 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t29, t34, t37, 2, 1, t42, 32, 1);
    t44 = (t0 + 3208);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    t48 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t43, 32, t27, t46, 2, t47, 32U, 1, t48, 32U, 1);
    t49 = (t0 + 2248);
    xsi_vlogvar_assign_value(t49, t43, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t18 = (t0 + 3208);
    t19 = (t18 + 72U);
    t25 = *((char **)t19);
    t26 = (t0 + 3208);
    t28 = (t26 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t3, 8, t5, t25, t29, 2, 1, t30, 32, 1);
    t31 = (t0 + 3208);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    t37 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t27, 32, t3, t35, 2, t36, 32U, 1, t37, 32U, 1);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t27, 0, 0, 32);
    goto LAB37;

LAB48:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(58, ng0);

LAB52:    xsi_set_current_line(59, ng0);
    t26 = (t0 + 3208);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3208);
    t31 = (t30 + 72U);
    t34 = *((char **)t31);
    t35 = (t0 + 3208);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t42 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t29, t34, t37, 2, 1, t42, 32, 1);
    t44 = (t0 + 3208);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    t48 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t43, 32, t27, t46, 2, t47, 32U, 1, t48, 32U, 1);
    t49 = (t0 + 2248);
    xsi_vlogvar_assign_value(t49, t43, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t18 = (t0 + 3208);
    t19 = (t18 + 72U);
    t25 = *((char **)t19);
    t26 = (t0 + 3208);
    t28 = (t26 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t3, 8, t5, t25, t29, 2, 1, t30, 32, 1);
    t31 = (t0 + 3208);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    t37 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t27, 32, t3, t35, 2, t36, 32U, 1, t37, 32U, 1);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t27, 0, 0, 32);
    goto LAB45;

LAB56:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(62, ng0);

LAB60:    xsi_set_current_line(63, ng0);
    t26 = (t0 + 3208);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3208);
    t31 = (t30 + 72U);
    t34 = *((char **)t31);
    t35 = (t0 + 3208);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t42 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t29, t34, t37, 2, 1, t42, 32, 1);
    t44 = (t0 + 3208);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    t48 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t43, 32, t27, t46, 2, t47, 32U, 1, t48, 32U, 1);
    t49 = (t0 + 2248);
    xsi_vlogvar_assign_value(t49, t43, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t18 = (t0 + 3208);
    t19 = (t18 + 72U);
    t25 = *((char **)t19);
    t26 = (t0 + 3208);
    t28 = (t26 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t3, 8, t5, t25, t29, 2, 1, t30, 32, 1);
    t31 = (t0 + 3208);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    t37 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t27, 32, t3, t35, 2, t36, 32U, 1, t37, 32U, 1);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t27, 0, 0, 32);
    goto LAB53;

LAB64:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(66, ng0);

LAB68:    xsi_set_current_line(67, ng0);
    t26 = (t0 + 3208);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3208);
    t31 = (t30 + 72U);
    t34 = *((char **)t31);
    t35 = (t0 + 3208);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t42 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t29, t34, t37, 2, 1, t42, 32, 1);
    t44 = (t0 + 3208);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    t48 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t43, 32, t27, t46, 2, t47, 32U, 1, t48, 32U, 1);
    t49 = (t0 + 2248);
    xsi_vlogvar_assign_value(t49, t43, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t18 = (t0 + 3208);
    t19 = (t18 + 72U);
    t25 = *((char **)t19);
    t26 = (t0 + 3208);
    t28 = (t26 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t3, 8, t5, t25, t29, 2, 1, t30, 32, 1);
    t31 = (t0 + 3208);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    t37 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t27, 32, t3, t35, 2, t36, 32U, 1, t37, 32U, 1);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t27, 0, 0, 32);
    goto LAB61;

LAB72:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(70, ng0);

LAB76:    xsi_set_current_line(71, ng0);
    t26 = (t0 + 3208);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3208);
    t31 = (t30 + 72U);
    t34 = *((char **)t31);
    t35 = (t0 + 3208);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t42 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t29, t34, t37, 2, 1, t42, 32, 1);
    t44 = (t0 + 3208);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    t48 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t43, 32, t27, t46, 2, t47, 32U, 1, t48, 32U, 1);
    t49 = (t0 + 2248);
    xsi_vlogvar_assign_value(t49, t43, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t18 = (t0 + 3208);
    t19 = (t18 + 72U);
    t25 = *((char **)t19);
    t26 = (t0 + 3208);
    t28 = (t26 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t3, 8, t5, t25, t29, 2, 1, t30, 32, 1);
    t31 = (t0 + 3208);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    t37 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t27, 32, t3, t35, 2, t36, 32U, 1, t37, 32U, 1);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t27, 0, 0, 32);
    goto LAB69;

LAB80:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(74, ng0);

LAB84:    xsi_set_current_line(75, ng0);
    t26 = (t0 + 3208);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3208);
    t31 = (t30 + 72U);
    t34 = *((char **)t31);
    t35 = (t0 + 3208);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t42 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t29, t34, t37, 2, 1, t42, 32, 1);
    t44 = (t0 + 3208);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    t48 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t43, 32, t27, t46, 2, t47, 32U, 1, t48, 32U, 1);
    t49 = (t0 + 2248);
    xsi_vlogvar_assign_value(t49, t43, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t18 = (t0 + 3208);
    t19 = (t18 + 72U);
    t25 = *((char **)t19);
    t26 = (t0 + 3208);
    t28 = (t26 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t3, 8, t5, t25, t29, 2, 1, t30, 32, 1);
    t31 = (t0 + 3208);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    t37 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t27, 32, t3, t35, 2, t36, 32U, 1, t37, 32U, 1);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t27, 0, 0, 32);
    goto LAB77;

LAB88:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(78, ng0);

LAB92:    xsi_set_current_line(79, ng0);
    t26 = (t0 + 3208);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3208);
    t31 = (t30 + 72U);
    t34 = *((char **)t31);
    t35 = (t0 + 3208);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t42 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t29, t34, t37, 2, 1, t42, 32, 1);
    t44 = (t0 + 3208);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    t48 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t43, 32, t27, t46, 2, t47, 32U, 1, t48, 32U, 1);
    t49 = (t0 + 2248);
    xsi_vlogvar_assign_value(t49, t43, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t18 = (t0 + 3208);
    t19 = (t18 + 72U);
    t25 = *((char **)t19);
    t26 = (t0 + 3208);
    t28 = (t26 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t3, 8, t5, t25, t29, 2, 1, t30, 32, 1);
    t31 = (t0 + 3208);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    t37 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t27, 32, t3, t35, 2, t36, 32U, 1, t37, 32U, 1);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t27, 0, 0, 32);
    goto LAB85;

LAB96:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(82, ng0);

LAB100:    xsi_set_current_line(83, ng0);
    t26 = (t0 + 3208);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3208);
    t31 = (t30 + 72U);
    t34 = *((char **)t31);
    t35 = (t0 + 3208);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t42 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t29, t34, t37, 2, 1, t42, 32, 1);
    t44 = (t0 + 3208);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    t48 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t43, 32, t27, t46, 2, t47, 32U, 1, t48, 32U, 1);
    t49 = (t0 + 2248);
    xsi_vlogvar_assign_value(t49, t43, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t18 = (t0 + 3208);
    t19 = (t18 + 72U);
    t25 = *((char **)t19);
    t26 = (t0 + 3208);
    t28 = (t26 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t3, 8, t5, t25, t29, 2, 1, t30, 32, 1);
    t31 = (t0 + 3208);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    t37 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t27, 32, t3, t35, 2, t36, 32U, 1, t37, 32U, 1);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t27, 0, 0, 32);
    goto LAB93;

}


extern void work_m_06614100072517605361_0223405785_init()
{
	static char *pe[] = {(void *)Initial_21_0};
	xsi_register_didat("work_m_06614100072517605361_0223405785", "isim/Data_codec_isim_beh.exe.sim/work/m_06614100072517605361_0223405785.didat");
	xsi_register_executes(pe);
}
