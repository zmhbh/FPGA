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
static const char *ng0 = "C:/Users/hjy/Desktop/FPGA-HJY/serial_ise/tb_lx9board_main.v";
static unsigned int ng1[] = {7U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {65U, 0U};
static unsigned int ng11[] = {66U, 0U};
static unsigned int ng12[] = {67U, 0U};
static int ng13[] = {567, 0};
static const char *ng14 = "%h";
static const char *ng15 = "*******DONE********";



static void Always_84_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 6496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);

LAB4:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t0 + 3976);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 6304);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB9:    goto LAB2;

}

static void Always_89_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 6744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);

LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3176);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t0 + 3176);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 6552);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB9:    goto LAB2;

}

static void Always_96_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 8056);
    *((int *)t2) = 1;
    t3 = (t0 + 7024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 5096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    goto LAB2;

}

static void Always_98_3(char *t0)
{
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 7240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8072);
    *((int *)t2) = 1;
    t3 = (t0 + 7272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 4936);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB22:    goto LAB2;

LAB6:    xsi_set_current_line(101, ng0);
    t9 = (t0 + 4616);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB25:    goto LAB22;

LAB8:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 4296);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 4456);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t20, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB27;

LAB26:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t5) < *((unsigned int *)t10))
        goto LAB29;

LAB28:    *((unsigned int *)t20) = 1;

LAB29:    t19 = (t20 + 4);
    t13 = *((unsigned int *)t19);
    t14 = (~(t13));
    t15 = *((unsigned int *)t20);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB33:    goto LAB22;

LAB10:    xsi_set_current_line(105, ng0);

LAB34:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB22;

LAB12:    xsi_set_current_line(106, ng0);

LAB35:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB22;

LAB14:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 5416);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    memset(t20, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB37;

LAB36:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB38;

LAB39:    t12 = (t20 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t20);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB43:    goto LAB22;

LAB16:    xsi_set_current_line(109, ng0);

LAB44:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB22;

LAB18:    xsi_set_current_line(110, ng0);

LAB45:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB22;

LAB23:    xsi_set_current_line(101, ng0);
    t18 = ((char*)((ng2)));
    t19 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 3, 0LL);
    goto LAB25;

LAB27:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(103, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 0LL);
    goto LAB33;

LAB37:    t11 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t20) = 1;
    goto LAB39;

LAB41:    xsi_set_current_line(107, ng0);
    t18 = ((char*)((ng7)));
    t19 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 3, 0LL);
    goto LAB43;

}

static void Always_115_4(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 7488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 8088);
    *((int *)t2) = 1;
    t3 = (t0 + 7520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);
    t4 = (t0 + 4936);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:
LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(117, ng0);

LAB17:    xsi_set_current_line(117, ng0);
    t9 = (t0 + 4296);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 5256);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 6);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5416);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    goto LAB16;

LAB8:    xsi_set_current_line(118, ng0);

LAB18:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 4456);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5256);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 6);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5416);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    goto LAB16;

LAB10:    xsi_set_current_line(119, ng0);

LAB19:    xsi_set_current_line(119, ng0);
    t3 = (t0 + 5256);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5416);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_mod(t13, 6, t5, 6, t10, 6);
    t11 = (t0 + 5576);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 6);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5256);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5416);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    goto LAB16;

LAB12:    xsi_set_current_line(120, ng0);

LAB20:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 5256);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 4776);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 6);
    goto LAB16;

}

static void Initial_125_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
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
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 7736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);

LAB4:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 7544);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 8104);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 8120);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 7544);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 8136);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 8152);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 8168);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 8184);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 8200);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 8216);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 8232);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 8248);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(194, ng0);

LAB17:    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB21;

LAB18:    if (t16 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t4) = 1;

LAB21:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB23;

LAB22:    t26 = (t0 + 8264);
    *((int *)t26) = 1;
    t27 = (t0 + 7736U);
    *((char **)t27) = &&LAB17;
    goto LAB1;

LAB20:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB23:    t28 = (t0 + 8264);
    *((int *)t28) = 0;
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 8280);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t3, 8);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 8296);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(202, ng0);

LAB26:    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB30;

LAB27:    if (t16 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t4) = 1;

LAB30:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB32;

LAB31:    t26 = (t0 + 8312);
    *((int *)t26) = 1;
    t27 = (t0 + 7736U);
    *((char **)t27) = &&LAB26;
    goto LAB1;

LAB29:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB30;

LAB32:    t28 = (t0 + 8312);
    *((int *)t28) = 0;
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 8328);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t3, 8);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 8344);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(210, ng0);

LAB35:    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB39;

LAB36:    if (t16 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t4) = 1;

LAB39:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB41;

LAB40:    t26 = (t0 + 8360);
    *((int *)t26) = 1;
    t27 = (t0 + 7736U);
    *((char **)t27) = &&LAB35;
    goto LAB1;

LAB38:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB39;

LAB41:    t28 = (t0 + 8360);
    *((int *)t28) = 0;
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 8376);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t3, 8);
    xsi_set_current_line(217, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    goto LAB1;

}


extern void work_m_00000000001207389822_4236699398_init()
{
	static char *pe[] = {(void *)Always_84_0,(void *)Always_89_1,(void *)Always_96_2,(void *)Always_98_3,(void *)Always_115_4,(void *)Initial_125_5};
	xsi_register_didat("work_m_00000000001207389822_4236699398", "isim/lx9example_tb_isim_beh.exe.sim/work/m_00000000001207389822_4236699398.didat");
	xsi_register_executes(pe);
}
