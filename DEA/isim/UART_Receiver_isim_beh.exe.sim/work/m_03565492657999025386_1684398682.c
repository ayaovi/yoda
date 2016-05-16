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



static void Always_55_0(char *t0)
{
    char t13[8];
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
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
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

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5416);
    *((int *)t2) = 1;
    t3 = (t0 + 5128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 2344U);
    t5 = *((char **)t4);
    t4 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4184);
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

LAB7:    xsi_set_current_line(70, ng0);

LAB10:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3224);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t12);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t14 = (t4 + 4);
    t15 = (t12 + 4);
    t16 = (t13 + 4);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t15);
    t17 = (t9 | t10);
    *((unsigned int *)t16) = t17;
    t18 = *((unsigned int *)t16);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB11;

LAB12:
LAB13:    t40 = (t13 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t13);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB17:    t5 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t32 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t32 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:
LAB24:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 31U);
    if (t10 != 0)
        goto LAB76;

LAB74:    if (*((unsigned int *)t11) == 0)
        goto LAB73;

LAB75:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;

LAB76:    t14 = (t13 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (~(t17));
    t19 = *((unsigned int *)t13);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(122, ng0);

LAB104:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 5, t5, 5, t11, 5);
    t12 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 5, 0LL);

LAB79:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(60, ng0);

LAB9:    xsi_set_current_line(61, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB11:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t16);
    *((unsigned int *)t13) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t12 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & t34);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & t35);
    t38 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t38 & t34);
    t39 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t39 & t35);
    goto LAB13;

LAB14:    xsi_set_current_line(71, ng0);
    t46 = ((char*)((ng2)));
    t47 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t47, t46, 0, 0, 1, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(74, ng0);

LAB25:    xsi_set_current_line(75, ng0);
    t11 = (t0 + 3064);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memset(t13, 0, 8);
    t15 = (t14 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t15) == 0)
        goto LAB26;

LAB28:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;

LAB29:    t22 = (t13 + 4);
    t23 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (~(t17));
    *((unsigned int *)t13) = t18;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB31;

LAB30:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t26 & 1U);
    t40 = (t13 + 4);
    t27 = *((unsigned int *)t40);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3224);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memset(t13, 0, 8);
    t15 = (t14 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t15) == 0)
        goto LAB36;

LAB38:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;

LAB39:    t22 = (t13 + 4);
    t23 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (~(t17));
    *((unsigned int *)t13) = t18;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB41;

LAB40:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t26 & 1U);
    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t13);
    t29 = (t27 & t28);
    *((unsigned int *)t48) = t29;
    t40 = (t5 + 4);
    t46 = (t13 + 4);
    t47 = (t48 + 4);
    t30 = *((unsigned int *)t40);
    t31 = *((unsigned int *)t46);
    t34 = (t30 | t31);
    *((unsigned int *)t47) = t34;
    t35 = *((unsigned int *)t47);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB42;

LAB43:
LAB44:    memset(t59, 0, 8);
    t60 = (t48 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t48);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t60) != 0)
        goto LAB47;

LAB48:    t67 = (t59 + 4);
    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB49;

LAB50:    memcpy(t100, t59, 8);

LAB51:    t132 = (t100 + 4);
    t133 = *((unsigned int *)t132);
    t134 = (~(t133));
    t135 = *((unsigned int *)t100);
    t136 = (t135 & t134);
    t137 = (t136 != 0);
    if (t137 > 0)
        goto LAB65;

LAB66:
LAB67:    goto LAB24;

LAB20:    xsi_set_current_line(88, ng0);

LAB69:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 3064);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB24;

LAB26:    *((unsigned int *)t13) = 1;
    goto LAB29;

LAB31:    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t13) = (t19 | t20);
    t21 = *((unsigned int *)t22);
    t24 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t21 | t24);
    goto LAB30;

LAB32:    xsi_set_current_line(75, ng0);

LAB35:    xsi_set_current_line(76, ng0);
    t46 = ((char*)((ng3)));
    t47 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t47, t46, 0, 0, 5, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB34;

LAB36:    *((unsigned int *)t13) = 1;
    goto LAB39;

LAB41:    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t13) = (t19 | t20);
    t21 = *((unsigned int *)t22);
    t24 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t21 | t24);
    goto LAB40;

LAB42:    t37 = *((unsigned int *)t48);
    t38 = *((unsigned int *)t47);
    *((unsigned int *)t48) = (t37 | t38);
    t49 = (t5 + 4);
    t50 = (t13 + 4);
    t39 = *((unsigned int *)t5);
    t41 = (~(t39));
    t42 = *((unsigned int *)t49);
    t43 = (~(t42));
    t44 = *((unsigned int *)t13);
    t45 = (~(t44));
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t32 = (t41 & t43);
    t33 = (t45 & t52);
    t53 = (~(t32));
    t54 = (~(t33));
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & t53);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t56 & t54);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t57 & t53);
    t58 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t58 & t54);
    goto LAB44;

