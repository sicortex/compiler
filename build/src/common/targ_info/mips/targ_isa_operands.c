#include "targ_isa_operands.h"
#include "targ_isa_registers.h"
#include "targ_isa_properties.h"
#include "targ_isa_lits.h"


const ISA_OPERAND_VALTYP ISA_OPERAND_operand_types[] = {
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      1, EC_UNDEFINED, 16, 0x02 }, /* simm16 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      2, EC_UNDEFINED, 16, 0x00 }, /* uimm16 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      3, EC_UNDEFINED,  5, 0x00 }, /* uimm5 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      4, EC_UNDEFINED, 16, 0x02 }, /* pcrel16 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      5, EC_UNDEFINED, 26, 0x00 }, /* pc26 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      6, EC_UNDEFINED,  6, 0x00 }, /* len5 */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 64, 0x03 }, /* int64 */
  { ISA_REGISTER_CLASS_float     , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 64, 0x03 }, /* fp64 */
  { ISA_REGISTER_CLASS_fcc       , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED,  1, 0x01 }, /* fcc */
  { ISA_REGISTER_CLASS_hilo      , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 64, 0x03 }, /* hilo */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_pfhint,  8, 0x00 }, /* pfhint */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_perfctlcode,  8, 0x00 }, /* perfctlcode */
};

