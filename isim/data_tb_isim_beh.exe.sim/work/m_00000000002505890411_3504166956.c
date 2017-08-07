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
static const char *ng0 = "C:/Users/Caio/Documents/GitHub/UART_Controller/uart_tx.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {14U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {0, 0};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static int ng12[] = {1, 0};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {200000U, 0U};
static int ng15[] = {2, 0};



static void Cont_124_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3688);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 16777215U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 16777215U);
    t15 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 28, 28, 2U, t15, 4, t4, 24);
    t16 = (t0 + 10080);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 268435455U;
    t22 = t21;
    t23 = (t3 + 4);
    t24 = *((unsigned int *)t3);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 0, 27);
    t29 = (t0 + 9856);
    *((int *)t29) = 1;

LAB1:    return;
}

static void Cont_125_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 16777215U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 16777215U);
    xsi_vlogtype_concat(t3, 28, 28, 2U, t4, 24, t2, 4);
    t16 = (t0 + 10144);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 268435455U;
    t22 = t21;
    t23 = (t3 + 4);
    t24 = *((unsigned int *)t3);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 0, 27);
    t29 = (t0 + 9872);
    *((int *)t29) = 1;

LAB1:    return;
}

static void Cont_126_2(char *t0)
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

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 28);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 28);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = (t0 + 10208);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 3U;
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
    xsi_driver_vfirst_trans(t14, 0, 1);
    t27 = (t0 + 9888);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_127_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 27);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 27);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 10272);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 9904);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_128_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 6560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 26);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 26);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 10336);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 9920);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_129_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 6808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 25);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 25);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 10400);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 9936);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_130_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 7056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 24);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 24);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 10464);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 9952);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Initial_137_7(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(137, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_138_8(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(138, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_139_9(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(139, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Initial_140_10(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(140, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Initial_141_11(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(141, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_143_12(char *t0)
{
    char t13[8];
    char t31[8];
    char t36[8];
    char t44[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
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
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;

LAB0:    t1 = (t0 + 8544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 9968);
    *((int *)t2) = 1;
    t3 = (t0 + 8576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(144, ng0);

LAB5:    xsi_set_current_line(145, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 4648);
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
        goto LAB17;

LAB15:    if (*((unsigned int *)t5) == 0)
        goto LAB14;

LAB16:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB17:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB19;

LAB18:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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
        goto LAB27;

LAB24:    if (t19 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t13) = 1;

LAB27:    t23 = (t13 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 4008);
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
        goto LAB35;

LAB32:    if (t19 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t13) = 1;

LAB35:    t23 = (t13 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(189, ng0);

LAB75:    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 4008);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 4008);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t23 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t13, 32, t5, t14, 2, t23, 32, 1);
    t29 = ((char*)((ng7)));
    memset(t31, 0, 8);
    t30 = (t13 + 4);
    t32 = (t29 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t29);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t32);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t32);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB79;

LAB76:    if (t19 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t31) = 1;

LAB79:    t43 = (t31 + 4);
    t22 = *((unsigned int *)t43);
    t24 = (~(t22));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 4008);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB110;

LAB107:    if (t19 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t13) = 1;

LAB110:    t29 = (t13 + 4);
    t22 = *((unsigned int *)t29);
    t24 = (~(t22));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 4008);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng11)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB137;

LAB134:    if (t19 != 0)
        goto LAB136;

LAB135:    *((unsigned int *)t13) = 1;

LAB137:    t29 = (t13 + 4);
    t22 = *((unsigned int *)t29);
    t24 = (~(t22));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB138;

LAB139:    xsi_set_current_line(218, ng0);

LAB145:    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB140:
LAB113:
LAB82:
LAB38:
LAB30:
LAB22:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(146, ng0);

LAB9:    xsi_set_current_line(147, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(153, ng0);

LAB13:    xsi_set_current_line(154, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t13) = 1;
    goto LAB17;

LAB19:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB18;

LAB20:    xsi_set_current_line(159, ng0);

LAB23:    xsi_set_current_line(160, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB22;

LAB26:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(162, ng0);

LAB31:    xsi_set_current_line(163, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 4, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB30;

LAB34:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(168, ng0);

LAB39:    xsi_set_current_line(170, ng0);
    t29 = (t0 + 1368U);
    t30 = *((char **)t29);
    t29 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t29, t30, 0, 0, 30, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t2) != 0)
        goto LAB42;

LAB43:    t5 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB44;

LAB45:    memcpy(t44, t13, 8);

LAB46:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(184, ng0);

LAB74:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB62:    goto LAB38;

LAB40:    *((unsigned int *)t13) = 1;
    goto LAB43;

LAB42:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB43;

LAB44:    t11 = (t0 + 4488);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memset(t31, 0, 8);
    t23 = (t14 + 4);
    t18 = *((unsigned int *)t23);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t23) == 0)
        goto LAB47;

LAB49:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;

LAB50:    t30 = (t31 + 4);
    t32 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    *((unsigned int *)t31) = t25;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB52;

LAB51:    t34 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t34 & 1U);
    t35 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t35 & 1U);
    memset(t36, 0, 8);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t37) != 0)
        goto LAB55;

LAB56:    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB46;

LAB47:    *((unsigned int *)t31) = 1;
    goto LAB50;

LAB52:    t26 = *((unsigned int *)t31);
    t27 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t26 | t27);
    t28 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t32);
    *((unsigned int *)t30) = (t28 | t33);
    goto LAB51;

