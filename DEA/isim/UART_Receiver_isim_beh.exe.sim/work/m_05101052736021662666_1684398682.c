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
static const char *ng0 = "/home/bluelabuser/temp/yoda/DEA/UART_Receiver.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {14U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {29U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Always_57_0(char *t0)
{
    char t7[8];
    char t48[8];
    char t59[8];
    char t71[8];
    char t92[8];
    char t100[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5416);
    *((int *)t2) = 1;
    t3 = (t0 + 5128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2344U);
    t5 = *((char **)t4);
    t4 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2184U);
    t6 = *((char **)t5);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t5 = (t4 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);

LAB13:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3224);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t11);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t12 = (t4 + 4);
    t20 = (t11 + 4);
    t21 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = *((unsigned int *)t20);
    t15 = (t13 | t14);
    *((unsigned int *)t21) = t15;
    t16 = *((unsigned int *)t21);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB14;

LAB15:
LAB16:    t41 = (t7 + 4);
    t39 = *((unsigned int *)t41);
    t42 = (~(t39));
    t43 = *((unsigned int *)t7);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB20:    t5 = ((char*)((ng2)));
    t25 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t25 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t25 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t25 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:
LAB27:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t7, 0, 8);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t13 = (t10 & t9);
    t14 = (t13 & 31U);
    if (t14 != 0)
        goto LAB79;

LAB77:    if (*((unsigned int *)t6) == 0)
        goto LAB76;

LAB78:    t11 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t11) = 1;

LAB79:    t12 = (t7 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t7);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(127, ng0);

LAB107:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 5, t5, 5, t6, 5);
    t11 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 5, 0LL);

LAB82:
LAB11:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t4 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB8;

LAB9:    xsi_set_current_line(64, ng0);

LAB12:    xsi_set_current_line(66, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 8, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB11;

LAB14:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t7) = (t18 | t19);
    t34 = (t4 + 4);
    t40 = (t11 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t34);
    t26 = (~(t24));
    t27 = *((unsigned int *)t11);
    t28 = (~(t27));
    t30 = *((unsigned int *)t40);
    t31 = (~(t30));
    t25 = (t23 & t26);
    t29 = (t28 & t31);
    t32 = (~(t25));
    t33 = (~(t29));
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & t32);
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & t33);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t32);
    t38 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t38 & t33);
    goto LAB16;

LAB17:    xsi_set_current_line(74, ng0);
    t46 = ((char*)((ng2)));
    t47 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t47, t46, 0, 0, 1, 0LL);
    goto LAB19;

LAB21:    xsi_set_current_line(77, ng0);

LAB28:    xsi_set_current_line(79, ng0);
    t6 = (t0 + 3064);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    memset(t7, 0, 8);
    t20 = (t12 + 4);
    t8 = *((unsigned int *)t20);
    t9 = (~(t8));
    t10 = *((unsigned int *)t12);
    t13 = (t10 & t9);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t20) == 0)
        goto LAB29;

LAB31:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;

LAB32:    t34 = (t7 + 4);
    t40 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    *((unsigned int *)t7) = t16;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB34;

LAB33:    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 1U);
    t24 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t24 & 1U);
    t41 = (t7 + 4);
    t26 = *((unsigned int *)t41);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t30 = (t28 & t27);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3224);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    memset(t7, 0, 8);
    t20 = (t12 + 4);
    t8 = *((unsigned int *)t20);
    t9 = (~(t8));
    t10 = *((unsigned int *)t12);
    t13 = (t10 & t9);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t20) == 0)
        goto LAB39;

LAB41:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;

LAB42:    t34 = (t7 + 4);
    t40 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    *((unsigned int *)t7) = t16;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB44;

LAB43:    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 1U);
    t24 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t24 & 1U);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t7);
    t28 = (t26 & t27);
    *((unsigned int *)t48) = t28;
    t41 = (t5 + 4);
    t46 = (t7 + 4);
    t47 = (t48 + 4);
    t30 = *((unsigned int *)t41);
    t31 = *((unsigned int *)t46);
    t32 = (t30 | t31);
    *((unsigned int *)t47) = t32;
    t33 = *((unsigned int *)t47);
    t35 = (t33 != 0);
    if (t35 == 1)
        goto LAB45;