const ISA_OPERAND_INFO ISA_OPERAND_info[] = {
  { 0, {  -1,  -1,  -1,  -1 },                    /* no operand */
       {   0,   0,   0,   0 },                    /* no operand */
    0, {  -1,  -1 } },                            /* no operand */
  { 1, {   1,  -1,  -1,  -1 },                    /* load imm */
       {   8,   0,   0,   0 },                    /* load imm */
    1, {   6,  -1 } },                            /* load imm */
  { 1, {   6,  -1,  -1,  -1 },                    /* sign extend and count bits */
       {   7,   0,   0,   0 },                    /* sign extend and count bits */
    1, {   6,  -1 } },                            /* sign extend and count bits */
  { 2, {   6,   6,  -1,  -1 },                    /* int arithmetic */
       {   7,   8,   0,   0 },                    /* int arithmetic */
    1, {   6,  -1 } },                            /* int arithmetic */
  { 2, {   6,   0,  -1,  -1 },                    /* int arithmetic with simm */
       {   7,   8,   0,   0 },                    /* int arithmetic with simm */
    1, {   6,  -1 } },                            /* int arithmetic with simm */
  { 2, {   6,   1,  -1,  -1 },                    /* int arithmetic with uimm */
       {   7,   8,   0,   0 },                    /* int arithmetic with uimm */
    1, {   6,  -1 } },                            /* int arithmetic with uimm */
  { 2, {   6,   0,  -1,  -1 },                    /* int load */
       {   2,   4,   0,   0 },                    /* int load */
    1, {   6,  -1 } },                            /* int load */
  { 3, {   6,   0,   6,  -1 },                    /* int unaligned load */
       {   2,   4,  11,   0 },                    /* int unaligned load */
    1, {   6,  -1 } },                            /* int unaligned load */
  { 3, {   6,   6,   0,  -1 },                    /* int store */
       {   6,   2,   4,   0 },                    /* int store */
    0, {  -1,  -1 } },                            /* int store */
  { 2, {   6,   6,  -1,  -1 },                    /* int load indexed */
       {   2,   3,   0,   0 },                    /* int load indexed */
    1, {   6,  -1 } },                            /* int load indexed */
  { 3, {  10,   6,   0,  -1 },                    /* prefetch */
       {   0,   2,   4,   0 },                    /* prefetch */
    0, {  -1,  -1 } },                            /* prefetch */
  { 3, {  10,   6,   6,  -1 },                    /* prefetch indexed */
       {   0,   2,   3,   0 },                    /* prefetch indexed */
    0, {  -1,  -1 } },                            /* prefetch indexed */
  { 2, {   6,   6,  -1,  -1 },                    /* int mul */
       {   7,   8,   0,   0 },                    /* int mul */
    2, {   6,   9 } },                            /* int mul */
  { 2, {   6,   6,  -1,  -1 },                    /* int mult/div */
       {   7,   8,   0,   0 },                    /* int mult/div */
    1, {   9,  -1 } },                            /* int mult/div */
  { 3, {   6,   6,   9,  -1 },                    /* int madd */
       {   7,   8,   0,   0 },                    /* int madd */
    1, {   9,  -1 } },                            /* int madd */
  { 1, {   9,  -1,  -1,  -1 },                    /* move from hi/lo */
       {   0,   0,   0,   0 },                    /* move from hi/lo */
    1, {   6,  -1 } },                            /* move from hi/lo */
  { 1, {   6,  -1,  -1,  -1 },                    /* move to hi/lo */
       {   7,   0,   0,   0 },                    /* move to hi/lo */
    1, {   9,  -1 } },                            /* move to hi/lo */
  { 2, {   7,   7,  -1,  -1 },                    /* float compare */
       {   7,   8,   0,   0 },                    /* float compare */
    1, {   8,  -1 } },                            /* float compare */
  { 3, {   6,   8,   6,  -1 },                    /* int movf/movt */
       {   7,   8,  11,   0 },                    /* int movf/movt */
    1, {   6,  -1 } },                            /* int movf/movt */
  { 3, {   6,   6,   6,  -1 },                    /* int movn/movz */
       {   7,   8,  11,   0 },                    /* int movn/movz */
    1, {   6,  -1 } },                            /* int movn/movz */
  { 1, {   7,  -1,  -1,  -1 },                    /* float moves */
       {   7,   0,   0,   0 },                    /* float moves */
    1, {   7,  -1 } },                            /* float moves */
  { 3, {   7,   8,   7,  -1 },                    /* float movf/movt */
       {   7,   8,  11,   0 },                    /* float movf/movt */
    1, {   7,  -1 } },                            /* float movf/movt */
  { 3, {   7,   6,   7,  -1 },                    /* float movn/movz */
       {   7,   8,  11,   0 },                    /* float movn/movz */
    1, {   7,  -1 } },                            /* float movn/movz */
  { 2, {   6,   2,  -1,  -1 },                    /* shifts */
       {   7,   8,   0,   0 },                    /* shifts */
    1, {   6,  -1 } },                            /* shifts */
  { 2, {   6,   6,  -1,  -1 },                    /* variable shifts */
       {   7,   8,   0,   0 },                    /* variable shifts */
    1, {   6,  -1 } },                            /* variable shifts */
  { 2, {   6,   0,  -1,  -1 },                    /* float load */
       {   2,   4,   0,   0 },                    /* float load */
    1, {   7,  -1 } },                            /* float load */
  { 3, {   7,   6,   0,  -1 },                    /* float store */
       {   6,   2,   4,   0 },                    /* float store */
    0, {  -1,  -1 } },                            /* float store */
  { 2, {   6,   6,  -1,  -1 },                    /* float load indexed */
       {   2,   3,   0,   0 },                    /* float load indexed */
    1, {   7,  -1 } },                            /* float load indexed */
  { 3, {   7,   6,   6,  -1 },                    /* float store indexed */
       {   6,   2,   3,   0 },                    /* float store indexed */
    0, {  -1,  -1 } },                            /* float store indexed */
  { 2, {   7,   7,  -1,  -1 },                    /* float arithmetic */
       {   7,   8,   0,   0 },                    /* float arithmetic */
    1, {   7,  -1 } },                            /* float arithmetic */
  { 1, {   7,  -1,  -1,  -1 },                    /* float unary arithmetic */
       {   7,   0,   0,   0 },                    /* float unary arithmetic */
    1, {   7,  -1 } },                            /* float unary arithmetic */
  { 3, {   7,   7,   7,  -1 },                    /* float madd */
       {  10,   7,   8,   0 },                    /* float madd */
    1, {   7,  -1 } },                            /* float madd */
  { 3, {   6,   6,   3,  -1 },                    /* beq/bne */
       {   7,   8,   5,   0 },                    /* beq/bne */
    0, {  -1,  -1 } },                            /* beq/bne */
  { 2, {   6,   3,  -1,  -1 },                    /* branch compared with zero */
       {   7,   5,   0,   0 },                    /* branch compared with zero */
    0, {  -1,  -1 } },                            /* branch compared with zero */
  { 2, {   8,   3,  -1,  -1 },                    /* branch fcc */
       {   7,   5,   0,   0 },                    /* branch fcc */
    0, {  -1,  -1 } },                            /* branch fcc */
  { 1, {   4,  -1,  -1,  -1 },                    /* jump */
       {   5,   0,   0,   0 },                    /* jump */
    0, {  -1,  -1 } },                            /* jump */
  { 1, {   6,  -1,  -1,  -1 },                    /* jump register */
       {   5,   0,   0,   0 },                    /* jump register */
    0, {  -1,  -1 } },                            /* jump register */
  { 1, {   4,  -1,  -1,  -1 },                    /* jump-and-link */
       {   5,   0,   0,   0 },                    /* jump-and-link */
    1, {   6,  -1 } },                            /* jump-and-link */
  { 1, {   6,  -1,  -1,  -1 },                    /* jump-and-link register */
       {   5,   0,   0,   0 },                    /* jump-and-link register */
    1, {   6,  -1 } },                            /* jump-and-link register */
  { 3, {   6,   6,   1,  -1 },                    /* trap */
       {   7,   8,   0,   0 },                    /* trap */
    0, {  -1,  -1 } },                            /* trap */
  { 3, {   6,   0,   1,  -1 },                    /* trap immediate */
       {   7,   8,   0,   0 },                    /* trap immediate */
    0, {  -1,  -1 } },                            /* trap immediate */
  { 1, {   7,  -1,  -1,  -1 },                    /* mfc1 */
       {   7,   0,   0,   0 },                    /* mfc1 */
    1, {   6,  -1 } },                            /* mfc1 */
  { 1, {   6,  -1,  -1,  -1 },                    /* mtc1 */
       {   7,   0,   0,   0 },                    /* mtc1 */
    1, {   7,  -1 } },                            /* mtc1 */
  { 1, {   7,  -1,  -1,  -1 },                    /* cvt in float registers */
       {   7,   0,   0,   0 },                    /* cvt in float registers */
    1, {   7,  -1 } },                            /* cvt in float registers */
  { 1, {   3,  -1,  -1,  -1 },                    /* label */
       {   0,   0,   0,   0 },                    /* label */
    0, {  -1,  -1 } },                            /* label */
  { 2, {   6,   0,  -1,  -1 },                    /* spadjust */
       {   7,   8,   0,   0 },                    /* spadjust */
    1, {   6,  -1 } },                            /* spadjust */
  { 1, {   9,  -1,  -1,  -1 },                    /* mov_hilo */
       {   7,   0,   0,   0 },                    /* mov_hilo */
    1, {   9,  -1 } },                            /* mov_hilo */
  { 1, {   8,  -1,  -1,  -1 },                    /* mov_fcc */
       {   7,   0,   0,   0 },                    /* mov_fcc */
    1, {   8,  -1 } },                            /* mov_fcc */
  { 4, {   1,   6,   6,   6 },                    /* intrncall */
       {   0,   0,   0,   0 },                    /* intrncall */
    1, {   6,  -1 } },                            /* intrncall */
  { 0, {  -1,  -1,  -1,  -1 },                    /* O_noop_ifixup */
       {   0,   0,   0,   0 },                    /* O_noop_ifixup */
    1, {   6,  -1 } },                            /* O_noop_ifixup */
  { 0, {  -1,  -1,  -1,  -1 },                    /* O_noop_ffixup */
       {   0,   0,   0,   0 },                    /* O_noop_ffixup */
    1, {   7,  -1 } },                            /* O_noop_ffixup */
  { 1, {   1,  -1,  -1,  -1 },                    /* pregtn tuple */
       {   0,   0,   0,   0 },                    /* pregtn tuple */
    1, {   6,  -1 } },                            /* pregtn tuple */
  { 1, {   6,  -1,  -1,  -1 },                    /* O_int64__int64 */
       {   7,   0,   0,   0 },                    /* O_int64__int64 */
    1, {   6,  -1 } },                            /* O_int64__int64 */
  { 2, {   6,   6,  -1,  -1 },                    /* O_int64__int64_int64 */
       {   7,   8,   0,   0 },                    /* O_int64__int64_int64 */
    1, {   6,  -1 } },                            /* O_int64__int64_int64 */
  { 2, {   6,   2,  -1,  -1 },                    /* O_int64__int64_uimm5 */
       {   7,   8,   0,   0 },                    /* O_int64__int64_uimm5 */
    1, {   6,  -1 } },                            /* O_int64__int64_uimm5 */
  { 3, {   6,   2,   5,  -1 },                    /* O_int64__int64_uimm5_len5 */
       {   7,   8,   9,   0 },                    /* O_int64__int64_uimm5_len5 */
    1, {   6,  -1 } },                            /* O_int64__int64_uimm5_len5 */
  { 4, {   6,   2,   5,   6 },                    /* O_int64__int64_uimm5_len5_int64 */
       {   7,   8,   9,  11 },                    /* O_int64__int64_uimm5_len5_int64 */
    1, {   6,  -1 } },                            /* O_int64__int64_uimm5_len5_int64 */
  { 1, {   7,  -1,  -1,  -1 },                    /* O_fp64__fp64 */
       {   7,   0,   0,   0 },                    /* O_fp64__fp64 */
    1, {   7,  -1 } },                            /* O_fp64__fp64 */
  { 2, {   7,   7,  -1,  -1 },                    /* O_fp64__fp64_fp64 */
       {   7,   8,   0,   0 },                    /* O_fp64__fp64_fp64 */
    1, {   7,  -1 } },                            /* O_fp64__fp64_fp64 */
  { 3, {   7,   7,   6,  -1 },                    /* O_fp64__fp64_fp64_int64 */
       {   7,   8,   9,   0 },                    /* O_fp64__fp64_fp64_int64 */
    1, {   7,  -1 } },                            /* O_fp64__fp64_fp64_int64 */
  { 1, {  11,  -1,  -1,  -1 },                    /* perfctl */
       {   0,   0,   0,   0 },                    /* perfctl */
    0, {  -1,  -1 } },                            /* perfctl */
  { 2, {   6,   6,  -1,  -1 },                    /* tlb */
       {   7,   8,   0,   0 },                    /* tlb */
    0, {  -1,  -1 } },                            /* tlb */
};