LAB53:    *((unsigned int *)t36) = 1;
    goto LAB56;

LAB55:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB56;

LAB57:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB59;

LAB60:    xsi_set_current_line(174, ng0);

LAB63:    xsi_set_current_line(175, ng0);
    t82 = ((char*)((ng1)));
    t83 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t83, t82, 0, 0, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);

LAB64:    t2 = ((char*)((ng1)));
    t68 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t68 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng2)));
    t68 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t68 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng5)));
    t68 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t68 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng6)));
    t68 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t68 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB62;

LAB65:    xsi_set_current_line(178, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB73;

LAB67:    xsi_set_current_line(179, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB73;

LAB69:    xsi_set_current_line(180, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB73;

LAB71:    xsi_set_current_line(181, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB73;

LAB78:    t37 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(194, ng0);

LAB83:    xsi_set_current_line(195, ng0);
    t48 = (t0 + 4168);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t36, 0, 8);
    t58 = (t36 + 4);
    t59 = (t50 + 4);
    t28 = *((unsigned int *)t50);
    t33 = (t28 >> 0);
    t34 = (t33 & 1);
    *((unsigned int *)t36) = t34;
    t35 = *((unsigned int *)t59);
    t38 = (t35 >> 0);
    t39 = (t38 & 1);
    *((unsigned int *)t58) = t39;
    t76 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t76, t36, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 4168);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memset(t13, 0, 8);
    t23 = (t13 + 4);
    t29 = (t14 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t29);
    t10 = (t9 >> 0);
    t15 = (t10 & 1);
    *((unsigned int *)t23) = t15;
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t13);
    t18 = (t16 ^ t17);
    *((unsigned int *)t31) = t18;
    t30 = (t5 + 4);
    t32 = (t13 + 4);
    t37 = (t31 + 4);
    t19 = *((unsigned int *)t30);
    t20 = *((unsigned int *)t32);
    t21 = (t19 | t20);
    *((unsigned int *)t37) = t21;
    t22 = *((unsigned int *)t37);
    t24 = (t22 != 0);
    if (t24 == 1)
        goto LAB84;

LAB85:
LAB86:    t43 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 4008);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB90;

LAB87:    if (t19 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t13) = 1;

LAB90:    t29 = (t13 + 4);
    t22 = *((unsigned int *)t29);
    t24 = (~(t22));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 4008);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng12)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 4, t11, 32);
    t12 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);

