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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/User/Desktop/exam/exam/topm.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1211844692_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2236);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1236U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 + 1);
    t3 = (t0 + 2288);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = t6;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t11 = (t2 == (unsigned char)2);
    if (t11 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t11 = (t2 == (unsigned char)3);
    if (t11 != 0)
        goto LAB14;

LAB15:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1236U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (2 * 1);
    t12 = (t5 > t6);
    if (t12 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t11 = (t2 == (unsigned char)2);
    if (t11 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB6;

LAB8:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1144U);
    t7 = *((char **)t1);
    t13 = *((unsigned char *)t7);
    t1 = (t0 + 2324);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    *((unsigned char *)t14) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2288);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB11:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2288);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2324);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1236U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (2 * 1);
    t12 = (t5 > t6);
    if (t12 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t11 = (t2 == (unsigned char)2);
    if (t11 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB6;

LAB16:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 960U);
    t7 = *((char **)t1);
    t13 = *((unsigned char *)t7);
    t1 = (t0 + 2324);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    *((unsigned char *)t14) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2288);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2288);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2324);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

}

static void work_a_1211844692_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 2244);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 2360);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2396);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 4156);
    t4 = (t0 + 2432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2396);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 4163);
    t4 = (t0 + 2432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB5:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2396);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 4170);
    t4 = (t0 + 2432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 2396);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 4177);
    t4 = (t0 + 2432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB7:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 2360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 2396);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 4184);
    t4 = (t0 + 2432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB8:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 2396);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 4191);
    t4 = (t0 + 2432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB9:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 2360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 2396);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 4198);
    t4 = (t0 + 2432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB10:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 2360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 2396);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 4205);
    t4 = (t0 + 2432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB11:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 2360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 2396);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 4212);
    t4 = (t0 + 2432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB12:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 2360);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2396);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 4219);
    t4 = (t0 + 2432);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

}


extern void work_a_1211844692_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1211844692_3212880686_p_0,(void *)work_a_1211844692_3212880686_p_1};
	xsi_register_didat("work_a_1211844692_3212880686", "isim/topm_tb_isim_beh.exe.sim/work/a_1211844692_3212880686.didat");
	xsi_register_executes(pe);
}