const mUINT8 ISA_OPERAND_info_index[] = {
    6,  /* lb: int load */
    6,  /* lbu: int load */
    6,  /* lh: int load */
    6,  /* lhu: int load */
    6,  /* lw: int load */
    7,  /* lwl: int unaligned load */
    7,  /* lwr: int unaligned load */
    8,  /* sb: int store */
    8,  /* sh: int store */
    8,  /* sw: int store */
    8,  /* swl: int store */
    8,  /* swr: int store */
    6,  /* ll: int load */
    8,  /* sc: int store */
    0,  /* sync: no operand */
    6,  /* lwu: int load */
    6,  /* ld: int load */
    7,  /* ldl: int unaligned load */
    7,  /* ldr: int unaligned load */
    6,  /* lld: int load */
    8,  /* sd: int store */
    8,  /* sdl: int store */
    8,  /* sdr: int store */
    8,  /* scd: int store */
   10,  /* pref: prefetch */
   11,  /* prefx: prefetch indexed */
    3,  /* add: int arithmetic */
    4,  /* addi: int arithmetic with simm */
    4,  /* addiu: int arithmetic with simm */
    3,  /* addu: int arithmetic */
   13,  /* div: int mult/div */
   13,  /* divu: int mult/div */
   12,  /* mul: int mul */
   13,  /* mult: int mult/div */
   13,  /* multu: int mult/div */
    3,  /* slt: int arithmetic */
    4,  /* slti: int arithmetic with simm */
    4,  /* sltiu: int arithmetic with simm */
    3,  /* sltu: int arithmetic */
    3,  /* sub: int arithmetic */
    3,  /* subu: int arithmetic */
    3,  /* dadd: int arithmetic */
    4,  /* daddi: int arithmetic with simm */
    4,  /* daddiu: int arithmetic with simm */
    3,  /* daddu: int arithmetic */
   13,  /* ddiv: int mult/div */
   13,  /* ddivu: int mult/div */
   13,  /* dmult: int mult/div */
   13,  /* dmultu: int mult/div */
    3,  /* dsub: int arithmetic */
    3,  /* dsubu: int arithmetic */
    3,  /* and: int arithmetic */
    5,  /* andi: int arithmetic with uimm */
    1,  /* lui: load imm */
    3,  /* nor: int arithmetic */
    3,  /* or: int arithmetic */
    5,  /* ori: int arithmetic with uimm */
    3,  /* xor: int arithmetic */
    5,  /* xori: int arithmetic with uimm */
    2,  /* clo: sign extend and count bits */
    2,  /* clz: sign extend and count bits */
    2,  /* dclo: sign extend and count bits */
    2,  /* dclz: sign extend and count bits */
   15,  /* mfhi: move from hi/lo */
   15,  /* mflo: move from hi/lo */
   16,  /* mthi: move to hi/lo */
   16,  /* mtlo: move to hi/lo */
   18,  /* movf: int movf/movt */
   19,  /* movn: int movn/movz */
   18,  /* movt: int movf/movt */
   19,  /* movz: int movn/movz */
   23,  /* sll: shifts */
   24,  /* sllv: variable shifts */
   23,  /* sra: shifts */
   24,  /* srav: variable shifts */
   23,  /* srl: shifts */
   24,  /* srlv: variable shifts */
   23,  /* dsll: shifts */
   23,  /* dsll32: shifts */
   24,  /* dsllv: variable shifts */
   23,  /* dsra: shifts */
   23,  /* dsra32: shifts */
   24,  /* dsrav: variable shifts */
   23,  /* dsrl: shifts */
   23,  /* dsrl32: shifts */
   24,  /* dsrlv: variable shifts */
   32,  /* beq: beq/bne */
   33,  /* bgez: branch compared with zero */
   33,  /* bgezal: branch compared with zero */
   33,  /* bgtz: branch compared with zero */
   33,  /* blez: branch compared with zero */
   33,  /* bltz: branch compared with zero */
   33,  /* bltzal: branch compared with zero */
   32,  /* bne: beq/bne */
   35,  /* j: jump */
   37,  /* jal: jump-and-link */
   38,  /* jalr: jump-and-link register */
   36,  /* jr: jump register */
    0,  /* break: no operand */
    0,  /* syscall: no operand */
   39,  /* teq: trap */
   40,  /* teqi: trap immediate */
   39,  /* tge: trap */
   40,  /* tgei: trap immediate */
   40,  /* tgeiu: trap immediate */
   39,  /* tgeu: trap */
   39,  /* tlt: trap */
   40,  /* tlti: trap immediate */
   40,  /* tltiu: trap immediate */
   39,  /* tltu: trap */
   39,  /* tne: trap */
   40,  /* tnei: trap immediate */
   25,  /* lwc1: float load */
   25,  /* ldc1: float load */
   27,  /* lwxc1: float load indexed */
   27,  /* ldxc1: float load indexed */
   26,  /* swc1: float store */
   26,  /* sdc1: float store */
   28,  /* swxc1: float store indexed */
   28,  /* sdxc1: float store indexed */
   30,  /* abs.s: float unary arithmetic */
   30,  /* abs.d: float unary arithmetic */
   29,  /* add.s: float arithmetic */
   29,  /* add.d: float arithmetic */
   17,  /* c.f.s: float compare */
   17,  /* c.f.d: float compare */
   17,  /* c.t.s: float compare */
   17,  /* c.t.d: float compare */
   17,  /* c.un.s: float compare */
   17,  /* c.un.d: float compare */
   17,  /* c.or.s: float compare */
   17,  /* c.or.d: float compare */
   17,  /* c.eq.s: float compare */
   17,  /* c.eq.d: float compare */
   17,  /* c.neq.s: float compare */
   17,  /* c.neq.d: float compare */
   17,  /* c.ueq.s: float compare */
   17,  /* c.ueq.d: float compare */
   17,  /* c.ogl.s: float compare */
   17,  /* c.ogl.d: float compare */
   17,  /* c.olt.s: float compare */
   17,  /* c.olt.d: float compare */
   17,  /* c.uge.s: float compare */
   17,  /* c.uge.d: float compare */
   17,  /* c.ult.s: float compare */
   17,  /* c.ult.d: float compare */
   17,  /* c.oge.s: float compare */
   17,  /* c.oge.d: float compare */
   17,  /* c.ole.s: float compare */
   17,  /* c.ole.d: float compare */
   17,  /* c.ugt.s: float compare */
   17,  /* c.ugt.d: float compare */
   17,  /* c.ule.s: float compare */
   17,  /* c.ule.d: float compare */
   17,  /* c.ogt.s: float compare */
   17,  /* c.ogt.d: float compare */
   17,  /* c.sf.s: float compare */
   17,  /* c.sf.d: float compare */
   17,  /* c.st.s: float compare */
   17,  /* c.st.d: float compare */
   17,  /* c.ngle.s: float compare */
   17,  /* c.ngle.d: float compare */
   17,  /* c.gle.s: float compare */
   17,  /* c.gle.d: float compare */
   17,  /* c.seq.s: float compare */
   17,  /* c.seq.d: float compare */
   17,  /* c.sne.s: float compare */
   17,  /* c.sne.d: float compare */
   17,  /* c.ngl.s: float compare */
   17,  /* c.ngl.d: float compare */
   17,  /* c.gl.s: float compare */
   17,  /* c.gl.d: float compare */
   17,  /* c.lt.s: float compare */
   17,  /* c.lt.d: float compare */
   17,  /* c.nlt.s: float compare */
   17,  /* c.nlt.d: float compare */
   17,  /* c.nge.s: float compare */
   17,  /* c.nge.d: float compare */
   17,  /* c.ge.s: float compare */
   17,  /* c.ge.d: float compare */
   17,  /* c.le.s: float compare */
   17,  /* c.le.d: float compare */
   17,  /* c.nle.s: float compare */
   17,  /* c.nle.d: float compare */
   17,  /* c.ngt.s: float compare */
   17,  /* c.ngt.d: float compare */
   17,  /* c.gt.s: float compare */
   17,  /* c.gt.d: float compare */
   29,  /* div.s: float arithmetic */
   29,  /* div.d: float arithmetic */
   29,  /* mul.s: float arithmetic */
   29,  /* mul.d: float arithmetic */
   30,  /* neg.s: float unary arithmetic */
   30,  /* neg.d: float unary arithmetic */
   29,  /* sub.s: float arithmetic */
   29,  /* sub.d: float arithmetic */
   30,  /* sqrt.s: float unary arithmetic */
   30,  /* sqrt.d: float unary arithmetic */
   31,  /* madd.s: float madd */
   31,  /* madd.d: float madd */
   31,  /* msub.s: float madd */
   31,  /* msub.d: float madd */
   31,  /* nmadd.s: float madd */
   31,  /* nmadd.d: float madd */
   31,  /* nmsub.s: float madd */
   31,  /* nmsub.d: float madd */
   30,  /* recip.s: float unary arithmetic */
   30,  /* recip.d: float unary arithmetic */
   30,  /* rsqrt.s: float unary arithmetic */
   30,  /* rsqrt.d: float unary arithmetic */
   41,  /* cfc1: mfc1 */
   42,  /* ctc1: mtc1 */
   41,  /* mfc1: mfc1 */
   42,  /* mtc1: mtc1 */
   41,  /* dmfc1: mfc1 */
   42,  /* dmtc1: mtc1 */
   20,  /* mov.s: float moves */
   20,  /* mov.d: float moves */
   21,  /* movf.s: float movf/movt */
   21,  /* movf.d: float movf/movt */
   22,  /* movn.s: float movn/movz */
   22,  /* movn.d: float movn/movz */
   21,  /* movt.s: float movf/movt */
   21,  /* movt.d: float movf/movt */
   22,  /* movz.s: float movn/movz */
   22,  /* movz.d: float movn/movz */
   43,  /* cvt.d.s: cvt in float registers */
   43,  /* cvt.d.w: cvt in float registers */
   43,  /* cvt.d.l: cvt in float registers */
   43,  /* cvt.l.s: cvt in float registers */
   43,  /* cvt.l.d: cvt in float registers */
   43,  /* cvt.s.d: cvt in float registers */
   43,  /* cvt.s.w: cvt in float registers */
   43,  /* cvt.s.l: cvt in float registers */
   43,  /* cvt.w.s: cvt in float registers */
   43,  /* cvt.w.d: cvt in float registers */
   43,  /* ceil.w.s: cvt in float registers */
   43,  /* ceil.w.d: cvt in float registers */
   43,  /* ceil.l.s: cvt in float registers */
   43,  /* ceil.l.d: cvt in float registers */
   43,  /* floor.w.s: cvt in float registers */
   43,  /* floor.w.d: cvt in float registers */
   43,  /* floor.l.s: cvt in float registers */
   43,  /* floor.l.d: cvt in float registers */
   43,  /* round.w.s: cvt in float registers */
   43,  /* round.w.d: cvt in float registers */
   43,  /* round.l.s: cvt in float registers */
   43,  /* round.l.d: cvt in float registers */
   43,  /* trunc.w.s: cvt in float registers */
   43,  /* trunc.w.d: cvt in float registers */
   43,  /* trunc.l.s: cvt in float registers */
   43,  /* trunc.l.d: cvt in float registers */
   34,  /* bc1f: branch fcc */
   34,  /* bc1t: branch fcc */
   52,  /* dsbh: O_int64__int64 */
   52,  /* dshd: O_int64__int64 */
   52,  /* seb: O_int64__int64 */
   52,  /* seh: O_int64__int64 */
   52,  /* wsbh: O_int64__int64 */
   55,  /* dext: O_int64__int64_uimm5_len5 */
   55,  /* dextm: O_int64__int64_uimm5_len5 */
   55,  /* dextu: O_int64__int64_uimm5_len5 */
   56,  /* dins: O_int64__int64_uimm5_len5_int64 */
   56,  /* dinsm: O_int64__int64_uimm5_len5_int64 */
   56,  /* dinsu: O_int64__int64_uimm5_len5_int64 */
   54,  /* drotr: O_int64__int64_uimm5 */
   54,  /* drotr32: O_int64__int64_uimm5 */
   53,  /* drotrv: O_int64__int64_int64 */
   55,  /* ext: O_int64__int64_uimm5_len5 */
   56,  /* ins: O_int64__int64_uimm5_len5_int64 */
   54,  /* rotr: O_int64__int64_uimm5 */
   53,  /* rotrv: O_int64__int64_int64 */
   59,  /* alnv.ps: O_fp64__fp64_fp64_int64 */
   22,  /* movn.ps: float movn/movz */
   22,  /* movz.ps: float movn/movz */
   30,  /* abs.ps: float unary arithmetic */
   17,  /* c.eq.ps: float compare */
   17,  /* c.f.ps: float compare */
   17,  /* c.ge.ps: float compare */
   17,  /* c.gl.ps: float compare */
   17,  /* c.gle.ps: float compare */
   17,  /* c.gt.ps: float compare */
   17,  /* c.le.ps: float compare */
   17,  /* c.lt.ps: float compare */
   17,  /* c.neq.ps: float compare */
   17,  /* c.nge.ps: float compare */
   17,  /* c.ngl.ps: float compare */
   17,  /* c.ngle.ps: float compare */
   17,  /* c.ngt.ps: float compare */
   17,  /* c.nle.ps: float compare */
   17,  /* c.nlt.ps: float compare */
   17,  /* c.oge.ps: float compare */
   17,  /* c.ogl.ps: float compare */
   17,  /* c.ogt.ps: float compare */
   17,  /* c.ole.ps: float compare */
   17,  /* c.olt.ps: float compare */
   17,  /* c.or.ps: float compare */
   17,  /* c.seq.ps: float compare */
   17,  /* c.sf.ps: float compare */
   17,  /* c.sne.ps: float compare */
   17,  /* c.st.ps: float compare */
   17,  /* c.t.ps: float compare */
   17,  /* c.ueq.ps: float compare */
   17,  /* c.uge.ps: float compare */
   17,  /* c.ugt.ps: float compare */
   17,  /* c.ule.ps: float compare */
   17,  /* c.ult.ps: float compare */
   17,  /* c.un.ps: float compare */
   58,  /* cvt.ps.s: O_fp64__fp64_fp64 */
   57,  /* cvt.s.pl: O_fp64__fp64 */
   57,  /* cvt.s.pu: O_fp64__fp64 */
   20,  /* mov.ps: float moves */
   21,  /* movf.ps: float movf/movt */
   21,  /* movt.ps: float movf/movt */
   30,  /* neg.ps: float unary arithmetic */
   58,  /* pll.ps: O_fp64__fp64_fp64 */
   58,  /* plu.ps: O_fp64__fp64_fp64 */
   58,  /* pul.ps: O_fp64__fp64_fp64 */
   58,  /* puu.ps: O_fp64__fp64_fp64 */
   29,  /* add.ps: float arithmetic */
   31,  /* madd.ps: float madd */
   31,  /* msub.ps: float madd */
   29,  /* mul.ps: float arithmetic */
   31,  /* nmadd.ps: float madd */
   31,  /* nmsub.ps: float madd */
   29,  /* sub.ps: float arithmetic */
    9,  /* lbx: int load indexed */
    9,  /* ldx: int load indexed */
    9,  /* lhx: int load indexed */
    9,  /* lwx: int load indexed */
   14,  /* madd: int madd */
   14,  /* maddu: int madd */
   14,  /* msub: int madd */
   14,  /* msubu: int madd */
   14,  /* dmadd: int madd */
   14,  /* dmaddu: int madd */
   14,  /* dmsub: int madd */
   14,  /* dmsubu: int madd */
   12,  /* dmulg: int mul */
   12,  /* dmulgu: int mul */
   15,  /* mfacx: move from hi/lo */
   16,  /* mtacx: move to hi/lo */
   14,  /* dperm: int madd */
    2,  /* pop: sign extend and count bits */
    2,  /* dpop: sign extend and count bits */
   27,  /* luxc1: float load indexed */
   28,  /* suxc1: float store indexed */
   58,  /* addred.ps: O_fp64__fp64_fp64 */
   58,  /* mulred.ps: O_fp64__fp64_fp64 */
   31,  /* ma.nlupuu.ps: float madd */
   31,  /* ma.plunuu.ps: float madd */
   31,  /* ma.plupll.ps: float madd */
   31,  /* ma.puupul.ps: float madd */
   30,  /* recipit1.d: float unary arithmetic */
   30,  /* recipit1.s: float unary arithmetic */
   30,  /* recipit1.ps: float unary arithmetic */
   29,  /* recipit2.d: float arithmetic */
   29,  /* recipit2.s: float arithmetic */
   29,  /* recipit2.ps: float arithmetic */
   30,  /* rsqrtit1.d: float unary arithmetic */
   30,  /* rsqrtit1.s: float unary arithmetic */
   30,  /* rsqrtit1.ps: float unary arithmetic */
   29,  /* rsqrtit2.d: float arithmetic */
   29,  /* rsqrtit2.s: float arithmetic */
   29,  /* rsqrtit2.ps: float arithmetic */
   41,  /* mfhc1: mfc1 */
   42,  /* mthc1: mtc1 */
   34,  /* bc2any2f: branch fcc */
   34,  /* bc2any2t: branch fcc */
   60,  /* perfctl: perfctl */
   61,  /* tlbwir: tlb */
   61,  /* tlbwrr: tlb */
    2,  /* sext: sign extend and count bits */
    0,  /* asm: no operand */
   48,  /* intrncall: intrncall */
   45,  /* spadjust: spadjust */
   46,  /* mov_hilo: mov_hilo */
   47,  /* mov_fcc: mov_fcc */
   51,  /* begin_pregtn: pregtn tuple */
   51,  /* end_pregtn: pregtn tuple */
    0,  /* bwd_bar: no operand */
    0,  /* fwd_bar: no operand */
   50,  /* dfixup: O_noop_ffixup */
   50,  /* ffixup: O_noop_ffixup */
   49,  /* ifixup: O_noop_ifixup */
   44,  /* label: label */
    0,  /* nop: no operand */
    0,  /* noop: no operand */
    0,  /* swp_start: no operand */
    0,  /* swp_stop: no operand */
};