LAB93:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t31, 0, 8);
    t11 = (t31 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 1);
    *((unsigned int *)t31) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 1);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t10 & 127U);
    t15 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t15 & 127U);
    t14 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 8, 8, 2U, t14, 1, t31, 7);
    t23 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t23, t13, 0, 0, 8, 0LL);
    goto LAB82;

LAB84:    t25 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t25 | t26);
    goto LAB86;

LAB89:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(198, ng0);
    t30 = (t0 + 2648U);
    t32 = *((char **)t30);
    memset(t36, 0, 8);
    t30 = (t32 + 4);
    t28 = *((unsigned int *)t30);
    t33 = (~(t28));
    t34 = *((unsigned int *)t32);
    t35 = (t34 & t33);
    t38 = (t35 & 1U);
    if (t38 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t30) != 0)
        goto LAB96;

LAB97:    t43 = (t36 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t43);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB98;

LAB99:    t42 = *((unsigned int *)t36);
    t45 = (~(t42));
    t46 = *((unsigned int *)t43);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t43) > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t36) > 0)
        goto LAB104;

LAB105:    memcpy(t31, t49, 8);

LAB106:    t50 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t50, t31, 0, 0, 4, 0LL);
    goto LAB93;

LAB94:    *((unsigned int *)t36) = 1;
    goto LAB97;

LAB96:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB97;

LAB98:    t48 = ((char*)((ng10)));
    goto LAB99;

LAB100:    t49 = ((char*)((ng11)));
    goto LAB101;

LAB102:    xsi_vlog_unsigned_bit_combine(t31, 4, t48, 4, t49, 4);
    goto LAB106;

LAB104:    memcpy(t31, t48, 8);
    goto LAB106;

LAB109:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(203, ng0);

LAB114:    xsi_set_current_line(204, ng0);
    t30 = ((char*)((ng11)));
    t32 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t32, t30, 0, 0, 4, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2808U);
    t12 = *((char **)t11);
    memset(t31, 0, 8);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t11) != 0)
        goto LAB120;

LAB121:    t23 = (t31 + 4);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t23);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB122;

LAB123:    t18 = *((unsigned int *)t31);
    t19 = (~(t18));
    t20 = *((unsigned int *)t23);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t23) > 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t31) > 0)
        goto LAB128;

LAB129:    memcpy(t13, t30, 8);

LAB130:    t22 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t13);
    t25 = (t22 ^ t24);
    *((unsigned int *)t36) = t25;
    t32 = (t5 + 4);
    t37 = (t13 + 4);
    t43 = (t36 + 4);
    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t37);
    t28 = (t26 | t27);
    *((unsigned int *)t43) = t28;
    t33 = *((unsigned int *)t43);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB131;

LAB132:
LAB133:    t48 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t48, t36, 0, 0, 1, 0LL);

LAB117:    goto LAB113;

LAB115:    xsi_set_current_line(206, ng0);
    t5 = (t0 + 2808U);
    t11 = *((char **)t5);
    t5 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, 0, 1, 0LL);
    goto LAB117;

LAB118:    *((unsigned int *)t31) = 1;
    goto LAB121;

LAB120:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB121;

LAB122:    t29 = ((char*)((ng2)));
    goto LAB123;

LAB124:    t30 = ((char*)((ng1)));
    goto LAB125;

LAB126:    xsi_vlog_unsigned_bit_combine(t13, 1, t29, 1, t30, 1);
    goto LAB130;

LAB128:    memcpy(t13, t29, 8);
    goto LAB130;

LAB131:    t35 = *((unsigned int *)t36);
    t38 = *((unsigned int *)t43);
    *((unsigned int *)t36) = (t35 | t38);
    goto LAB133;

LAB136:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB137;

LAB138:    xsi_set_current_line(210, ng0);

LAB141:    xsi_set_current_line(211, ng0);
    t30 = ((char*)((ng2)));
    t32 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t32, t30, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 2968U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB144:    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB140;

