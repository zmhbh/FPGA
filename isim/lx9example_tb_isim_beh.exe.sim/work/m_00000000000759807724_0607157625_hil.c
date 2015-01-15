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
static int ng0[] = {0, 0};
static const char *ng1 = "C:/Users/hjy/Desktop/FPGA-HJY/serial_ise/isim/hwcosim/lx9board_main.hwc";



static char *get_hwc_handle(char *t1)
{
    char *t0;

LAB0:    t0 = (char *)ng0;

LAB1:    return t0;
}

static char *get_hwc_file(char *t1)
{
    char *t0;

LAB0:    t0 = (char *)ng1;

LAB1:    return t0;
}

static void AHIL_INITIALIZE(char *t0)
{
    char t4[8];
    char t6[8];
    char t8[8];
    char t10[8];
    char t12[8];
    char t14[8];
    char t16[8];
    char t18[8];
    char t19[8];
    char t20[8];
    char t25[8];
    char t26[8];
    char t32[8];
    char t33[8];
    char t39[8];
    char t40[8];
    char t46[8];
    char t47[8];
    char t53[8];
    char t54[8];
    char t56[8];
    char t57[8];
    char t63[8];
    char t64[8];
    char t70[8];
    char t71[8];
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t9;
    char *t11;
    char *t13;
    char *t15;
    char *t17;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t55;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;

LAB0:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_hil_cvt_vlog_isimtosysgen(t4, t3, 1);
    xsi_hil_write_bit_vector(ng0, 0, 1, t4);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    xsi_hil_cvt_vlog_isimtosysgen(t6, t5, 1);
    xsi_hil_write_bit_vector(ng0, 1, 1, t6);
    t2 = (t0 + 1368U);
    t7 = *((char **)t2);
    xsi_hil_cvt_vlog_isimtosysgen(t8, t7, 1);
    xsi_hil_write_bit_vector(ng0, 2, 1, t8);
    t2 = (t0 + 2488U);
    t9 = *((char **)t2);
    xsi_hil_cvt_vlog_isimtosysgen(t10, t9, 1);
    xsi_hil_write_bit_vector(ng0, 3, 1, t10);
    t2 = (t0 + 2648U);
    t11 = *((char **)t2);
    xsi_hil_cvt_vlog_isimtosysgen(t12, t11, 1);
    xsi_hil_write_bit_vector(ng0, 4, 1, t12);
    t2 = (t0 + 2808U);
    t13 = *((char **)t2);
    xsi_hil_cvt_vlog_isimtosysgen(t14, t13, 8);
    xsi_hil_write_bit_vector(ng0, 5, 8, t14);
    t2 = (t0 + 3448U);
    t15 = *((char **)t2);
    xsi_hil_cvt_vlog_isimtosysgen(t16, t15, 1);
    xsi_hil_write_bit_vector(ng0, 6, 1, t16);
    t2 = (t0 + 3608U);
    t17 = *((char **)t2);
    xsi_hil_cvt_vlog_isimtosysgen(t18, t17, 1);
    xsi_hil_write_bit_vector(ng0, 7, 1, t18);
    xsi_hil_read_bit_vector(ng0, 0, 1, t19);
    xsi_hil_cvt_vlog_sysgentoisim(t20, t19, 1);
    t2 = (t0 + 5840);
    t21 = (t2 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 8);
    xsi_driver_vfirst_trans(t2, 0, 0);
    xsi_hil_read_bit_vector(ng0, 1, 1, t25);
    xsi_hil_cvt_vlog_sysgentoisim(t26, t25, 1);
    t27 = (t0 + 5904);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t26, 8);
    xsi_driver_vfirst_trans(t27, 0, 0);
    xsi_hil_read_bit_vector(ng0, 2, 1, t32);
    xsi_hil_cvt_vlog_sysgentoisim(t33, t32, 1);
    t34 = (t0 + 5968);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t33, 8);
    xsi_driver_vfirst_trans(t34, 0, 0);
    xsi_hil_read_bit_vector(ng0, 3, 1, t39);
    xsi_hil_cvt_vlog_sysgentoisim(t40, t39, 1);
    t41 = (t0 + 6032);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t40, 8);
    xsi_driver_vfirst_trans(t41, 0, 0);
    xsi_hil_read_bit_vector(ng0, 4, 1, t46);
    xsi_hil_cvt_vlog_sysgentoisim(t47, t46, 1);
    t48 = (t0 + 6096);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memcpy(t52, t47, 8);
    xsi_driver_vfirst_trans(t48, 0, 0);
    xsi_hil_read_bit_vector(ng0, 5, 1, t53);
    xsi_hil_cvt_vlog_sysgentoisim(t54, t53, 1);
    t55 = (t0 + 4008);
    xsi_vlogvar_generic_wait_assign_value(t55, t54, 2, 0, 0, 1, 0LL);
    xsi_hil_read_bit_vector(ng0, 6, 8, t56);
    xsi_hil_cvt_vlog_sysgentoisim(t57, t56, 8);
    t58 = (t0 + 6160);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memcpy(t62, t57, 8);
    xsi_driver_vfirst_trans(t58, 0, 7);
    xsi_hil_read_bit_vector(ng0, 7, 1, t63);
    xsi_hil_cvt_vlog_sysgentoisim(t64, t63, 1);
    t65 = (t0 + 6224);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    memcpy(t69, t64, 8);
    xsi_driver_vfirst_trans(t65, 0, 0);
    xsi_hil_read_bit_vector(ng0, 8, 1, t70);
    xsi_hil_cvt_vlog_sysgentoisim(t71, t70, 1);
    t72 = (t0 + 6288);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    memcpy(t76, t71, 8);
    xsi_driver_vfirst_trans(t72, 0, 0);