LAB46:
LAB47:    memset(t59, 0, 8);
    t60 = (t48 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t48);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t60) != 0)
        goto LAB50;

LAB51:    t67 = (t59 + 4);
    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB52;

LAB53:    memcpy(t100, t59, 8);

LAB54:    t132 = (t100 + 4);
    t133 = *((unsigned int *)t132);
    t134 = (~(t133));
    t135 = *((unsigned int *)t100);
    t136 = (t135 & t134);
    t137 = (t136 != 0);
    if (t137 > 0)
        goto LAB68;

LAB69:
LAB70:    goto LAB27;

LAB23:    xsi_set_current_line(93, ng0);

LAB72:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 3064);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t11 = (t6 + 4);
    t8 = *((unsigned int *)t11);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t13 = (t10 & t9);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB73;

LAB74:
LAB75:    goto LAB27;

LAB29:    *((unsigned int *)t7) = 1;
    goto LAB32;

LAB34:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t40);
    *((unsigned int *)t7) = (t17 | t18);
    t19 = *((unsigned int *)t34);
    t22 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t19 | t22);
    goto LAB33;

LAB35:    xsi_set_current_line(79, ng0);

LAB38:    xsi_set_current_line(80, ng0);
    t46 = ((char*)((ng3)));
    t47 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t47, t46, 0, 0, 5, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB37;

LAB39:    *((unsigned int *)t7) = 1;
    goto LAB42;

LAB44:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t40);
    *((unsigned int *)t7) = (t17 | t18);
    t19 = *((unsigned int *)t34);
    t22 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t19 | t22);
    goto LAB43;

LAB45:    t36 = *((unsigned int *)t48);
    t37 = *((unsigned int *)t47);
    *((unsigned int *)t48) = (t36 | t37);
    t49 = (t5 + 4);
    t50 = (t7 + 4);
    t38 = *((unsigned int *)t5);
    t39 = (~(t38));
    t42 = *((unsigned int *)t49);
    t43 = (~(t42));
    t44 = *((unsigned int *)t7);
    t45 = (~(t44));
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t25 = (t39 & t43);
    t29 = (t45 & t52);
    t53 = (~(t25));
    t54 = (~(t29));
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & t53);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t56 & t54);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t57 & t53);
    t58 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t58 & t54);
    goto LAB47;

LAB48:    *((unsigned int *)t59) = 1;
    goto LAB51;

LAB50:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB51;

LAB52:    t72 = (t0 + 2904);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memset(t71, 0, 8);
    t75 = (t74 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t75) == 0)
        goto LAB55;

LAB57:    t81 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t81) = 1;

LAB58:    t82 = (t71 + 4);
    t83 = (t74 + 4);
    t84 = *((unsigned int *)t74);
    t85 = (~(t84));
    *((unsigned int *)t71) = t85;
    *((unsigned int *)t82) = 0;
    if (*((unsigned int *)t83) != 0)
        goto LAB60;

LAB59:    t90 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t90 & 1U);
    t91 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t91 & 1U);
    memset(t92, 0, 8);
    t93 = (t71 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t71);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t93) != 0)
        goto LAB63;

LAB64:    t101 = *((unsigned int *)t59);
    t102 = *((unsigned int *)t92);
    t103 = (t101 & t102);
    *((unsigned int *)t100) = t103;
    t104 = (t59 + 4);
    t105 = (t92 + 4);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB54;

LAB55:    *((unsigned int *)t71) = 1;
    goto LAB58;

LAB60:    t86 = *((unsigned int *)t71);
    t87 = *((unsigned int *)t83);
    *((unsigned int *)t71) = (t86 | t87);
    t88 = *((unsigned int *)t82);
    t89 = *((unsigned int *)t83);
    *((unsigned int *)t82) = (t88 | t89);
    goto LAB59;

