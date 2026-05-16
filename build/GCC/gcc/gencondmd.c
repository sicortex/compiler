/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 1700 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000\n\
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 1700 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 1700 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
  { "(ISA_HAS_ROTR_DI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4262 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_ROTR_DI) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4262 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_ROTR_DI) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1920 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1920 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4227 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4227 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 5121 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_SIBCALLS && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 5121 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn))
    ? (int) 
#line 5121 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SIBCALLS && SIBLING_CALL_P (insn))
    : -1 },
#line 1422 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MADD_MSUB",
    __builtin_constant_p 
#line 1422 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MADD_MSUB)
    ? (int) 
#line 1422 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MADD_MSUB)
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1794 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1794 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(!ISA_HAS_MACCHI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3928 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3928 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5325 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5325 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 3724 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32\n\
	   && INTVAL (operands[1]) <= 31 + 0x7f))",
    __builtin_constant_p 
#line 3724 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
    ? (int) 
#line 3724 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
    : -1 },
  { "(mips_use_ins_ext_p (operands[1], operands[2], operands[3])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2928 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], operands[2], operands[3])) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2928 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], operands[2], operands[3])) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 5313 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS",
    __builtin_constant_p 
#line 5313 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
    ? (int) 
#line 5313 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
    : -1 },
#line 4131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16",
    __builtin_constant_p 
#line 4131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16)
    ? (int) 
#line 4131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16)
    : -1 },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 950 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 950 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 3462 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && INTVAL (operands[1]) >= 0x100\n\
   && INTVAL (operands[1]) <= 0xff + 0x7f",
    __builtin_constant_p 
#line 3462 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    ? (int) 
#line 3462 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3145 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3145 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1204 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && true_regnum (operands[3]) == LO_REGNUM",
    __builtin_constant_p 
#line 1204 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM)
    ? (int) 
#line 1204 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM)
    : -1 },
#line 2696 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 2696 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 2696 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 5010 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE",
    __builtin_constant_p 
#line 5010 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE)
    ? (int) 
#line 5010 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE)
    : -1 },
  { "(TARGET_64BIT && !TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 2285 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2287 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 2285 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16) && 
#line 2287 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(!TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4712 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4712 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 622 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_COND_TRAP",
    __builtin_constant_p 
#line 622 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP)
    ? (int) 
#line 622 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP)
    : -1 },
#line 3928 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!ISA_HAS_MACCHI",
    __builtin_constant_p 
#line 3928 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI)
    ? (int) 
#line 3928 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_MACCHI)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && ( reload_completed)",
    __builtin_constant_p (
#line 3095 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3097 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 3095 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) && 
#line 3097 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 2248 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32",
    __builtin_constant_p 
#line 2248 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32)
    ? (int) 
#line 2248 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32)
    : -1 },
  { "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5471 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5471 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1401 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "GENERATE_MULT3_SI && peep2_reg_dead_p (3, operands[1])",
    __builtin_constant_p 
#line 1401 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MULT3_SI && peep2_reg_dead_p (3, operands[1]))
    ? (int) 
#line 1401 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MULT3_SI && peep2_reg_dead_p (3, operands[1]))
    : -1 },
#line 1104 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1104 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
    ? (int) 
#line 1104 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_FIX_R4000)
    : -1 },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1920 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1920 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_MIPS1) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(ISA_HAS_COND_TRAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 639 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 639 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_COND_TRAP) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 29 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 29 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_CLZ_CLO) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2003 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2003 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 2493 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "GENERATE_MIPS16E",
    __builtin_constant_p 
#line 2493 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MIPS16E)
    ? (int) 
#line 2493 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MIPS16E)
    : -1 },
  { "(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1956 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1956 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1757 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1757 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3275 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3275 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 3275 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3145 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3145 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 3629 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 2\n\
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 2\n\
	   && (INTVAL (operands[1]) & 1) != 0))",
    __builtin_constant_p 
#line 3629 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0)))
    ? (int) 
#line 3629 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0)))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && ( flow2_completed)",
    __builtin_constant_p (
#line 3041 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3043 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( flow2_completed))
    ? (int) (
#line 3041 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) && 
#line 3043 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( flow2_completed))
    : -1 },
#line 2003 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_CLZ_CLO",
    __builtin_constant_p 
#line 2003 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO)
    ? (int) 
#line 2003 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CLZ_CLO)
    : -1 },
#line 4206 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16",
    __builtin_constant_p 
#line 4206 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16)
    ? (int) 
#line 4206 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16)
    : -1 },