LAB45:    *((unsigned int *)t59) = 1;
    goto LAB48;

LAB47:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB48;

LAB49:    t72 = (t0 + 2904);
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
        goto LAB55;

LAB53:    if (*((unsigned int *)t75) == 0)
        goto LAB52;

LAB54:    t81 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t81) = 1;

LAB55:    t82 = (t71 + 4);
    t83 = (t74 + 4);
    t84 = *((unsigned int *)t74);
    t85 = (~(t84));
    *((unsigned int *)t71) = t85;
    *((unsigned int *)t82) = 0;
    if (*((unsigned int *)t83) != 0)
        goto LAB57;

LAB56:    t90 = *((unsigned int *)t71);
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
        goto LAB58;

LAB59:    if (*((unsigned int *)t93) != 0)
        goto LAB60;

LAB61:    t101 = *((unsigned int *)t59);
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
        goto LAB62;

LAB63:
LAB64:    goto LAB51;

LAB52:    *((unsigned int *)t71) = 1;
    goto LAB55;

LAB57:    t86 = *((unsigned int *)t71);
    t87 = *((unsigned int *)t83);
    *((unsigned int *)t71) = (t86 | t87);
    t88 = *((unsigned int *)t82);
    t89 = *((unsigned int *)t83);
    *((unsigned int *)t82) = (t88 | t89);
    goto LAB56;

LAB58:    *((unsigned int *)t92) = 1;
    goto LAB61;

LAB60:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB61;

LAB62:    t112 = *((unsigned int *)t100);
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
    goto LAB64;

LAB65:    xsi_set_current_line(80, ng0);

LAB68:    xsi_set_current_line(81, ng0);
    t138 = (t0 + 3384);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    t141 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t141, t140, 0, 0, 8, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB67;

LAB70:    xsi_set_current_line(89, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 2, 0LL);
    goto LAB72;

LAB73:    *((unsigned int *)t13) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(95, ng0);

LAB80:    xsi_set_current_line(96, ng0);
    t15 = (t0 + 4024);
    t16 = (t15 + 56U);
    t22 = *((char **)t16);

LAB81:    t23 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t22, 2, t23, 2);
    if (t32 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_compare(t22, 2, t2, 2);
    if (t32 == 1)
        goto LAB84;

LAB85:
LAB87:
LAB86:
LAB88:    goto LAB79;

LAB82:    xsi_set_current_line(97, ng0);

LAB89:    xsi_set_current_line(98, ng0);
    t40 = (t0 + 2344U);
    t46 = *((char **)t40);
    t40 = (t46 + 4);
    t24 = *((unsigned int *)t40);
    t25 = (~(t24));
    t26 = *((unsigned int *)t46);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(100, ng0);

LAB94:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB92:    goto LAB88;

LAB84:    xsi_set_current_line(108, ng0);

LAB95:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 3384);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t48, 0, 8);
    t12 = (t48 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 1);
    *((unsigned int *)t48) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 1);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t10 & 127U);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 127U);
    t15 = (t0 + 3064);
    t16 = (t15 + 56U);
    t23 = *((char **)t16);
    xsi_vlogtype_concat(t13, 8, 8, 2U, t23, 1, t48, 7);
    t40 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t40, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 | t7);
    if (t8 != 7U)
        goto LAB97;

LAB96:    if (*((unsigned int *)t11) == 0)
        goto LAB98;

LAB99:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;

LAB97:    t14 = (t13 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t10);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB100;

LAB101:
LAB102:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 3, t5, 3, t11, 3);
    t12 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);
    goto LAB88;

LAB90:    xsi_set_current_line(98, ng0);

LAB93:    xsi_set_current_line(99, ng0);
    t47 = ((char*)((ng2)));
    t49 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t49, t47, 0, 0, 2, 0LL);
    goto LAB92;

LAB98:    *((unsigned int *)t13) = 1;
    goto LAB97;

LAB100:    xsi_set_current_line(112, ng0);

LAB103:    xsi_set_current_line(113, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB102;

}


extern void work_m_03565492657999025386_1684398682_init()
{
	static char *pe[] = {(void *)Always_55_0};
	xsi_register_didat("work_m_03565492657999025386_1684398682", "isim/UART_Receiver_isim_beh.exe.sim/work/m_03565492657999025386_1684398682.didat");
	xsi_register_executes(pe);
}