LAB1:    return;
}

static void AHIL_CLK_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t10[8];
    char t11[8];
    char t17[8];
    char t18[8];
    char t24[8];
    char t25[8];
    char t31[8];
    char t32[8];
    char t38[8];
    char t39[8];
    char t41[8];
    char t42[8];
    char t48[8];
    char t49[8];
    char t55[8];
    char t56[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t40;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5744);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_hil_run(ng0, 1);
    xsi_hil_read_bit_vector(ng0, 0, 1, t3);
    xsi_hil_cvt_vlog_sysgentoisim(t4, t3, 1);
    t5 = (t0 + 5840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 0);
    xsi_hil_read_bit_vector(ng0, 1, 1, t10);
    xsi_hil_cvt_vlog_sysgentoisim(t11, t10, 1);
    t12 = (t0 + 5904);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 8);
    xsi_driver_vfirst_trans(t12, 0, 0);
    xsi_hil_read_bit_vector(ng0, 2, 1, t17);
    xsi_hil_cvt_vlog_sysgentoisim(t18, t17, 1);
    t19 = (t0 + 5968);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t18, 8);
    xsi_driver_vfirst_trans(t19, 0, 0);
    xsi_hil_read_bit_vector(ng0, 3, 1, t24);
    xsi_hil_cvt_vlog_sysgentoisim(t25, t24, 1);
    t26 = (t0 + 6032);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t25, 8);
    xsi_driver_vfirst_trans(t26, 0, 0);
    xsi_hil_read_bit_vector(ng0, 4, 1, t31);
    xsi_hil_cvt_vlog_sysgentoisim(t32, t31, 1);
    t33 = (t0 + 6096);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t32, 8);
    xsi_driver_vfirst_trans(t33, 0, 0);
    xsi_hil_read_bit_vector(ng0, 5, 1, t38);
    xsi_hil_cvt_vlog_sysgentoisim(t39, t38, 1);
    t40 = (t0 + 4008);
    xsi_vlogvar_generic_wait_assign_value(t40, t39, 2, 0, 0, 1, 0LL);
    xsi_hil_read_bit_vector(ng0, 6, 8, t41);
    xsi_hil_cvt_vlog_sysgentoisim(t42, t41, 8);
    t43 = (t0 + 6160);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t42, 8);
    xsi_driver_vfirst_trans(t43, 0, 7);
    xsi_hil_read_bit_vector(ng0, 7, 1, t48);
    xsi_hil_cvt_vlog_sysgentoisim(t49, t48, 1);
    t50 = (t0 + 6224);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memcpy(t54, t49, 8);
    xsi_driver_vfirst_trans(t50, 0, 0);
    xsi_hil_read_bit_vector(ng0, 8, 1, t55);
    xsi_hil_cvt_vlog_sysgentoisim(t56, t55, 1);
    t57 = (t0 + 6288);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memcpy(t61, t56, 8);
    xsi_driver_vfirst_trans(t57, 0, 0);
    goto LAB2;

}