#line 3782 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 3782 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 3782 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3162 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3162 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 1681 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MULHI",
    __builtin_constant_p 
#line 1681 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
    ? (int) 
#line 1681 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MULHI)
    : -1 },
#line 5179 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)",
    __builtin_constant_p 
#line 5179 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn))
    ? (int) 
#line 5179 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn))
    : -1 },
  { "((!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p ((
#line 2504 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2508 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) ((
#line 2504 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 2508 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
#line 1648 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!ISA_HAS_MULHI && !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1648 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000)
    ? (int) 
#line 1648 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_MULHI && !TARGET_FIX_R4000)
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 5403 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 5403 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 1597 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && ISA_HAS_MULS",
    __builtin_constant_p 
#line 1597 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS)
    ? (int) 
#line 1597 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MULS)
    : -1 },
  { "(mips_use_ins_ext_p (operands[0], operands[1], operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2964 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], operands[1], operands[2])) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2964 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], operands[1], operands[2])) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1757 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1757 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1956 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1956 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SB1 && flag_unsafe_math_optimizations) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 2625 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2625 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
    ? (int) 
#line 2625 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
    : -1 },
#line 4884 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_ABICALLS",
    __builtin_constant_p 
#line 4884 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_ABICALLS)
    ? (int) 
#line 4884 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_ABICALLS)
    : -1 },
#line 3018 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])",
    __builtin_constant_p 
#line 3018 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
    ? (int) 
#line 3018 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
    : -1 },
#line 4998 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "! TARGET_64BIT",
    __builtin_constant_p 
#line 4998 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(! TARGET_64BIT)
    ? (int) 
#line 4998 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(! TARGET_64BIT)
    : -1 },
#line 1223 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC",
    __builtin_constant_p 
#line 1223 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACC)
    ? (int) 
#line 1223 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACC)
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 5403 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 5403 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(!TARGET_FIX_VR4120) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1890 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1890 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1459 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && true_regnum (operands[1]) == LO_REGNUM",
    __builtin_constant_p 
#line 1459 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM)
    ? (int) 
#line 1459 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3133 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3133 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3162 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3164 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3162 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3164 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 3286 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3286 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 3286 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
#line 3095 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected",
    __builtin_constant_p 
#line 3095 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
    ? (int) 
#line 3095 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1185 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && GP_REG_P (true_regnum (operands[3]))",
    __builtin_constant_p 
#line 1185 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3])))
    ? (int) 
#line 1185 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3])))
    : -1 },
  { "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2504 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2504 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 4017 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "mips_current_loadgp_style () == LOADGP_ABSOLUTE",
    __builtin_constant_p 
#line 4017 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE)
    ? (int) 
#line 4017 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_ABSOLUTE)
    : -1 },
  { "(!HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 2043 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 2043 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!HONOR_NANS (SFmode)) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(ISA_HAS_SEB_SEH) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2524 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2524 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1522 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1522 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
    ? (int) 
#line 1522 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && TARGET_FIX_R4000)
    : -1 },
#line 3575 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || reg_or_0_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 3575 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode)))
    ? (int) 
#line 3575 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode)))
    : -1 },
#line 1726 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "(TARGET_MAD || ISA_HAS_MACC)\n\
   && !TARGET_64BIT",
    __builtin_constant_p 
#line 1726 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT)
    ? (int) 
#line 1726 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT)
    : -1 },
  { "(ISA_HAS_MACCHI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3938 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACCHI) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3938 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACCHI) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 1440 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && GP_REG_P (true_regnum (operands[1]))",
    __builtin_constant_p 
#line 1440 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1])))
    ? (int) 
#line 1440 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1])))
    : -1 },
  { "(TARGET_ABICALLS && TARGET_OLDABI) && ( reload_completed)",
    __builtin_constant_p (
#line 5020 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_OLDABI) && 
#line 5022 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 5020 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_OLDABI) && 
#line 5022 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 2576 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2576 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
    ? (int) 
#line 2576 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
    : -1 },
#line 3897 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_PAIRED_SINGLE_FLOAT\n\
   && TARGET_64BIT\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || reg_or_0_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 3897 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT
   && TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    ? (int) 
#line 3897 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT
   && TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode)))
    : -1 },
#line 2964 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "mips_use_ins_ext_p (operands[0], operands[1], operands[2])",
    __builtin_constant_p 