const mINT8 ISA_OPERAND_relocatable_opnd[] = {
  -1,  /* lb */
  -1,  /* lbu */
  -1,  /* lh */
  -1,  /* lhu */
  -1,  /* lw */
  -1,  /* lwl */
  -1,  /* lwr */
  -1,  /* sb */
  -1,  /* sh */
  -1,  /* sw */
  -1,  /* swl */
  -1,  /* swr */
  -1,  /* ll */
  -1,  /* sc */
  -1,  /* sync */
  -1,  /* lwu */
  -1,  /* ld */
  -1,  /* ldl */
  -1,  /* ldr */
  -1,  /* lld */
  -1,  /* sd */
  -1,  /* sdl */
  -1,  /* sdr */
  -1,  /* scd */
  -1,  /* pref */
  -1,  /* prefx */
  -1,  /* add */
  -1,  /* addi */
  -1,  /* addiu */
  -1,  /* addu */
  -1,  /* div */
  -1,  /* divu */
  -1,  /* mul */
  -1,  /* mult */
  -1,  /* multu */
  -1,  /* slt */
  -1,  /* slti */
  -1,  /* sltiu */
  -1,  /* sltu */
  -1,  /* sub */
  -1,  /* subu */
  -1,  /* dadd */
  -1,  /* daddi */
  -1,  /* daddiu */
  -1,  /* daddu */
  -1,  /* ddiv */
  -1,  /* ddivu */
  -1,  /* dmult */
  -1,  /* dmultu */
  -1,  /* dsub */
  -1,  /* dsubu */
  -1,  /* and */
  -1,  /* andi */
  -1,  /* lui */
  -1,  /* nor */
  -1,  /* or */
  -1,  /* ori */
  -1,  /* xor */
  -1,  /* xori */
  -1,  /* clo */
  -1,  /* clz */
  -1,  /* dclo */
  -1,  /* dclz */
  -1,  /* mfhi */
  -1,  /* mflo */
  -1,  /* mthi */
  -1,  /* mtlo */
  -1,  /* movf */
  -1,  /* movn */
  -1,  /* movt */
  -1,  /* movz */
  -1,  /* sll */
  -1,  /* sllv */
  -1,  /* sra */
  -1,  /* srav */
  -1,  /* srl */
  -1,  /* srlv */
  -1,  /* dsll */
  -1,  /* dsll32 */
  -1,  /* dsllv */
  -1,  /* dsra */
  -1,  /* dsra32 */
  -1,  /* dsrav */
  -1,  /* dsrl */
  -1,  /* dsrl32 */
  -1,  /* dsrlv */
  -1,  /* beq */
  -1,  /* bgez */
  -1,  /* bgezal */
  -1,  /* bgtz */
  -1,  /* blez */
  -1,  /* bltz */
  -1,  /* bltzal */
  -1,  /* bne */
  -1,  /* j */
  -1,  /* jal */
  -1,  /* jalr */
  -1,  /* jr */
  -1,  /* break */
  -1,  /* syscall */
  -1,  /* teq */
  -1,  /* teqi */
  -1,  /* tge */
  -1,  /* tgei */
  -1,  /* tgeiu */
  -1,  /* tgeu */
  -1,  /* tlt */
  -1,  /* tlti */
  -1,  /* tltiu */
  -1,  /* tltu */
  -1,  /* tne */
  -1,  /* tnei */
  -1,  /* lwc1 */
  -1,  /* ldc1 */
  -1,  /* lwxc1 */
  -1,  /* ldxc1 */
  -1,  /* swc1 */
  -1,  /* sdc1 */
  -1,  /* swxc1 */
  -1,  /* sdxc1 */
  -1,  /* abs.s */
  -1,  /* abs.d */
  -1,  /* add.s */
  -1,  /* add.d */
  -1,  /* c.f.s */
  -1,  /* c.f.d */
  -1,  /* c.t.s */
  -1,  /* c.t.d */
  -1,  /* c.un.s */
  -1,  /* c.un.d */
  -1,  /* c.or.s */
  -1,  /* c.or.d */
  -1,  /* c.eq.s */
  -1,  /* c.eq.d */
  -1,  /* c.neq.s */
  -1,  /* c.neq.d */
  -1,  /* c.ueq.s */
  -1,  /* c.ueq.d */
  -1,  /* c.ogl.s */
  -1,  /* c.ogl.d */
  -1,  /* c.olt.s */
  -1,  /* c.olt.d */
  -1,  /* c.uge.s */
  -1,  /* c.uge.d */
  -1,  /* c.ult.s */
  -1,  /* c.ult.d */
  -1,  /* c.oge.s */
  -1,  /* c.oge.d */
  -1,  /* c.ole.s */
  -1,  /* c.ole.d */
  -1,  /* c.ugt.s */
  -1,  /* c.ugt.d */
  -1,  /* c.ule.s */
  -1,  /* c.ule.d */
  -1,  /* c.ogt.s */
  -1,  /* c.ogt.d */
  -1,  /* c.sf.s */
  -1,  /* c.sf.d */
  -1,  /* c.st.s */
  -1,  /* c.st.d */
  -1,  /* c.ngle.s */
  -1,  /* c.ngle.d */
  -1,  /* c.gle.s */
  -1,  /* c.gle.d */
  -1,  /* c.seq.s */
  -1,  /* c.seq.d */
  -1,  /* c.sne.s */
  -1,  /* c.sne.d */
  -1,  /* c.ngl.s */
  -1,  /* c.ngl.d */
  -1,  /* c.gl.s */
  -1,  /* c.gl.d */
  -1,  /* c.lt.s */
  -1,  /* c.lt.d */
  -1,  /* c.nlt.s */
  -1,  /* c.nlt.d */
  -1,  /* c.nge.s */
  -1,  /* c.nge.d */
  -1,  /* c.ge.s */
  -1,  /* c.ge.d */
  -1,  /* c.le.s */
  -1,  /* c.le.d */
  -1,  /* c.nle.s */
  -1,  /* c.nle.d */
  -1,  /* c.ngt.s */
  -1,  /* c.ngt.d */
  -1,  /* c.gt.s */
  -1,  /* c.gt.d */
  -1,  /* div.s */
  -1,  /* div.d */
  -1,  /* mul.s */
  -1,  /* mul.d */
  -1,  /* neg.s */
  -1,  /* neg.d */
  -1,  /* sub.s */
  -1,  /* sub.d */
  -1,  /* sqrt.s */
  -1,  /* sqrt.d */
  -1,  /* madd.s */
  -1,  /* madd.d */
  -1,  /* msub.s */
  -1,  /* msub.d */
  -1,  /* nmadd.s */
  -1,  /* nmadd.d */
  -1,  /* nmsub.s */
  -1,  /* nmsub.d */
  -1,  /* recip.s */
  -1,  /* recip.d */
  -1,  /* rsqrt.s */
  -1,  /* rsqrt.d */
  -1,  /* cfc1 */
  -1,  /* ctc1 */
  -1,  /* mfc1 */
  -1,  /* mtc1 */
  -1,  /* dmfc1 */
  -1,  /* dmtc1 */
  -1,  /* mov.s */
  -1,  /* mov.d */
  -1,  /* movf.s */
  -1,  /* movf.d */
  -1,  /* movn.s */
  -1,  /* movn.d */
  -1,  /* movt.s */
  -1,  /* movt.d */
  -1,  /* movz.s */
  -1,  /* movz.d */
  -1,  /* cvt.d.s */
  -1,  /* cvt.d.w */
  -1,  /* cvt.d.l */
  -1,  /* cvt.l.s */
  -1,  /* cvt.l.d */
  -1,  /* cvt.s.d */
  -1,  /* cvt.s.w */
  -1,  /* cvt.s.l */
  -1,  /* cvt.w.s */
  -1,  /* cvt.w.d */
  -1,  /* ceil.w.s */
  -1,  /* ceil.w.d */
  -1,  /* ceil.l.s */
  -1,  /* ceil.l.d */
  -1,  /* floor.w.s */
  -1,  /* floor.w.d */
  -1,  /* floor.l.s */
  -1,  /* floor.l.d */
  -1,  /* round.w.s */
  -1,  /* round.w.d */
  -1,  /* round.l.s */
  -1,  /* round.l.d */
  -1,  /* trunc.w.s */
  -1,  /* trunc.w.d */
  -1,  /* trunc.l.s */
  -1,  /* trunc.l.d */
  -1,  /* bc1f */
  -1,  /* bc1t */
  -1,  /* dsbh */
  -1,  /* dshd */
  -1,  /* seb */
  -1,  /* seh */
  -1,  /* wsbh */
  -1,  /* dext */
  -1,  /* dextm */
  -1,  /* dextu */
  -1,  /* dins */
  -1,  /* dinsm */
  -1,  /* dinsu */
  -1,  /* drotr */
  -1,  /* drotr32 */
  -1,  /* drotrv */
  -1,  /* ext */
  -1,  /* ins */
  -1,  /* rotr */
  -1,  /* rotrv */
  -1,  /* alnv.ps */
  -1,  /* movn.ps */
  -1,  /* movz.ps */
  -1,  /* abs.ps */
  -1,  /* c.eq.ps */
  -1,  /* c.f.ps */
  -1,  /* c.ge.ps */
  -1,  /* c.gl.ps */
  -1,  /* c.gle.ps */
  -1,  /* c.gt.ps */
  -1,  /* c.le.ps */
  -1,  /* c.lt.ps */
  -1,  /* c.neq.ps */
  -1,  /* c.nge.ps */
  -1,  /* c.ngl.ps */
  -1,  /* c.ngle.ps */
  -1,  /* c.ngt.ps */
  -1,  /* c.nle.ps */
  -1,  /* c.nlt.ps */
  -1,  /* c.oge.ps */
  -1,  /* c.ogl.ps */
  -1,  /* c.ogt.ps */
  -1,  /* c.ole.ps */
  -1,  /* c.olt.ps */
  -1,  /* c.or.ps */
  -1,  /* c.seq.ps */
  -1,  /* c.sf.ps */
  -1,  /* c.sne.ps */
  -1,  /* c.st.ps */
  -1,  /* c.t.ps */
  -1,  /* c.ueq.ps */
  -1,  /* c.uge.ps */
  -1,  /* c.ugt.ps */
  -1,  /* c.ule.ps */
  -1,  /* c.ult.ps */
  -1,  /* c.un.ps */
  -1,  /* cvt.ps.s */
  -1,  /* cvt.s.pl */
  -1,  /* cvt.s.pu */
  -1,  /* mov.ps */
  -1,  /* movf.ps */
  -1,  /* movt.ps */
  -1,  /* neg.ps */
  -1,  /* pll.ps */
  -1,  /* plu.ps */
  -1,  /* pul.ps */
  -1,  /* puu.ps */
  -1,  /* add.ps */
  -1,  /* madd.ps */
  -1,  /* msub.ps */
  -1,  /* mul.ps */
  -1,  /* nmadd.ps */
  -1,  /* nmsub.ps */
  -1,  /* sub.ps */
  -1,  /* lbx */
  -1,  /* ldx */
  -1,  /* lhx */
  -1,  /* lwx */
  -1,  /* madd */
  -1,  /* maddu */
  -1,  /* msub */
  -1,  /* msubu */
  -1,  /* dmadd */
  -1,  /* dmaddu */
  -1,  /* dmsub */
  -1,  /* dmsubu */
  -1,  /* dmulg */
  -1,  /* dmulgu */
  -1,  /* mfacx */
  -1,  /* mtacx */
  -1,  /* dperm */
  -1,  /* pop */
  -1,  /* dpop */
  -1,  /* luxc1 */
  -1,  /* suxc1 */
  -1,  /* addred.ps */
  -1,  /* mulred.ps */
  -1,  /* ma.nlupuu.ps */
  -1,  /* ma.plunuu.ps */
  -1,  /* ma.plupll.ps */
  -1,  /* ma.puupul.ps */
  -1,  /* recipit1.d */
  -1,  /* recipit1.s */
  -1,  /* recipit1.ps */
  -1,  /* recipit2.d */
  -1,  /* recipit2.s */
  -1,  /* recipit2.ps */
  -1,  /* rsqrtit1.d */
  -1,  /* rsqrtit1.s */
  -1,  /* rsqrtit1.ps */
  -1,  /* rsqrtit2.d */
  -1,  /* rsqrtit2.s */
  -1,  /* rsqrtit2.ps */
  -1,  /* mfhc1 */
  -1,  /* mthc1 */
  -1,  /* bc2any2f */
  -1,  /* bc2any2t */
  -1,  /* perfctl */
  -1,  /* tlbwir */
  -1,  /* tlbwrr */
  -1,  /* sext */
  -1,  /* asm */
  -1,  /* intrncall */
  -1,  /* spadjust */
  -1,  /* mov_hilo */
  -1,  /* mov_fcc */
  -1,  /* begin_pregtn */
  -1,  /* end_pregtn */
  -1,  /* bwd_bar */
  -1,  /* fwd_bar */
  -1,  /* dfixup */
  -1,  /* ffixup */
  -1,  /* ifixup */
   0,  /* label */
  -1,  /* nop */
  -1,  /* noop */
  -1,  /* swp_start */
  -1,  /* swp_stop */
};

