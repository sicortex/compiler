/* Generated automatically by the program './genpreds'
   from the machine description file '/home/jhj/compiler/GCC/gcc/config/mips/mips.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 86 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(SMALL_OPERAND (ival)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 91 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(ival == 0));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 96 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(SMALL_OPERAND_UNSIGNED (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 102 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(LUI_OPERAND (ival)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 108 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(!SMALL_OPERAND (ival))) && ((
#line 109 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(!SMALL_OPERAND_UNSIGNED (ival))) && (
#line 110 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(!LUI_OPERAND (ival)))));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 115 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(ival >= -0xffff && ival < 0));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 120 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(ival >= -0x4000 && ival < 0x4000));
}
static inline bool
satisfies_constraint_P (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 125 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(ival > 0 && ival < 0x10000));
}
static inline bool
satisfies_constraint_G (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 132 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return const_arith_operand (op, mode);
}
static inline bool
satisfies_constraint_R (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 143 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(mips_fetch_insns (op) == 1));
}
static inline bool
satisfies_constraint_S (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return (call_insn_operand (op, mode)) && (
#line 149 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(CONSTANT_P (op)));
}
static inline bool
satisfies_constraint_T (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return (move_operand (op, mode)) && ((
#line 156 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(CONSTANT_P (op))) && (
#line 157 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(mips_dangerous_for_la25_p (op))));
}
static inline bool
satisfies_constraint_U (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return (move_operand (op, mode)) && ((
#line 164 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(CONSTANT_P (op))) && (
#line 165 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(!mips_dangerous_for_la25_p (op))));
}
static inline bool
satisfies_constraint_W (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && ((memory_operand (op, mode)) && ((
#line 175 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(!TARGET_MIPS16)) || ((!(stack_operand (op, mode))) && (!(
#line 177 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(CONSTANT_P (XEXP (op, 0))))))));
}
static inline bool
satisfies_constraint_YG (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 183 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_YA (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 189 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(UIMM6_OPERAND (ival)));
}
static inline bool
satisfies_constraint_YB (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 195 "/home/jhj/compiler/GCC/gcc/config/mips/constraints.md"
(IMM10_OPERAND (ival)));
}
#endif /* tm-constrs.h */