#line 2964 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], operands[1], operands[2]))
    ? (int) 
#line 2964 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[0], operands[1], operands[2]))
    : -1 },
#line 1127 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && !GENERATE_MULT3_SI",
    __builtin_constant_p 
#line 1127 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !GENERATE_MULT3_SI)
    ? (int) 
#line 1127 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !GENERATE_MULT3_SI)
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1807 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1807 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 1890 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_FIX_VR4120",
    __builtin_constant_p 
#line 1890 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120)
    ? (int) 
#line 1890 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_FIX_VR4120)
    : -1 },
  { "(TARGET_64BIT && TARGET_MIPS16) && ( reload_completed)",
    __builtin_constant_p (
#line 873 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 875 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 873 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16) && 
#line 875 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 5361 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 5361 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3393 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 3393 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 3393 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 736 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) > 0x7f\n\
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)\n\
       || (INTVAL (operands[1]) < - 0x80\n\
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))",
    __builtin_constant_p 
#line 736 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
    ? (int) 
#line 736 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
    : -1 },
#line 3421 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 4\n\
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 4\n\
	   && (INTVAL (operands[1]) & 3) != 0))",
    __builtin_constant_p 
#line 3421 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0)))
    ? (int) 
#line 3421 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0)))
    : -1 },
  { "(!HONOR_NANS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 2043 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 2043 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!HONOR_NANS (V2SFmode)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(!TARGET_FIX_R4000) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1093 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1093 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_MIPS16) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4724 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 4724 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 613 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
  { "TARGET_PAIRED_SINGLE_FLOAT",
    __builtin_constant_p 
#line 613 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT)
    ? (int) 
#line 613 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT)
    : -1 },
#line 2524 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_SEB_SEH",
    __builtin_constant_p 
#line 2524 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH)
    ? (int) 
#line 2524 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_SEB_SEH)
    : -1 },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 937 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 937 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 4513 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16",
    __builtin_constant_p 
#line 4513 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16)
    ? (int) 
#line 4513 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16)
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 4960 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "mips_can_use_return_insn ()",
    __builtin_constant_p 
#line 4960 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_can_use_return_insn ())
    ? (int) 
#line 4960 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_can_use_return_insn ())
    : -1 },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3018 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 3018 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_ABICALLS) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5058 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_ABICALLS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5058 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_ABICALLS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_PAIRED_SINGLE_FLOAT) && ( reload_completed)",
    __builtin_constant_p (
#line 332 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT) && 
#line 334 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    ? (int) (
#line 332 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_PAIRED_SINGLE_FLOAT) && 
#line 334 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    : -1 },
  { "(!TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3197 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3197 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3206 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3206 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)",
    __builtin_constant_p ((
#line 5361 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) ((
#line 5361 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 5376 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 5376 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 966 "/home/jhj/compiler/GCC/gcc/config/mips/mips-dsp.md"
  { "TARGET_DSP && !TARGET_64BIT",
    __builtin_constant_p 
#line 966 "/home/jhj/compiler/GCC/gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT)
    ? (int) 
#line 966 "/home/jhj/compiler/GCC/gcc/config/mips/mips-dsp.md"
(TARGET_DSP && !TARGET_64BIT)
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 5376 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 5376 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)) && 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3838 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 3838 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 3838 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 2836 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 2836 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 2836 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 3816 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 3816 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 3816 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
#line 1362 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "GENERATE_MULT3_SI\n\
   && true_regnum (operands[1]) == LO_REGNUM\n\
   && peep2_reg_dead_p (2, operands[1])\n\
   && GP_REG_P (true_regnum (operands[3]))",
    __builtin_constant_p 
#line 1362 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3])))
    ? (int) 
#line 1362 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3])))
    : -1 },
  { "(TARGET_DSP) && (TARGET_DSP)",
    __builtin_constant_p (
#line 785 "/home/jhj/compiler/GCC/gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 16 "/home/jhj/compiler/GCC/gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    ? (int) (
#line 785 "/home/jhj/compiler/GCC/gcc/config/mips/mips-dsp.md"
(TARGET_DSP) && 
#line 16 "/home/jhj/compiler/GCC/gcc/config/mips/mips-dsp.md"
(TARGET_DSP))
    : -1 },
  { "(TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 578 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 578 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 2997 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])",
    __builtin_constant_p 
#line 2997 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
    ? (int) 
#line 2997 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 5099 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_SIBCALLS",
    __builtin_constant_p 
#line 5099 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SIBCALLS)
    ? (int) 
#line 5099 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SIBCALLS)
    : -1 },
#line 4000 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "mips_current_loadgp_style () == LOADGP_NEWABI",
    __builtin_constant_p 
#line 4000 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI)
    ? (int) 
#line 4000 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_current_loadgp_style () == LOADGP_NEWABI)
    : -1 },
  { "(!TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3197 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3197 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 826 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && REG_P (operands[1])\n\
   && M16_REG_P (REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0xf)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))",
    __builtin_constant_p 
#line 826 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
    ? (int) 
#line 826 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
    : -1 },
#line 3938 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MACCHI",
    __builtin_constant_p 
#line 3938 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACCHI)
    ? (int) 
#line 3938 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACCHI)
    : -1 },