INT TOP_Immediate_Operand(TOP topcode, ISA_LIT_CLASS *lclass)
{
  INT iopnd;
  const ISA_OPERAND_INFO *opinfo = ISA_OPERAND_Info(topcode);
  INT opnds = ISA_OPERAND_INFO_Operands(opinfo);
  const INT first = 0;
  const INT last = 2;

  if (last + 1 < opnds) opnds = last + 1;

  for (iopnd = first; iopnd < opnds; ++iopnd) {
    const ISA_OPERAND_VALTYP *vtype = ISA_OPERAND_INFO_Operand(opinfo, iopnd);
    ISA_LIT_CLASS lit_class = ISA_OPERAND_VALTYP_Literal_Class(vtype);
    if (lit_class != LC_UNDEFINED) {
      if (lclass) *lclass = lit_class;
      return iopnd;
    }
  }

  return -1;
}

INT TOP_Relocatable_Operand(TOP topcode, ISA_LIT_CLASS *lclass)
{
  extern const mINT8 ISA_OPERAND_relocatable_opnd[];
  INT iopnd = ISA_OPERAND_relocatable_opnd[(INT)topcode];
  if (lclass && iopnd >= 0) {
    const ISA_OPERAND_INFO *opinfo = ISA_OPERAND_Info(topcode);
    const ISA_OPERAND_VALTYP *vtype = ISA_OPERAND_INFO_Operand(opinfo,iopnd);
    *lclass = (ISA_LIT_CLASS)ISA_OPERAND_VALTYP_Literal_Class(vtype);
  }
  return iopnd;
}

BOOL TOP_Can_Have_Immediate(INT64 value, TOP topcode)
{
  ISA_LIT_CLASS lclass;
  if (TOP_Immediate_Operand(topcode, &lclass) < 0) return 0;
  return ISA_LC_Value_In_Class(value, lclass);
}

INT TOP_Find_Operand_Use(TOP topcode, ISA_OPERAND_USE use)
{
  INT i;
  const ISA_OPERAND_INFO *oinfo = ISA_OPERAND_Info(topcode);
  INT opnds = ISA_OPERAND_INFO_Operands(oinfo);
  for (i = 0; i < opnds; ++i) {
    ISA_OPERAND_USE this_use = ISA_OPERAND_INFO_Use(oinfo, i);
    if (this_use == use) return i;
  }
  return -1;
}

void TOP_Operand_Uses(TOP topcode, ISA_OPERAND_USE *uses)
{
  INT i;
  const ISA_OPERAND_INFO *oinfo = ISA_OPERAND_Info(topcode);
  INT opnds = ISA_OPERAND_INFO_Operands(oinfo);
  for (i = 0; i < opnds; ++i) {
    ISA_OPERAND_USE this_use = ISA_OPERAND_INFO_Use(oinfo, i);
    uses[i] = this_use;
  }
}
