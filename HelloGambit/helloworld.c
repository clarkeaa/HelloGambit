#ifdef ___LINKER_INFO
; File: "helloworld.c", produced by Gambit-C v4.7.0
(
407000
" helloworld"
(" helloworld")
(
)
(
)
(
" helloworld"
)
(
"test-gambit"
)
(
"write"
)
 #f
)
#else
#define ___VERSION 407000
#define ___MODULE_NAME " helloworld"
#define ___LINKER_ID ____20_helloworld
#define ___MH_PROC ___H__20_helloworld
#define ___SCRIPT_LINE 0
#define ___GLOCOUNT 3
#define ___SUPCOUNT 2
#define ___SUBCOUNT 1
#define ___LBLCOUNT 7
#include "gambit.h"

___NEED_GLO(___G__20_helloworld)
___NEED_GLO(___G_test_2d_gambit)
___NEED_GLO(___G_write)

___BEGIN_GLO
___DEF_GLO(0," helloworld")
___DEF_GLO(1,"test-gambit")
___DEF_GLO(2,"write")
___END_GLO

#define ___GLO__20_helloworld ___GLO(0,___G__20_helloworld)
#define ___PRM__20_helloworld ___PRM(0,___G__20_helloworld)
#define ___GLO_test_2d_gambit ___GLO(1,___G_test_2d_gambit)
#define ___PRM_test_2d_gambit ___PRM(1,___G_test_2d_gambit)
#define ___GLO_write ___GLO(2,___G_write)
#define ___PRM_write ___PRM(2,___G_write)

___DEF_SUB_STR(___X0,17)
               ___STR8(70,114,111,109,32,116,104,101)
               ___STR8(32,103,97,109,98,105,116,58)
               ___STR1(32)

___BEGIN_SUB
 ___DEF_SUB(___X0)
___END_SUB


#define ___C_LBL_test_gambit 3

 void test_gambit ___P((char* ___arg1),(___arg1)
char* ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_test_gambit))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_CHARSTRING_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}


#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_helloworld)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_test_2d_gambit)
___DEF_M_HLBL(___L1_test_2d_gambit)
___DEF_M_HLBL(___L2_test_2d_gambit)
___DEF_M_HLBL(___L3_test_2d_gambit)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_helloworld
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_helloworld)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_helloworld)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_helloworld)
   ___SET_GLO(1,___G_test_2d_gambit,___PRC(3))
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_test_2d_gambit
#undef ___PH_LBL0
#define ___PH_LBL0 3
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_test_2d_gambit)
___DEF_P_HLBL(___L1_test_2d_gambit)
___DEF_P_HLBL(___L2_test_2d_gambit)
___DEF_P_HLBL(___L3_test_2d_gambit)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_test_2d_gambit)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_test_2d_gambit)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___SUB(0))
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_test_2d_gambit)
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_write)
___DEF_SLBL(2,___L2_test_2d_gambit)
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_test_2d_gambit)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_write)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_helloworld," helloworld",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H__20_helloworld,0,-1)
,___DEF_LBL_INTRO(___H_test_2d_gambit,0,___REF_FAL,4,test_gambit)
,___DEF_LBL_PROC(___H_test_2d_gambit,1,-1)
,___DEF_LBL_RET(___H_test_2d_gambit,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_test_2d_gambit,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_test_2d_gambit,___IFD(___RETI,8,8,0x3f00L))
___END_LBL

___BEGIN_MOD1
___DEF_PRM(0,___G__20_helloworld,1)
___END_MOD1

___BEGIN_MOD2
___END_MOD2

#endif