LAB61:    *((unsigned int *)t92) = 1;
    goto LAB64;

LAB63:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB64;

LAB65:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    t114 = (t59 + 4);
    t115 = (t92 + 4);
    t116 = *((unsigned int *)t59);
    t117 = (~(t116));
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t92);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (~(t122));
    t124 = (t117 & t119);
    t125 = (t121 & t123);
    t126 = (~(t124));
    t127 = (~(t125));
    t128 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t128 & t126);
    t129 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t129 & t127);
    t130 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t130 & t126);
    t131 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t131 & t127);
    goto LAB67;

LAB68:    xsi_set_current_line(84, ng0);

LAB71:    xsi_set_current_line(85, ng0);
    t138 = (t0 + 3384);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    t141 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t141, t140, 0, 0, 8, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB70;

LAB73:    xsi_set_current_line(94, ng0);
    t12 = ((char*)((ng2)));
    t20 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t20, t12, 0, 0, 2, 0LL);
    goto LAB75;

LAB76:    *((unsigned int *)t7) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(100, ng0);

LAB83:    xsi_set_current_line(101, ng0);
    t20 = (t0 + 4024);
    t21 = (t20 + 56U);
    t34 = *((char **)t21);

LAB84:    t40 = ((char*)((ng4)));
    t25 = xsi_vlog_unsigned_case_compare(t34, 2, t40, 2);
    if (t25 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng7)));
    t25 = xsi_vlog_unsigned_case_compare(t34, 2, t2, 2);
    if (t25 == 1)
        goto LAB87;

LAB88:
LAB90:
LAB89:
LAB91:    goto LAB82;

LAB85:    xsi_set_current_line(102, ng0);

LAB92:    xsi_set_current_line(103, ng0);
    t41 = (t0 + 2344U);
    t46 = *((char **)t41);
    t41 = (t46 + 4);
    t22 = *((unsigned int *)t41);
    t23 = (~(t22));
    t24 = *((unsigned int *)t46);
    t26 = (t24 & t23);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(105, ng0);

LAB97:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB95:    goto LAB91;

LAB87:    xsi_set_current_line(113, ng0);

LAB98:    xsi_set_current_line(114, ng0);
    t3 = (t0 + 3384);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t48, 0, 8);
    t11 = (t48 + 4);
    t12 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 1);
    *((unsigned int *)t48) = t9;
    t10 = *((unsigned int *)t12);
    t13 = (t10 >> 1);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t14 & 127U);
    t15 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t15 & 127U);
    t20 = (t0 + 3064);
    t21 = (t20 + 56U);
    t40 = *((char **)t21);
    xsi_vlogtype_concat(t7, 8, 8, 2U, t40, 1, t48, 7);
    t41 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t41, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t7, 0, 8);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    if (t10 != 7U)
        goto LAB100;

LAB99:    if (*((unsigned int *)t6) == 0)
        goto LAB101;

LAB102:    t11 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t11) = 1;

LAB100:    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t7);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB103;

LAB104:
LAB105:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 3, t5, 3, t6, 3);
    t11 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 3, 0LL);
    goto LAB91;

LAB93:    xsi_set_current_line(103, ng0);

LAB96:    xsi_set_current_line(104, ng0);
    t47 = ((char*)((ng2)));
    t49 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t49, t47, 0, 0, 2, 0LL);
    goto LAB95;

LAB101:    *((unsigned int *)t7) = 1;
    goto LAB100;

LAB103:    xsi_set_current_line(117, ng0);

LAB106:    xsi_set_current_line(118, ng0);
    t20 = ((char*)((ng4)));
    t21 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB105;

}


extern void work_m_05101052736021662666_1684398682_init()
{
	static char *pe[] = {(void *)Always_57_0};
	xsi_register_didat("work_m_05101052736021662666_1684398682", "isim/UART_Receiver_isim_beh.exe.sim/work/m_05101052736021662666_1684398682.didat");
	xsi_register_executes(pe);
}