#line 5391 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_CONDMOVE",
    __builtin_constant_p 
#line 5391 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE)
    ? (int) 
#line 5391 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE)
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3162 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3164 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3162 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3164 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 3382 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || reg_or_0_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 3382 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode)))
    ? (int) 
#line 3382 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode)))
    : -1 },
#line 4066 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16 && !TARGET_MEMCPY",
    __builtin_constant_p 
#line 4066 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_MEMCPY)
    ? (int) 
#line 4066 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && !TARGET_MEMCPY)
    : -1 },
#line 1585 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1585 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
    ? (int) 
#line 1585 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000)
    : -1 },
#line 1700 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT && !TARGET_FIX_R4000\n\
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    __builtin_constant_p 
#line 1700 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    ? (int) 
#line 1700 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
    : -1 },
#line 1609 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1609 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MSAC)
    ? (int) 
#line 1609 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && ISA_HAS_MSAC)
    : -1 },
  { "(ISA_HAS_CONDMOVE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5391 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 5391 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(!HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 2043 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 2043 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!HONOR_NANS (DFmode)) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 937 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 937 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_4300_MUL_FIX) && 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_64BIT && !TARGET_FIX_R4000) && ( reload_completed)",
    __builtin_constant_p (
#line 1535 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1537 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1535 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && !TARGET_FIX_R4000) && 
#line 1537 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 1057 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT && GENERATE_MULT3_DI",
    __builtin_constant_p 
#line 1057 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && GENERATE_MULT3_DI)
    ? (int) 
#line 1057 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && GENERATE_MULT3_DI)
    : -1 },
#line 5273 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_SPLIT_CALLS",
    __builtin_constant_p 
#line 5273 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
    ? (int) 
#line 5273 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SPLIT_CALLS)
    : -1 },
#line 3264 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3264 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    ? (int) 
#line 3264 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 3131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
#line 3326 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16 && reload_completed\n\
   && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x10)\n\
       || (INTVAL (operands[1]) >= 32 * 8\n\
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 8\n\
	   && (INTVAL (operands[1]) & 7) != 0))",
    __builtin_constant_p 
#line 3326 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0)))
    ? (int) 
#line 3326 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0)))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (SFmode)\n\
   && !HONOR_NANS (SFmode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1807 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1807 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)
   && !HONOR_NANS (SFmode)) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 483 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
  { "TARGET_MIPS3D",
    __builtin_constant_p 
#line 483 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D)
    ? (int) 
#line 483 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D)
    : -1 },
#line 4262 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_ROTR_SI",
    __builtin_constant_p 
#line 4262 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_ROTR_SI)
    ? (int) 
#line 4262 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_ROTR_SI)
    : -1 },
#line 3297 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 3297 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 3297 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 1494 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_64BIT || !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1494 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT || !TARGET_FIX_R4000)
    ? (int) 
#line 1494 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT || !TARGET_FIX_R4000)
    : -1 },
#line 3771 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_SOFT_FLOAT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 3771 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 3771 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
#line 3986 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT",
    __builtin_constant_p 
#line 3986 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT)
    ? (int) 
#line 3986 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT)
    : -1 },
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)
    ? (int) 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT)
    : -1 },
  { "(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1956 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1956 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 3860 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "reload_completed && !TARGET_64BIT\n\
   && mips_split_64bit_move_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3860 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1]))
    ? (int) 
#line 3860 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1]))
    : -1 },
#line 1294 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && reload_completed",
    __builtin_constant_p 
#line 1294 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
    ? (int) 
#line 1294 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACC && reload_completed)
    : -1 },
#line 5219 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)",
    __builtin_constant_p 
#line 5219 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn))
    ? (int) 
#line 5219 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn))
    : -1 },