LAB142:    xsi_set_current_line(213, ng0);
    t5 = ((char*)((ng13)));
    t11 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    goto LAB144;

}

static void Cont_228_13(char *t0)
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

LAB0:    t1 = (t0 + 8792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10528);
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
    t18 = (t0 + 9984);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_231_14(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(231, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_232_15(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(232, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 28);

LAB1:    return;
}

static void Always_233_16(char *t0)
{
    char t8[8];
    char t25[8];
    char t28[8];
    char t65[8];
    char t72[8];
    char t110[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
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
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t111;

LAB0:    t1 = (t0 + 9536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 10000);
    *((int *)t2) = 1;
    t3 = (t0 + 9568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(234, ng0);

LAB5:    xsi_set_current_line(235, ng0);
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t24, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (!(t16));
    t18 = *((unsigned int *)t5);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB14;

LAB15:    memcpy(t28, t8, 8);

LAB16:    t53 = (t28 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t5) == 0)
        goto LAB27;

LAB29:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB30:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t8) = t17;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB32;

LAB31:    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t26 & 1U);
    t10 = (t8 + 4);
    t27 = *((unsigned int *)t10);
    t29 = (~(t27));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB39;

LAB36:    if (t20 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t8) = 1;

LAB39:    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t27);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB46;

LAB43:    if (t20 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t8) = 1;

LAB46:    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t27);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(251, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 28, t3, 28, t2, 28);
    t4 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t4, t8, 0, 0, 28, 0LL);

LAB49:
LAB42:
LAB35:
LAB26:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t8) = 1;
    goto LAB13;

LAB12:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t6 = (t0 + 1528U);
    t7 = *((char **)t6);
    memset(t25, 0, 8);
    t6 = (t7 + 4);
    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t22 = *((unsigned int *)t7);
    t26 = (t22 & t21);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t6) != 0)
        goto LAB19;

LAB20:    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t25);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t10 = (t8 + 4);
    t23 = (t25 + 4);
    t24 = (t28 + 4);
    t32 = *((unsigned int *)t10);
    t33 = *((unsigned int *)t23);
    t34 = (t32 | t33);
    *((unsigned int *)t24) = t34;
    t35 = *((unsigned int *)t24);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t25) = 1;
    goto LAB20;

LAB19:    t9 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB20;

LAB21:    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t24);
    *((unsigned int *)t28) = (t37 | t38);
    t39 = (t8 + 4);
    t40 = (t25 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t8);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t25);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t51 & t49);
    t52 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t52 & t50);
    goto LAB23;

LAB24:    xsi_set_current_line(238, ng0);
    t59 = (t0 + 2328U);
    t60 = *((char **)t59);
    t59 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t59, t60, 0, 0, 28, 0LL);
    goto LAB26;

LAB27:    *((unsigned int *)t8) = 1;
    goto LAB30;

LAB32:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB31;

LAB33:    xsi_set_current_line(240, ng0);
    t23 = (t0 + 3848);
    t24 = (t23 + 56U);
    t39 = *((char **)t24);
    t40 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 28, t39, 28, t40, 28);
    t53 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t53, t25, 0, 0, 28, 0LL);
    goto LAB35;

LAB38:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(243, ng0);
    t23 = (t0 + 2168U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng15)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_lshift(t25, 28, t24, 28, t23, 32);
    t39 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t39, t25, 0, 0, 28, 0LL);
    goto LAB42;

LAB45:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(245, ng0);

LAB50:    xsi_set_current_line(246, ng0);
    t23 = (t0 + 1688U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t24 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    t34 = *((unsigned int *)t24);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t23) != 0)
        goto LAB53;

LAB54:    t40 = (t25 + 4);
    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t40);
    t41 = (t37 || t38);
    if (t41 > 0)
        goto LAB55;

LAB56:    memcpy(t72, t25, 8);

