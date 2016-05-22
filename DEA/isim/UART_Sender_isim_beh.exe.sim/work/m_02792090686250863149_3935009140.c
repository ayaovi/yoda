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
static const char *ng0 = "/home/bluelabuser/temp/project/yoda/DEA/UART_Sender.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {29U, 0U};
static unsigned int ng5[] = {7U, 0U};
static int ng6[] = {6, 0};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {2U, 0U};



static void Always_51_0(char *t0)
{
    char t13[8];
    char t35[8];
    char t36[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    t3 = (t0 + 4808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 2024U);
    t5 = *((char **)t4);
    t4 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(64, ng0);

LAB10:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 31U);
    if (t10 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t5) == 0)
        goto LAB11;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB14:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(107, ng0);

LAB58:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 5, t4, 5, t5, 5);
    t11 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 5, 0LL);

LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(67, ng0);

LAB18:    xsi_set_current_line(68, ng0);
    t19 = (t0 + 3704);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);

LAB19:    t22 = ((char*)((ng1)));
    t23 = xsi_vlog_unsigned_case_compare(t21, 2, t22, 2);
    if (t23 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t23 = xsi_vlog_unsigned_case_compare(t21, 2, t2, 2);
    if (t23 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t23 = xsi_vlog_unsigned_case_compare(t21, 2, t2, 2);
    if (t23 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t23 = xsi_vlog_unsigned_case_compare(t21, 2, t2, 2);
    if (t23 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:
LAB30:    goto LAB17;

LAB20:    xsi_set_current_line(69, ng0);

LAB31:    xsi_set_current_line(70, ng0);
    t24 = (t0 + 3064);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB30;

LAB22:    xsi_set_current_line(80, ng0);

LAB36:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    t11 = (t0 + 3224);
    t12 = (t0 + 3224);
    t19 = (t12 + 72U);
    t20 = *((char **)t19);
    t22 = ((char*)((ng6)));
    t24 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t35, t36, ((int*)(t20)), 2, t22, 32, 1, t24, 32, 1);
    t25 = (t13 + 4);
    t6 = *((unsigned int *)t25);
    t23 = (!(t6));
    t26 = (t35 + 4);
    t7 = *((unsigned int *)t26);
    t37 = (!(t7));
    t38 = (t23 && t37);
    t27 = (t36 + 4);
    t8 = *((unsigned int *)t27);
    t39 = (!(t8));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 7U);
    if (t10 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t5) == 0)
        goto LAB39;

LAB41:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB42:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 3, t4, 3, t5, 3);
    t11 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 3, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(89, ng0);

LAB46:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB30;

LAB26:    xsi_set_current_line(96, ng0);

LAB47:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 3064);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t11) == 0)
        goto LAB48;

LAB50:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;

LAB51:    t19 = (t13 + 4);
    t20 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB53;

LAB52:    t29 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t29 & 1U);
    t30 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t30 & 1U);
    t22 = (t13 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t44 = *((unsigned int *)t13);
    t45 = (t44 & t32);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB54;

LAB55:
LAB56:    goto LAB30;

LAB32:    xsi_set_current_line(70, ng0);

LAB35:    xsi_set_current_line(71, ng0);
    t33 = ((char*)((ng4)));
    t34 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 5, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2184U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t13, 9, 9, 2U, t4, 8, t2, 1);
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t13, 0, 0, 1, 0LL);
    t5 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t5, t13, 1, 0, 8, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB34;

LAB37:    t9 = *((unsigned int *)t36);
    t41 = (t9 + 1);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t35);
    t42 = (t10 - t14);
    t43 = (t42 + 1);
    xsi_vlogvar_wait_assign_value(t11, t4, t41, *((unsigned int *)t35), t43, 0LL);
    goto LAB38;

LAB39:    *((unsigned int *)t13) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(84, ng0);
    t19 = ((char*)((ng7)));
    t20 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 0LL);
    goto LAB45;

LAB48:    *((unsigned int *)t13) = 1;
    goto LAB51;

LAB53:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t20);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t19);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t18 | t28);
    goto LAB52;

LAB54:    xsi_set_current_line(97, ng0);

LAB57:    xsi_set_current_line(98, ng0);
    t24 = ((char*)((ng1)));
    t25 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB56;

}


extern void work_m_02792090686250863149_3935009140_init()
{
	static char *pe[] = {(void *)Always_51_0};
	xsi_register_didat("work_m_02792090686250863149_3935009140", "isim/UART_Sender_isim_beh.exe.sim/work/m_02792090686250863149_3935009140.didat");
	xsi_register_executes(pe);
}