#line 765 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && REG_P (operands[1])\n\
   && M16_REG_P (REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))",
    __builtin_constant_p 
#line 765 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
    ? (int) 
#line 765 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
    : -1 },
  { "(GENERATE_MIPS16E) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2493 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2493 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MIPS16E) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1757 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1757 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4 && TARGET_FUSED_MADD) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 3827 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "(TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 3827 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 3827 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 3519 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_8CC && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 3519 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT)
    ? (int) 
#line 3519 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_8CC && TARGET_HARD_FLOAT)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3145 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3147 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3145 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 3147 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1794 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1794 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 1053 "/home/jhj/compiler/GCC/gcc/config/mips/mips-dsp.md"
  { "TARGET_DSP",
    __builtin_constant_p 
#line 1053 "/home/jhj/compiler/GCC/gcc/config/mips/mips-dsp.md"
(TARGET_DSP)
    ? (int) 
#line 1053 "/home/jhj/compiler/GCC/gcc/config/mips/mips-dsp.md"
(TARGET_DSP)
    : -1 },
#line 797 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) > 0xf\n\
	&& INTVAL (operands[1]) <= 0xf + 0xf)\n\
       || (INTVAL (operands[1]) < - 0x10\n\
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))",
    __builtin_constant_p 
#line 797 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
    ? (int) 
#line 797 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (V2SFmode)\n\
   && !HONOR_NANS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1807 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1807 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)
   && !HONOR_NANS (V2SFmode)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 1093 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1093 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
    ? (int) 
#line 1093 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_FIX_R4000)
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 3551 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_FP4) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
  { "(TARGET_MIPS16) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3206 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3206 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 2587 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2587 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
    ? (int) 
#line 2587 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
    : -1 },
#line 1628 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MULHI || !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1628 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MULHI || !TARGET_FIX_R4000)
    ? (int) 
#line 1628 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MULHI || !TARGET_FIX_R4000)
    : -1 },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (DFmode)\n\
   && !HONOR_NANS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 1794 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 1794 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)
   && !HONOR_NANS (DFmode)) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 3805 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 3805 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    ? (int) 
#line 3805 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode)))
    : -1 },
#line 4227 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16",
    __builtin_constant_p 
#line 4227 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
    ? (int) 
#line 4227 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
    : -1 },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2997 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 2997 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p ((
#line 5376 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) ((
#line 5376 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 5020 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_ABICALLS && TARGET_OLDABI",
    __builtin_constant_p 
#line 5020 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_OLDABI)
    ? (int) 
#line 5020 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_ABICALLS && TARGET_OLDABI)
    : -1 },
  { "(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 1826 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 1826 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 5325 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 5325 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 3067 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS",
    __builtin_constant_p 
#line 3067 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS)
    ? (int) 
#line 3067 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS)
    : -1 },
#line 3760 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 3760 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    ? (int) 
#line 3760 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode)))
    : -1 },
#line 1715 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MAD",
    __builtin_constant_p 
#line 1715 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MAD)
    ? (int) 
#line 1715 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MAD)
    : -1 },
#line 1512 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_64BIT && !TARGET_FIX_R4000",
    __builtin_constant_p 
#line 1512 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000)
    ? (int) 
#line 1512 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_64BIT && !TARGET_FIX_R4000)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3133 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3131 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3133 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p ((
#line 5376 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) ((
#line 5376 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_CONDMOVE) && 
#line 415 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT)) && 
#line 429 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 3594 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 3594 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 3594 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 2359 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2367 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 2359 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2367 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
  { "(TARGET_FIX_R4000) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1104 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    ? (int) (
#line 1104 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_FIX_R4000) && 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT))
    : -1 },
#line 3682 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || reg_or_0_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 3682 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode)))
    ? (int) 
#line 3682 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode)))
    : -1 },
#line 1266 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MACC && !ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1266 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
    ? (int) 
#line 1266 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC)
    : -1 },
  { "((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3145 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3147 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) ((
#line 3145 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)) && 
#line 3147 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)
    ? (int) 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode)
    : -1 },
#line 2928 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "mips_use_ins_ext_p (operands[1], operands[2], operands[3])",
    __builtin_constant_p 
#line 2928 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], operands[2], operands[3]))
    ? (int) 