LAB57:    t102 = (t72 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (~(t103));
    t105 = *((unsigned int *)t72);
    t106 = (t105 & t104);
    t107 = (t106 != 0);
    if (t107 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB73:    goto LAB49;

LAB51:    *((unsigned int *)t25) = 1;
    goto LAB54;

LAB53:    t39 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB54;

LAB55:    t53 = (t0 + 4488);
    t59 = (t53 + 56U);
    t60 = *((char **)t59);
    memset(t28, 0, 8);
    t61 = (t60 + 4);
    t42 = *((unsigned int *)t61);
    t43 = (~(t42));
    t45 = *((unsigned int *)t60);
    t46 = (t45 & t43);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB61;

LAB59:    if (*((unsigned int *)t61) == 0)
        goto LAB58;

LAB60:    t62 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t62) = 1;

LAB61:    t63 = (t28 + 4);
    t64 = (t60 + 4);
    t49 = *((unsigned int *)t60);
    t50 = (~(t49));
    *((unsigned int *)t28) = t50;
    *((unsigned int *)t63) = 0;
    if (*((unsigned int *)t64) != 0)
        goto LAB63;

LAB62:    t56 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t56 & 1U);
    t57 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t57 & 1U);
    memset(t65, 0, 8);
    t66 = (t28 + 4);
    t58 = *((unsigned int *)t66);
    t67 = (~(t58));
    t68 = *((unsigned int *)t28);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t66) != 0)
        goto LAB66;

LAB67:    t73 = *((unsigned int *)t25);
    t74 = *((unsigned int *)t65);
    t75 = (t73 & t74);
    *((unsigned int *)t72) = t75;
    t76 = (t25 + 4);
    t77 = (t65 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB57;

LAB58:    *((unsigned int *)t28) = 1;
    goto LAB61;

LAB63:    t51 = *((unsigned int *)t28);
    t52 = *((unsigned int *)t64);
    *((unsigned int *)t28) = (t51 | t52);
    t54 = *((unsigned int *)t63);
    t55 = *((unsigned int *)t64);
    *((unsigned int *)t63) = (t54 | t55);
    goto LAB62;

LAB64:    *((unsigned int *)t65) = 1;
    goto LAB67;

LAB66:    t71 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB67;

LAB68:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    t86 = (t25 + 4);
    t87 = (t65 + 4);
    t88 = *((unsigned int *)t25);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (~(t90));
    t92 = *((unsigned int *)t65);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (~(t94));
    t44 = (t89 & t91);
    t48 = (t93 & t95);
    t96 = (~(t44));
    t97 = (~(t48));
    t98 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t98 & t96);
    t99 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t99 & t97);
    t100 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t100 & t96);
    t101 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t101 & t97);
    goto LAB70;

LAB71:    xsi_set_current_line(247, ng0);
    t108 = (t0 + 2168U);
    t109 = *((char **)t108);
    t108 = ((char*)((ng2)));
    memset(t110, 0, 8);
    xsi_vlog_unsigned_minus(t110, 28, t109, 28, t108, 28);
    t111 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t111, t110, 0, 0, 28, 0LL);
    goto LAB73;

}


extern void work_m_00000000002505890411_3504166956_init()
{
	static char *pe[] = {(void *)Cont_124_0,(void *)Cont_125_1,(void *)Cont_126_2,(void *)Cont_127_3,(void *)Cont_128_4,(void *)Cont_129_5,(void *)Cont_130_6,(void *)Initial_137_7,(void *)Initial_138_8,(void *)Initial_139_9,(void *)Initial_140_10,(void *)Initial_141_11,(void *)Always_143_12,(void *)Cont_228_13,(void *)Initial_231_14,(void *)Initial_232_15,(void *)Always_233_16};
	xsi_register_didat("work_m_00000000002505890411_3504166956", "isim/data_tb_isim_beh.exe.sim/work/m_00000000002505890411_3504166956.didat");
	xsi_register_executes(pe);
}