static void AHIL_INPUTS(char *t0)
{
    char t6[8];
    char t8[8];
    char t10[8];
    char t12[8];
    char t14[8];
    char t16[8];
    char t18[8];
    char t20[8];
    char t21[8];
    char t22[8];
    char t27[8];
    char t28[8];
    char t34[8];
    char t35[8];
    char t41[8];
    char t42[8];
    char t48[8];
    char t49[8];
    char t55[8];
    char t56[8];
    char t58[8];
    char t59[8];
    char t65[8];
    char t66[8];
    char t72[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    char *t11;
    char *t13;
    char *t15;
    char *t17;
    char *t19;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t57;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5760);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    xsi_hil_cvt_vlog_isimtosysgen(t6, t5, 1);
    xsi_hil_write_bit_vector(ng0, 0, 1, t6);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    xsi_hil_cvt_vlog_isimtosysgen(t8, t7, 1);
    xsi_hil_write_bit_vector(ng0, 1, 1, t8);
    t4 = (t0 + 1368U);
    t9 = *((char **)t4);
    xsi_hil_cvt_vlog_isimtosysgen(t10, t9, 1);
    xsi_hil_write_bit_vector(ng0, 2, 1, t10);
    t4 = (t0 + 2488U);
    t11 = *((char **)t4);
    xsi_hil_cvt_vlog_isimtosysgen(t12, t11, 1);
    xsi_hil_write_bit_vector(ng0, 3, 1, t12);
    t4 = (t0 + 2648U);
    t13 = *((char **)t4);
    xsi_hil_cvt_vlog_isimtosysgen(t14, t13, 1);
    xsi_hil_write_bit_vector(ng0, 4, 1, t14);
    t4 = (t0 + 2808U);
    t15 = *((char **)t4);
    xsi_hil_cvt_vlog_isimtosysgen(t16, t15, 8);
    xsi_hil_write_bit_vector(ng0, 5, 8, t16);
    t4 = (t0 + 3448U);
    t17 = *((char **)t4);
    xsi_hil_cvt_vlog_isimtosysgen(t18, t17, 1);
    xsi_hil_write_bit_vector(ng0, 6, 1, t18);
    t4 = (t0 + 3608U);
    t19 = *((char **)t4);
    xsi_hil_cvt_vlog_isimtosysgen(t20, t19, 1);
    xsi_hil_write_bit_vector(ng0, 7, 1, t20);
    xsi_hil_read_bit_vector(ng0, 0, 1, t21);
    xsi_hil_cvt_vlog_sysgentoisim(t22, t21, 1);
    t4 = (t0 + 5840);
    t23 = (t4 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t22, 8);
    xsi_driver_vfirst_trans(t4, 0, 0);
    xsi_hil_read_bit_vector(ng0, 1, 1, t27);
    xsi_hil_cvt_vlog_sysgentoisim(t28, t27, 1);
    t29 = (t0 + 5904);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t28, 8);
    xsi_driver_vfirst_trans(t29, 0, 0);
    xsi_hil_read_bit_vector(ng0, 2, 1, t34);
    xsi_hil_cvt_vlog_sysgentoisim(t35, t34, 1);
    t36 = (t0 + 5968);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t35, 8);
    xsi_driver_vfirst_trans(t36, 0, 0);
    xsi_hil_read_bit_vector(ng0, 3, 1, t41);
    xsi_hil_cvt_vlog_sysgentoisim(t42, t41, 1);
    t43 = (t0 + 6032);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t42, 8);
    xsi_driver_vfirst_trans(t43, 0, 0);
    xsi_hil_read_bit_vector(ng0, 4, 1, t48);
    xsi_hil_cvt_vlog_sysgentoisim(t49, t48, 1);
    t50 = (t0 + 6096);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memcpy(t54, t49, 8);
    xsi_driver_vfirst_trans(t50, 0, 0);
    xsi_hil_read_bit_vector(ng0, 5, 1, t55);
    xsi_hil_cvt_vlog_sysgentoisim(t56, t55, 1);
    t57 = (t0 + 4008);
    xsi_vlogvar_generic_wait_assign_value(t57, t56, 2, 0, 0, 1, 0LL);
    xsi_hil_read_bit_vector(ng0, 6, 8, t58);
    xsi_hil_cvt_vlog_sysgentoisim(t59, t58, 8);
    t60 = (t0 + 6160);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memcpy(t64, t59, 8);
    xsi_driver_vfirst_trans(t60, 0, 7);
    xsi_hil_read_bit_vector(ng0, 7, 1, t65);
    xsi_hil_cvt_vlog_sysgentoisim(t66, t65, 1);
    t67 = (t0 + 6224);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memcpy(t71, t66, 8);
    xsi_driver_vfirst_trans(t67, 0, 0);
    xsi_hil_read_bit_vector(ng0, 8, 1, t72);
    xsi_hil_cvt_vlog_sysgentoisim(t73, t72, 1);
    t74 = (t0 + 6288);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    memcpy(t78, t73, 8);
    xsi_driver_vfirst_trans(t74, 0, 0);
    goto LAB2;

}


extern void work_m_00000000000759807724_0607157625_hil_init()
{
	static char *pe[] = {(void *)AHIL_INITIALIZE,(void *)AHIL_CLK_0,(void *)AHIL_INPUTS};
	xsi_register_didat("work_m_00000000000759807724_0607157625_hil", "isim/lx9example_tb_isim_beh.exe.sim/work/m_00000000000759807724_0607157625_hil.didat");
	xsi_register_executes(pe);
	xsi_hil_init(get_hwc_handle(0), get_hwc_file(0));
	xsi_register_hil_handle_file("work_m_00000000000759807724_0607157625_hil", get_hwc_handle(0), get_hwc_file(0));
}