#line 2928 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(mips_use_ins_ext_p (operands[1], operands[2], operands[3]))
    : -1 },
  { "(TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    __builtin_constant_p (
#line 578 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    ? (int) (
#line 578 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 424 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    : -1 },
#line 1080 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "GENERATE_MULT3_SI && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 1080 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MULT3_SI && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 1080 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MULT3_SI && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)
    ? (int) 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode)
    : -1 },
  { "(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1826 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1826 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
#line 5252 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)",
    __builtin_constant_p 
#line 5252 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn))
    ? (int) 
#line 5252 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn))
    : -1 },
#line 2504 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E",
    __builtin_constant_p 
#line 2504 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E)
    ? (int) 
#line 2504 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E)
    : -1 },
#line 3701 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 3701 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 3701 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
#line 1161 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "(TARGET_MIPS3900\n\
   || ISA_HAS_MADD_MSUB)\n\
   && !TARGET_MIPS16",
    __builtin_constant_p 
#line 1161 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16)
    ? (int) 
#line 1161 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16)
    : -1 },
  { "(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 2504 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2508 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 2504 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(!ISA_HAS_SEB_SEH && !GENERATE_MIPS16E) && 
#line 2508 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
#line 1033 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "GENERATE_MULT3_SI",
    __builtin_constant_p 
#line 1033 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MULT3_SI)
    ? (int) 
#line 1033 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(GENERATE_MULT3_SI)
    : -1 },
  { "(ISA_HAS_MACC && !ISA_HAS_MSAC) && ( reload_completed)",
    __builtin_constant_p (
#line 1266 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1268 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    ? (int) (
#line 1266 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MACC && !ISA_HAS_MSAC) && 
#line 1268 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed))
    : -1 },
#line 2614 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W",
    __builtin_constant_p 
#line 2614 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
    ? (int) 
#line 2614 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
    : -1 },
  { "(TARGET_SB1) && (TARGET_PAIRED_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 1920 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    ? (int) (
#line 1920 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_SB1) && 
#line 425 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_PAIRED_SINGLE_FLOAT))
    : -1 },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 950 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 950 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_4300_MUL_FIX) && 
#line 428 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
#line 1245 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MSAC",
    __builtin_constant_p 
#line 1245 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
    ? (int) 
#line 1245 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MSAC)
    : -1 },
#line 3873 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0",
    __builtin_constant_p 
#line 3873 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0)
    ? (int) 
#line 3873 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0)
    : -1 },
  { "(TARGET_MIPS3D) && ( reload_completed)",
    __builtin_constant_p (
#line 361 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 363 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    ? (int) (
#line 361 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 363 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
( reload_completed))
    : -1 },
#line 1309 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MSAC && reload_completed",
    __builtin_constant_p 
#line 1309 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
    ? (int) 
#line 1309 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MSAC && reload_completed)
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed && register_operand (operands[1], VOIDmode))",
    __builtin_constant_p (
#line 2472 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2476 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode)))
    ? (int) (
#line 2472 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT) && 
#line 2476 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
( reload_completed && register_operand (operands[1], VOIDmode)))
    : -1 },
  { "(HAVE_AS_TLS && !TARGET_MIPS16) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5471 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5471 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(HAVE_AS_TLS && !TARGET_MIPS16) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_MIPS3D) && (TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 578 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    ? (int) (
#line 578 "/home/jhj/compiler/GCC/gcc/config/mips/mips-ps-3d.md"
(TARGET_MIPS3D) && 
#line 423 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_HARD_FLOAT))
    : -1 },
  { "(TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3162 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    ? (int) (
#line 3162 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_EXPLICIT_RELOCS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == SImode))
    : -1 },
#line 1477 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "ISA_HAS_MULS",
    __builtin_constant_p 
#line 1477 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MULS)
    ? (int) 
#line 1477 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(ISA_HAS_MULS)
    : -1 },
#line 5432 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_MIPS16",
    __builtin_constant_p 
#line 5432 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16)
    ? (int) 
#line 5432 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_MIPS16)
    : -1 },
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT)
    ? (int) 
#line 407 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_64BIT)
    : -1 },
#line 5453 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
  { "reload_completed",
    __builtin_constant_p 
#line 5453 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed)
    ? (int) 
#line 5453 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(reload_completed)
    : -1 },
  { "(TARGET_ABICALLS) && (Pmode == DImode)",
    __builtin_constant_p (
#line 5058 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_ABICALLS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    ? (int) (
#line 5058 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(TARGET_ABICALLS) && 
#line 411 "/home/jhj/compiler/GCC/gcc/config/mips/mips.md"
(Pmode == DImode))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
