#include "topcode.h"
#include "targ_isa_pack.h"


const ISA_PACK_INFO ISA_PACK_info[] = {
  { ISA_PACK_COMP_end     , -1, -1,   -1 },  /* UNDEFINED */
  { ISA_PACK_COMP_opnd    ,  0, 16, 0x0f },  /* p1, OPND0 */
  { ISA_PACK_COMP_opnd+1  ,  0, 20, 0x0f },  /* p1, OPND1 */
  { ISA_PACK_COMP_result  ,  0, 12, 0x0f },  /* p1, RESULT0 */
  { ISA_PACK_COMP_end     , -1, -1,   -1 },  /* p1 */
};


const mUINT8 ISA_PACK_info_index[390] = {
    1,  /* lb: p1 */
    1,  /* lbu: p1 */
    1,  /* lh: p1 */
    1,  /* lhu: p1 */
    1,  /* lw: p1 */
    1,  /* lwl: p1 */
    1,  /* lwr: p1 */
    1,  /* sb: p1 */
    1,  /* sh: p1 */
    1,  /* sw: p1 */
    1,  /* swl: p1 */
    1,  /* swr: p1 */
    1,  /* ll: p1 */
    1,  /* sc: p1 */
    1,  /* sync: p1 */
    1,  /* lwu: p1 */
    1,  /* ld: p1 */
    1,  /* ldl: p1 */
    1,  /* ldr: p1 */
    1,  /* lld: p1 */
    1,  /* sd: p1 */
    1,  /* sdl: p1 */
    1,  /* sdr: p1 */
    1,  /* scd: p1 */
    1,  /* pref: p1 */
    1,  /* prefx: p1 */
    1,  /* add: p1 */
    1,  /* addi: p1 */
    1,  /* addiu: p1 */
    1,  /* addu: p1 */
    1,  /* div: p1 */
    1,  /* divu: p1 */
    1,  /* mul: p1 */
    1,  /* mult: p1 */
    1,  /* multu: p1 */
    1,  /* slt: p1 */
    1,  /* slti: p1 */
    1,  /* sltiu: p1 */
    1,  /* sltu: p1 */
    1,  /* sub: p1 */
    1,  /* subu: p1 */
    1,  /* dadd: p1 */
    1,  /* daddi: p1 */
    1,  /* daddiu: p1 */
    1,  /* daddu: p1 */
    1,  /* ddiv: p1 */
    1,  /* ddivu: p1 */
    1,  /* dmult: p1 */
    1,  /* dmultu: p1 */
    1,  /* dsub: p1 */
    1,  /* dsubu: p1 */
    1,  /* and: p1 */
    1,  /* andi: p1 */
    1,  /* lui: p1 */
    1,  /* nor: p1 */
    1,  /* or: p1 */
    1,  /* ori: p1 */
    1,  /* xor: p1 */
    1,  /* xori: p1 */
    1,  /* clo: p1 */
    1,  /* clz: p1 */
    1,  /* dclo: p1 */
    1,  /* dclz: p1 */
    1,  /* mfhi: p1 */
    1,  /* mflo: p1 */
    1,  /* mthi: p1 */
    1,  /* mtlo: p1 */
    1,  /* movf: p1 */
    1,  /* movn: p1 */
    1,  /* movt: p1 */
    1,  /* movz: p1 */
    1,  /* sll: p1 */
    1,  /* sllv: p1 */
    1,  /* sra: p1 */
    1,  /* srav: p1 */
    1,  /* srl: p1 */
    1,  /* srlv: p1 */
    1,  /* dsll: p1 */
    1,  /* dsll32: p1 */
    1,  /* dsllv: p1 */
    1,  /* dsra: p1 */
    1,  /* dsra32: p1 */
    1,  /* dsrav: p1 */
    1,  /* dsrl: p1 */
    1,  /* dsrl32: p1 */
    1,  /* dsrlv: p1 */
    1,  /* beq: p1 */
    1,  /* bgez: p1 */
    1,  /* bgezal: p1 */
    1,  /* bgtz: p1 */
    1,  /* blez: p1 */
    1,  /* bltz: p1 */
    1,  /* bltzal: p1 */
    1,  /* bne: p1 */
    1,  /* j: p1 */
    1,  /* jal: p1 */
    1,  /* jalr: p1 */
    1,  /* jr: p1 */
    1,  /* break: p1 */
    1,  /* syscall: p1 */
    1,  /* teq: p1 */
    1,  /* teqi: p1 */
    1,  /* tge: p1 */
    1,  /* tgei: p1 */
    1,  /* tgeiu: p1 */
    1,  /* tgeu: p1 */
    1,  /* tlt: p1 */
    1,  /* tlti: p1 */
    1,  /* tltiu: p1 */
    1,  /* tltu: p1 */
    1,  /* tne: p1 */
    1,  /* tnei: p1 */
    1,  /* lwc1: p1 */
    1,  /* ldc1: p1 */
    1,  /* lwxc1: p1 */
    1,  /* ldxc1: p1 */
    1,  /* swc1: p1 */
    1,  /* sdc1: p1 */
    1,  /* swxc1: p1 */
    1,  /* sdxc1: p1 */
    1,  /* abs.s: p1 */
    1,  /* abs.d: p1 */
    1,  /* add.s: p1 */
    1,  /* add.d: p1 */
    1,  /* c.f.s: p1 */
    1,  /* c.f.d: p1 */
    1,  /* c.t.s: p1 */
    1,  /* c.t.d: p1 */
    1,  /* c.un.s: p1 */
    1,  /* c.un.d: p1 */
    1,  /* c.or.s: p1 */
    1,  /* c.or.d: p1 */
    1,  /* c.eq.s: p1 */
    1,  /* c.eq.d: p1 */
    1,  /* c.neq.s: p1 */
    1,  /* c.neq.d: p1 */
    1,  /* c.ueq.s: p1 */
    1,  /* c.ueq.d: p1 */
    1,  /* c.ogl.s: p1 */
    1,  /* c.ogl.d: p1 */
    1,  /* c.olt.s: p1 */
    1,  /* c.olt.d: p1 */
    1,  /* c.uge.s: p1 */
    1,  /* c.uge.d: p1 */
    1,  /* c.ult.s: p1 */
    1,  /* c.ult.d: p1 */
    1,  /* c.oge.s: p1 */
    1,  /* c.oge.d: p1 */
    1,  /* c.ole.s: p1 */
    1,  /* c.ole.d: p1 */
    1,  /* c.ugt.s: p1 */
    1,  /* c.ugt.d: p1 */
    1,  /* c.ule.s: p1 */
    1,  /* c.ule.d: p1 */
    1,  /* c.ogt.s: p1 */
    1,  /* c.ogt.d: p1 */
    1,  /* c.sf.s: p1 */
    1,  /* c.sf.d: p1 */
    1,  /* c.st.s: p1 */
    1,  /* c.st.d: p1 */
    1,  /* c.ngle.s: p1 */
    1,  /* c.ngle.d: p1 */
    1,  /* c.gle.s: p1 */
    1,  /* c.gle.d: p1 */
    1,  /* c.seq.s: p1 */
    1,  /* c.seq.d: p1 */
    1,  /* c.sne.s: p1 */
    1,  /* c.sne.d: p1 */
    1,  /* c.ngl.s: p1 */
    1,  /* c.ngl.d: p1 */
    1,  /* c.gl.s: p1 */
    1,  /* c.gl.d: p1 */
    1,  /* c.lt.s: p1 */
    1,  /* c.lt.d: p1 */
    1,  /* c.nlt.s: p1 */
    1,  /* c.nlt.d: p1 */
    1,  /* c.nge.s: p1 */
    1,  /* c.nge.d: p1 */
    1,  /* c.ge.s: p1 */
    1,  /* c.ge.d: p1 */
    1,  /* c.le.s: p1 */
    1,  /* c.le.d: p1 */
    1,  /* c.nle.s: p1 */
    1,  /* c.nle.d: p1 */
    1,  /* c.ngt.s: p1 */
    1,  /* c.ngt.d: p1 */
    1,  /* c.gt.s: p1 */
    1,  /* c.gt.d: p1 */
    1,  /* div.s: p1 */
    1,  /* div.d: p1 */
    1,  /* mul.s: p1 */
    1,  /* mul.d: p1 */
    1,  /* neg.s: p1 */
    1,  /* neg.d: p1 */
    1,  /* sub.s: p1 */
    1,  /* sub.d: p1 */
    1,  /* sqrt.s: p1 */
    1,  /* sqrt.d: p1 */
    1,  /* madd.s: p1 */
    1,  /* madd.d: p1 */
    1,  /* msub.s: p1 */
    1,  /* msub.d: p1 */
    1,  /* nmadd.s: p1 */
    1,  /* nmadd.d: p1 */
    1,  /* nmsub.s: p1 */
    1,  /* nmsub.d: p1 */
    1,  /* recip.s: p1 */
    1,  /* recip.d: p1 */
    1,  /* rsqrt.s: p1 */
    1,  /* rsqrt.d: p1 */
    1,  /* cfc1: p1 */
    1,  /* ctc1: p1 */
    1,  /* mfc1: p1 */
    1,  /* mtc1: p1 */
    1,  /* dmfc1: p1 */
    1,  /* dmtc1: p1 */
    1,  /* mov.s: p1 */
    1,  /* mov.d: p1 */
    1,  /* movf.s: p1 */
    1,  /* movf.d: p1 */
    1,  /* movn.s: p1 */
    1,  /* movn.d: p1 */
    1,  /* movt.s: p1 */
    1,  /* movt.d: p1 */
    1,  /* movz.s: p1 */
    1,  /* movz.d: p1 */
    1,  /* cvt.d.s: p1 */
    1,  /* cvt.d.w: p1 */
    1,  /* cvt.d.l: p1 */
    1,  /* cvt.l.s: p1 */
    1,  /* cvt.l.d: p1 */
    1,  /* cvt.s.d: p1 */
    1,  /* cvt.s.w: p1 */
    1,  /* cvt.s.l: p1 */
    1,  /* cvt.w.s: p1 */
    1,  /* cvt.w.d: p1 */
    1,  /* ceil.w.s: p1 */
    1,  /* ceil.w.d: p1 */
    1,  /* ceil.l.s: p1 */
    1,  /* ceil.l.d: p1 */
    1,  /* floor.w.s: p1 */
    1,  /* floor.w.d: p1 */
    1,  /* floor.l.s: p1 */
    1,  /* floor.l.d: p1 */
    1,  /* round.w.s: p1 */
    1,  /* round.w.d: p1 */
    1,  /* round.l.s: p1 */
    1,  /* round.l.d: p1 */
    1,  /* trunc.w.s: p1 */
    1,  /* trunc.w.d: p1 */
    1,  /* trunc.l.s: p1 */
    1,  /* trunc.l.d: p1 */
    1,  /* bc1f: p1 */
    1,  /* bc1t: p1 */
    1,  /* dsbh: p1 */
    1,  /* dshd: p1 */
    1,  /* seb: p1 */
    1,  /* seh: p1 */
    1,  /* wsbh: p1 */
    1,  /* dext: p1 */
    1,  /* dextm: p1 */
    1,  /* dextu: p1 */
    1,  /* dins: p1 */
    1,  /* dinsm: p1 */
    1,  /* dinsu: p1 */
    1,  /* drotr: p1 */
    1,  /* drotr32: p1 */
    1,  /* drotrv: p1 */
    1,  /* ext: p1 */
    1,  /* ins: p1 */
    1,  /* rotr: p1 */
    1,  /* rotrv: p1 */
    1,  /* alnv.ps: p1 */
    1,  /* movn.ps: p1 */
    1,  /* movz.ps: p1 */
    1,  /* abs.ps: p1 */
    1,  /* c.eq.ps: p1 */
    1,  /* c.f.ps: p1 */
    1,  /* c.ge.ps: p1 */
    1,  /* c.gl.ps: p1 */
    1,  /* c.gle.ps: p1 */
    1,  /* c.gt.ps: p1 */
    1,  /* c.le.ps: p1 */
    1,  /* c.lt.ps: p1 */
    1,  /* c.neq.ps: p1 */
    1,  /* c.nge.ps: p1 */
    1,  /* c.ngl.ps: p1 */
    1,  /* c.ngle.ps: p1 */
    1,  /* c.ngt.ps: p1 */
    1,  /* c.nle.ps: p1 */
    1,  /* c.nlt.ps: p1 */
    1,  /* c.oge.ps: p1 */
    1,  /* c.ogl.ps: p1 */
    1,  /* c.ogt.ps: p1 */
    1,  /* c.ole.ps: p1 */
    1,  /* c.olt.ps: p1 */
    1,  /* c.or.ps: p1 */
    1,  /* c.seq.ps: p1 */
    1,  /* c.sf.ps: p1 */
    1,  /* c.sne.ps: p1 */
    1,  /* c.st.ps: p1 */
    1,  /* c.t.ps: p1 */
    1,  /* c.ueq.ps: p1 */
    1,  /* c.uge.ps: p1 */
    1,  /* c.ugt.ps: p1 */
    1,  /* c.ule.ps: p1 */
    1,  /* c.ult.ps: p1 */
    1,  /* c.un.ps: p1 */
    1,  /* cvt.ps.s: p1 */
    1,  /* cvt.s.pl: p1 */
    1,  /* cvt.s.pu: p1 */
    1,  /* mov.ps: p1 */
    1,  /* movf.ps: p1 */
    1,  /* movt.ps: p1 */
    1,  /* neg.ps: p1 */
    1,  /* pll.ps: p1 */
    1,  /* plu.ps: p1 */
    1,  /* pul.ps: p1 */
    1,  /* puu.ps: p1 */
    1,  /* add.ps: p1 */
    1,  /* madd.ps: p1 */
    1,  /* msub.ps: p1 */
    1,  /* mul.ps: p1 */
    1,  /* nmadd.ps: p1 */
    1,  /* nmsub.ps: p1 */
    1,  /* sub.ps: p1 */
    1,  /* lbx: p1 */
    1,  /* ldx: p1 */
    1,  /* lhx: p1 */
    1,  /* lwx: p1 */
    1,  /* madd: p1 */
    1,  /* maddu: p1 */
    1,  /* msub: p1 */
    1,  /* msubu: p1 */
    1,  /* dmadd: p1 */
    1,  /* dmaddu: p1 */
    1,  /* dmsub: p1 */
    1,  /* dmsubu: p1 */
    1,  /* dmulg: p1 */
    1,  /* dmulgu: p1 */
    1,  /* mfacx: p1 */
    1,  /* mtacx: p1 */
    1,  /* dperm: p1 */
    1,  /* pop: p1 */
    1,  /* dpop: p1 */
    1,  /* luxc1: p1 */
    1,  /* suxc1: p1 */
    1,  /* addred.ps: p1 */
    1,  /* mulred.ps: p1 */
    1,  /* ma.nlupuu.ps: p1 */
    1,  /* ma.plunuu.ps: p1 */
    1,  /* ma.plupll.ps: p1 */
    1,  /* ma.puupul.ps: p1 */
    1,  /* recipit1.d: p1 */
    1,  /* recipit1.s: p1 */
    1,  /* recipit1.ps: p1 */
    1,  /* recipit2.d: p1 */
    1,  /* recipit2.s: p1 */
    1,  /* recipit2.ps: p1 */
    1,  /* rsqrtit1.d: p1 */
    1,  /* rsqrtit1.s: p1 */
    1,  /* rsqrtit1.ps: p1 */
    1,  /* rsqrtit2.d: p1 */
    1,  /* rsqrtit2.s: p1 */
    1,  /* rsqrtit2.ps: p1 */
    1,  /* mfhc1: p1 */
    1,  /* mthc1: p1 */
    1,  /* bc2any2f: p1 */
    1,  /* bc2any2t: p1 */
    1,  /* perfctl: p1 */
    1,  /* tlbwir: p1 */
    1,  /* tlbwrr: p1 */
    0,  /* sext */
    0,  /* asm */
    0,  /* intrncall */
    0,  /* spadjust */
    0,  /* mov_hilo */
    0,  /* mov_fcc */
    0,  /* begin_pregtn */
    0,  /* end_pregtn */
    0,  /* bwd_bar */
    0,  /* fwd_bar */
    0,  /* dfixup */
    0,  /* ffixup */
    0,  /* ifixup */
    0,  /* label */
    1,  /* nop: p1 */
    0,  /* noop */
    0,  /* swp_start */
    0,  /* swp_stop */
};

const mUINT32 ISA_PACK_init_mask[390][1] = {
  { 0x000000ff, }, /* lb */
  { 0x000000ff, }, /* lbu */
  { 0x000000ff, }, /* lh */
  { 0x000000ff, }, /* lhu */
  { 0x000000ff, }, /* lw */
  { 0x000000ff, }, /* lwl */
  { 0x000000ff, }, /* lwr */
  { 0x000000ff, }, /* sb */
  { 0x000000ff, }, /* sh */
  { 0x000000ff, }, /* sw */
  { 0x000000ff, }, /* swl */
  { 0x000000ff, }, /* swr */
  { 0x000000ff, }, /* ll */
  { 0x000000ff, }, /* sc */
  { 0x000000ff, }, /* sync */
  { 0x000000ff, }, /* lwu */
  { 0x000000ff, }, /* ld */
  { 0x000000ff, }, /* ldl */
  { 0x000000ff, }, /* ldr */
  { 0x000000ff, }, /* lld */
  { 0x000000ff, }, /* sd */
  { 0x000000ff, }, /* sdl */
  { 0x000000ff, }, /* sdr */
  { 0x000000ff, }, /* scd */
  { 0x000000ff, }, /* pref */
  { 0x000000ff, }, /* prefx */
  { 0x000000ff, }, /* add */
  { 0x000000ff, }, /* addi */
  { 0x000000ff, }, /* addiu */
  { 0x000000ff, }, /* addu */
  { 0x000000ff, }, /* div */
  { 0x000000ff, }, /* divu */
  { 0x000000ff, }, /* mul */
  { 0x000000ff, }, /* mult */
  { 0x000000ff, }, /* multu */
  { 0x000000ff, }, /* slt */
  { 0x000000ff, }, /* slti */
  { 0x000000ff, }, /* sltiu */
  { 0x000000ff, }, /* sltu */
  { 0x000000ff, }, /* sub */
  { 0x000000ff, }, /* subu */
  { 0x000000ff, }, /* dadd */
  { 0x000000ff, }, /* daddi */
  { 0x000000ff, }, /* daddiu */
  { 0x000000ff, }, /* daddu */
  { 0x000000ff, }, /* ddiv */
  { 0x000000ff, }, /* ddivu */
  { 0x000000ff, }, /* dmult */
  { 0x000000ff, }, /* dmultu */
  { 0x000000ff, }, /* dsub */
  { 0x000000ff, }, /* dsubu */
  { 0x000000ff, }, /* and */
  { 0x000000ff, }, /* andi */
  { 0x000000ff, }, /* lui */
  { 0x000000ff, }, /* nor */
  { 0x000000ff, }, /* or */
  { 0x000000ff, }, /* ori */
  { 0x000000ff, }, /* xor */
  { 0x000000ff, }, /* xori */
  { 0x000000ff, }, /* clo */
  { 0x000000ff, }, /* clz */
  { 0x000000ff, }, /* dclo */
  { 0x000000ff, }, /* dclz */
  { 0x000000ff, }, /* mfhi */
  { 0x000000ff, }, /* mflo */
  { 0x000000ff, }, /* mthi */
  { 0x000000ff, }, /* mtlo */
  { 0x000000ff, }, /* movf */
  { 0x000000ff, }, /* movn */
  { 0x000000ff, }, /* movt */
  { 0x000000ff, }, /* movz */
  { 0x000000ff, }, /* sll */
  { 0x000000ff, }, /* sllv */
  { 0x000000ff, }, /* sra */
  { 0x000000ff, }, /* srav */
  { 0x000000ff, }, /* srl */
  { 0x000000ff, }, /* srlv */
  { 0x000000ff, }, /* dsll */
  { 0x000000ff, }, /* dsll32 */
  { 0x000000ff, }, /* dsllv */
  { 0x000000ff, }, /* dsra */
  { 0x000000ff, }, /* dsra32 */
  { 0x000000ff, }, /* dsrav */
  { 0x000000ff, }, /* dsrl */
  { 0x000000ff, }, /* dsrl32 */
  { 0x000000ff, }, /* dsrlv */
  { 0x000000ff, }, /* beq */
  { 0x000000ff, }, /* bgez */
  { 0x000000ff, }, /* bgezal */
  { 0x000000ff, }, /* bgtz */
  { 0x000000ff, }, /* blez */
  { 0x000000ff, }, /* bltz */
  { 0x000000ff, }, /* bltzal */
  { 0x000000ff, }, /* bne */
  { 0x000000ff, }, /* j */
  { 0x000000ff, }, /* jal */
  { 0x000000ff, }, /* jalr */
  { 0x000000ff, }, /* jr */
  { 0x000000ff, }, /* break */
  { 0x000000ff, }, /* syscall */
  { 0x000000ff, }, /* teq */
  { 0x000000ff, }, /* teqi */
  { 0x000000ff, }, /* tge */
  { 0x000000ff, }, /* tgei */
  { 0x000000ff, }, /* tgeiu */
  { 0x000000ff, }, /* tgeu */
  { 0x000000ff, }, /* tlt */
  { 0x000000ff, }, /* tlti */
  { 0x000000ff, }, /* tltiu */
  { 0x000000ff, }, /* tltu */
  { 0x000000ff, }, /* tne */
  { 0x000000ff, }, /* tnei */
  { 0x000000ff, }, /* lwc1 */
  { 0x000000ff, }, /* ldc1 */
  { 0x000000ff, }, /* lwxc1 */
  { 0x000000ff, }, /* ldxc1 */
  { 0x000000ff, }, /* swc1 */
  { 0x000000ff, }, /* sdc1 */
  { 0x000000ff, }, /* swxc1 */
  { 0x000000ff, }, /* sdxc1 */
  { 0x000000ff, }, /* abs.s */
  { 0x000000ff, }, /* abs.d */
  { 0x000000ff, }, /* add.s */
  { 0x000000ff, }, /* add.d */
  { 0x000000ff, }, /* c.f.s */
  { 0x000000ff, }, /* c.f.d */
  { 0x000000ff, }, /* c.t.s */
  { 0x000000ff, }, /* c.t.d */
  { 0x000000ff, }, /* c.un.s */
  { 0x000000ff, }, /* c.un.d */
  { 0x000000ff, }, /* c.or.s */
  { 0x000000ff, }, /* c.or.d */
  { 0x000000ff, }, /* c.eq.s */
  { 0x000000ff, }, /* c.eq.d */
  { 0x000000ff, }, /* c.neq.s */
  { 0x000000ff, }, /* c.neq.d */
  { 0x000000ff, }, /* c.ueq.s */
  { 0x000000ff, }, /* c.ueq.d */
  { 0x000000ff, }, /* c.ogl.s */
  { 0x000000ff, }, /* c.ogl.d */
  { 0x000000ff, }, /* c.olt.s */
  { 0x000000ff, }, /* c.olt.d */
  { 0x000000ff, }, /* c.uge.s */
  { 0x000000ff, }, /* c.uge.d */
  { 0x000000ff, }, /* c.ult.s */
  { 0x000000ff, }, /* c.ult.d */
  { 0x000000ff, }, /* c.oge.s */
  { 0x000000ff, }, /* c.oge.d */
  { 0x000000ff, }, /* c.ole.s */
  { 0x000000ff, }, /* c.ole.d */
  { 0x000000ff, }, /* c.ugt.s */
  { 0x000000ff, }, /* c.ugt.d */
  { 0x000000ff, }, /* c.ule.s */
  { 0x000000ff, }, /* c.ule.d */
  { 0x000000ff, }, /* c.ogt.s */
  { 0x000000ff, }, /* c.ogt.d */
  { 0x000000ff, }, /* c.sf.s */
  { 0x000000ff, }, /* c.sf.d */
  { 0x000000ff, }, /* c.st.s */
  { 0x000000ff, }, /* c.st.d */
  { 0x000000ff, }, /* c.ngle.s */
  { 0x000000ff, }, /* c.ngle.d */
  { 0x000000ff, }, /* c.gle.s */
  { 0x000000ff, }, /* c.gle.d */
  { 0x000000ff, }, /* c.seq.s */
  { 0x000000ff, }, /* c.seq.d */
  { 0x000000ff, }, /* c.sne.s */
  { 0x000000ff, }, /* c.sne.d */
  { 0x000000ff, }, /* c.ngl.s */
  { 0x000000ff, }, /* c.ngl.d */
  { 0x000000ff, }, /* c.gl.s */
  { 0x000000ff, }, /* c.gl.d */
  { 0x000000ff, }, /* c.lt.s */
  { 0x000000ff, }, /* c.lt.d */
  { 0x000000ff, }, /* c.nlt.s */
  { 0x000000ff, }, /* c.nlt.d */
  { 0x000000ff, }, /* c.nge.s */
  { 0x000000ff, }, /* c.nge.d */
  { 0x000000ff, }, /* c.ge.s */
  { 0x000000ff, }, /* c.ge.d */
  { 0x000000ff, }, /* c.le.s */
  { 0x000000ff, }, /* c.le.d */
  { 0x000000ff, }, /* c.nle.s */
  { 0x000000ff, }, /* c.nle.d */
  { 0x000000ff, }, /* c.ngt.s */
  { 0x000000ff, }, /* c.ngt.d */
  { 0x000000ff, }, /* c.gt.s */
  { 0x000000ff, }, /* c.gt.d */
  { 0x000000ff, }, /* div.s */
  { 0x000000ff, }, /* div.d */
  { 0x000000ff, }, /* mul.s */
  { 0x000000ff, }, /* mul.d */
  { 0x000000ff, }, /* neg.s */
  { 0x000000ff, }, /* neg.d */
  { 0x000000ff, }, /* sub.s */
  { 0x000000ff, }, /* sub.d */
  { 0x000000ff, }, /* sqrt.s */
  { 0x000000ff, }, /* sqrt.d */
  { 0x000000ff, }, /* madd.s */
  { 0x000000ff, }, /* madd.d */
  { 0x000000ff, }, /* msub.s */
  { 0x000000ff, }, /* msub.d */
  { 0x000000ff, }, /* nmadd.s */
  { 0x000000ff, }, /* nmadd.d */
  { 0x000000ff, }, /* nmsub.s */
  { 0x000000ff, }, /* nmsub.d */
  { 0x000000ff, }, /* recip.s */
  { 0x000000ff, }, /* recip.d */
  { 0x000000ff, }, /* rsqrt.s */
  { 0x000000ff, }, /* rsqrt.d */
  { 0x000000ff, }, /* cfc1 */
  { 0x000000ff, }, /* ctc1 */
  { 0x000000ff, }, /* mfc1 */
  { 0x000000ff, }, /* mtc1 */
  { 0x000000ff, }, /* dmfc1 */
  { 0x000000ff, }, /* dmtc1 */
  { 0x000000ff, }, /* mov.s */
  { 0x000000ff, }, /* mov.d */
  { 0x000000ff, }, /* movf.s */
  { 0x000000ff, }, /* movf.d */
  { 0x000000ff, }, /* movn.s */
  { 0x000000ff, }, /* movn.d */
  { 0x000000ff, }, /* movt.s */
  { 0x000000ff, }, /* movt.d */
  { 0x000000ff, }, /* movz.s */
  { 0x000000ff, }, /* movz.d */
  { 0x000000ff, }, /* cvt.d.s */
  { 0x000000ff, }, /* cvt.d.w */
  { 0x000000ff, }, /* cvt.d.l */
  { 0x000000ff, }, /* cvt.l.s */
  { 0x000000ff, }, /* cvt.l.d */
  { 0x000000ff, }, /* cvt.s.d */
  { 0x000000ff, }, /* cvt.s.w */
  { 0x000000ff, }, /* cvt.s.l */
  { 0x000000ff, }, /* cvt.w.s */
  { 0x000000ff, }, /* cvt.w.d */
  { 0x000000ff, }, /* ceil.w.s */
  { 0x000000ff, }, /* ceil.w.d */
  { 0x000000ff, }, /* ceil.l.s */
  { 0x000000ff, }, /* ceil.l.d */
  { 0x000000ff, }, /* floor.w.s */
  { 0x000000ff, }, /* floor.w.d */
  { 0x000000ff, }, /* floor.l.s */
  { 0x000000ff, }, /* floor.l.d */
  { 0x000000ff, }, /* round.w.s */
  { 0x000000ff, }, /* round.w.d */
  { 0x000000ff, }, /* round.l.s */
  { 0x000000ff, }, /* round.l.d */
  { 0x000000ff, }, /* trunc.w.s */
  { 0x000000ff, }, /* trunc.w.d */
  { 0x000000ff, }, /* trunc.l.s */
  { 0x000000ff, }, /* trunc.l.d */
  { 0x000000ff, }, /* bc1f */
  { 0x000000ff, }, /* bc1t */
  { 0x000000ff, }, /* dsbh */
  { 0x000000ff, }, /* dshd */
  { 0x000000ff, }, /* seb */
  { 0x000000ff, }, /* seh */
  { 0x000000ff, }, /* wsbh */
  { 0x000000ff, }, /* dext */
  { 0x000000ff, }, /* dextm */
  { 0x000000ff, }, /* dextu */
  { 0x000000ff, }, /* dins */
  { 0x000000ff, }, /* dinsm */
  { 0x000000ff, }, /* dinsu */
  { 0x000000ff, }, /* drotr */
  { 0x000000ff, }, /* drotr32 */
  { 0x000000ff, }, /* drotrv */
  { 0x000000ff, }, /* ext */
  { 0x000000ff, }, /* ins */
  { 0x000000ff, }, /* rotr */
  { 0x000000ff, }, /* rotrv */
  { 0x000000ff, }, /* alnv.ps */
  { 0x000000ff, }, /* movn.ps */
  { 0x000000ff, }, /* movz.ps */
  { 0x000000ff, }, /* abs.ps */
  { 0x000000ff, }, /* c.eq.ps */
  { 0x000000ff, }, /* c.f.ps */
  { 0x000000ff, }, /* c.ge.ps */
  { 0x000000ff, }, /* c.gl.ps */
  { 0x000000ff, }, /* c.gle.ps */
  { 0x000000ff, }, /* c.gt.ps */
  { 0x000000ff, }, /* c.le.ps */
  { 0x000000ff, }, /* c.lt.ps */
  { 0x000000ff, }, /* c.neq.ps */
  { 0x000000ff, }, /* c.nge.ps */
  { 0x000000ff, }, /* c.ngl.ps */
  { 0x000000ff, }, /* c.ngle.ps */
  { 0x000000ff, }, /* c.ngt.ps */
  { 0x000000ff, }, /* c.nle.ps */
  { 0x000000ff, }, /* c.nlt.ps */
  { 0x000000ff, }, /* c.oge.ps */
  { 0x000000ff, }, /* c.ogl.ps */
  { 0x000000ff, }, /* c.ogt.ps */
  { 0x000000ff, }, /* c.ole.ps */
  { 0x000000ff, }, /* c.olt.ps */
  { 0x000000ff, }, /* c.or.ps */
  { 0x000000ff, }, /* c.seq.ps */
  { 0x000000ff, }, /* c.sf.ps */
  { 0x000000ff, }, /* c.sne.ps */
  { 0x000000ff, }, /* c.st.ps */
  { 0x000000ff, }, /* c.t.ps */
  { 0x000000ff, }, /* c.ueq.ps */
  { 0x000000ff, }, /* c.uge.ps */
  { 0x000000ff, }, /* c.ugt.ps */
  { 0x000000ff, }, /* c.ule.ps */
  { 0x000000ff, }, /* c.ult.ps */
  { 0x000000ff, }, /* c.un.ps */
  { 0x000000ff, }, /* cvt.ps.s */
  { 0x000000ff, }, /* cvt.s.pl */
  { 0x000000ff, }, /* cvt.s.pu */
  { 0x000000ff, }, /* mov.ps */
  { 0x000000ff, }, /* movf.ps */
  { 0x000000ff, }, /* movt.ps */
  { 0x000000ff, }, /* neg.ps */
  { 0x000000ff, }, /* pll.ps */
  { 0x000000ff, }, /* plu.ps */
  { 0x000000ff, }, /* pul.ps */
  { 0x000000ff, }, /* puu.ps */
  { 0x000000ff, }, /* add.ps */
  { 0x000000ff, }, /* madd.ps */
  { 0x000000ff, }, /* msub.ps */
  { 0x000000ff, }, /* mul.ps */
  { 0x000000ff, }, /* nmadd.ps */
  { 0x000000ff, }, /* nmsub.ps */
  { 0x000000ff, }, /* sub.ps */
  { 0x000000ff, }, /* lbx */
  { 0x000000ff, }, /* ldx */
  { 0x000000ff, }, /* lhx */
  { 0x000000ff, }, /* lwx */
  { 0x000000ff, }, /* madd */
  { 0x000000ff, }, /* maddu */
  { 0x000000ff, }, /* msub */
  { 0x000000ff, }, /* msubu */
  { 0x000000ff, }, /* dmadd */
  { 0x000000ff, }, /* dmaddu */
  { 0x000000ff, }, /* dmsub */
  { 0x000000ff, }, /* dmsubu */
  { 0x000000ff, }, /* dmulg */
  { 0x000000ff, }, /* dmulgu */
  { 0x000000ff, }, /* mfacx */
  { 0x000000ff, }, /* mtacx */
  { 0x000000ff, }, /* dperm */
  { 0x000000ff, }, /* pop */
  { 0x000000ff, }, /* dpop */
  { 0x000000ff, }, /* luxc1 */
  { 0x000000ff, }, /* suxc1 */
  { 0x000000ff, }, /* addred.ps */
  { 0x000000ff, }, /* mulred.ps */
  { 0x000000ff, }, /* ma.nlupuu.ps */
  { 0x000000ff, }, /* ma.plunuu.ps */
  { 0x000000ff, }, /* ma.plupll.ps */
  { 0x000000ff, }, /* ma.puupul.ps */
  { 0x000000ff, }, /* recipit1.d */
  { 0x000000ff, }, /* recipit1.s */
  { 0x000000ff, }, /* recipit1.ps */
  { 0x000000ff, }, /* recipit2.d */
  { 0x000000ff, }, /* recipit2.s */
  { 0x000000ff, }, /* recipit2.ps */
  { 0x000000ff, }, /* rsqrtit1.d */
  { 0x000000ff, }, /* rsqrtit1.s */
  { 0x000000ff, }, /* rsqrtit1.ps */
  { 0x000000ff, }, /* rsqrtit2.d */
  { 0x000000ff, }, /* rsqrtit2.s */
  { 0x000000ff, }, /* rsqrtit2.ps */
  { 0x000000ff, }, /* mfhc1 */
  { 0x000000ff, }, /* mthc1 */
  { 0x000000ff, }, /* bc2any2f */
  { 0x000000ff, }, /* bc2any2t */
  { 0x000000ff, }, /* perfctl */
  { 0x000000ff, }, /* tlbwir */
  { 0x000000ff, }, /* tlbwrr */
  { 0x00000000, }, /* sext */
  { 0x00000000, }, /* asm */
  { 0x00000000, }, /* intrncall */
  { 0x00000000, }, /* spadjust */
  { 0x00000000, }, /* mov_hilo */
  { 0x00000000, }, /* mov_fcc */
  { 0x00000000, }, /* begin_pregtn */
  { 0x00000000, }, /* end_pregtn */
  { 0x00000000, }, /* bwd_bar */
  { 0x00000000, }, /* fwd_bar */
  { 0x00000000, }, /* dfixup */
  { 0x00000000, }, /* ffixup */
  { 0x00000000, }, /* ifixup */
  { 0x00000000, }, /* label */
  { 0x000000ff, }, /* nop */
  { 0x00000000, }, /* noop */
  { 0x00000000, }, /* swp_start */
  { 0x00000000, }, /* swp_stop */
};

const ISA_PACK_ADJ_INFO ISA_PACK_adj_info[] = {
  { {  0,  0 }, -1 },  /* [ 0]: ISA_PACK_ADJ_END */
};

const mUINT8 ISA_PACK_adj_info_index[] = {
   0,  /* lb */
   0,  /* lbu */
   0,  /* lh */
   0,  /* lhu */
   0,  /* lw */
   0,  /* lwl */
   0,  /* lwr */
   0,  /* sb */
   0,  /* sh */
   0,  /* sw */
   0,  /* swl */
   0,  /* swr */
   0,  /* ll */
   0,  /* sc */
   0,  /* sync */
   0,  /* lwu */
   0,  /* ld */
   0,  /* ldl */
   0,  /* ldr */
   0,  /* lld */
   0,  /* sd */
   0,  /* sdl */
   0,  /* sdr */
   0,  /* scd */
   0,  /* pref */
   0,  /* prefx */
   0,  /* add */
   0,  /* addi */
   0,  /* addiu */
   0,  /* addu */
   0,  /* div */
   0,  /* divu */
   0,  /* mul */
   0,  /* mult */
   0,  /* multu */
   0,  /* slt */
   0,  /* slti */
   0,  /* sltiu */
   0,  /* sltu */
   0,  /* sub */
   0,  /* subu */
   0,  /* dadd */
   0,  /* daddi */
   0,  /* daddiu */
   0,  /* daddu */
   0,  /* ddiv */
   0,  /* ddivu */
   0,  /* dmult */
   0,  /* dmultu */
   0,  /* dsub */
   0,  /* dsubu */
   0,  /* and */
   0,  /* andi */
   0,  /* lui */
   0,  /* nor */
   0,  /* or */
   0,  /* ori */
   0,  /* xor */
   0,  /* xori */
   0,  /* clo */
   0,  /* clz */
   0,  /* dclo */
   0,  /* dclz */
   0,  /* mfhi */
   0,  /* mflo */
   0,  /* mthi */
   0,  /* mtlo */
   0,  /* movf */
   0,  /* movn */
   0,  /* movt */
   0,  /* movz */
   0,  /* sll */
   0,  /* sllv */
   0,  /* sra */
   0,  /* srav */
   0,  /* srl */
   0,  /* srlv */
   0,  /* dsll */
   0,  /* dsll32 */
   0,  /* dsllv */
   0,  /* dsra */
   0,  /* dsra32 */
   0,  /* dsrav */
   0,  /* dsrl */
   0,  /* dsrl32 */
   0,  /* dsrlv */
   0,  /* beq */
   0,  /* bgez */
   0,  /* bgezal */
   0,  /* bgtz */
   0,  /* blez */
   0,  /* bltz */
   0,  /* bltzal */
   0,  /* bne */
   0,  /* j */
   0,  /* jal */
   0,  /* jalr */
   0,  /* jr */
   0,  /* break */
   0,  /* syscall */
   0,  /* teq */
   0,  /* teqi */
   0,  /* tge */
   0,  /* tgei */
   0,  /* tgeiu */
   0,  /* tgeu */
   0,  /* tlt */
   0,  /* tlti */
   0,  /* tltiu */
   0,  /* tltu */
   0,  /* tne */
   0,  /* tnei */
   0,  /* lwc1 */
   0,  /* ldc1 */
   0,  /* lwxc1 */
   0,  /* ldxc1 */
   0,  /* swc1 */
   0,  /* sdc1 */
   0,  /* swxc1 */
   0,  /* sdxc1 */
   0,  /* abs.s */
   0,  /* abs.d */
   0,  /* add.s */
   0,  /* add.d */
   0,  /* c.f.s */
   0,  /* c.f.d */
   0,  /* c.t.s */
   0,  /* c.t.d */
   0,  /* c.un.s */
   0,  /* c.un.d */
   0,  /* c.or.s */
   0,  /* c.or.d */
   0,  /* c.eq.s */
   0,  /* c.eq.d */
   0,  /* c.neq.s */
   0,  /* c.neq.d */
   0,  /* c.ueq.s */
   0,  /* c.ueq.d */
   0,  /* c.ogl.s */
   0,  /* c.ogl.d */
   0,  /* c.olt.s */
   0,  /* c.olt.d */
   0,  /* c.uge.s */
   0,  /* c.uge.d */
   0,  /* c.ult.s */
   0,  /* c.ult.d */
   0,  /* c.oge.s */
   0,  /* c.oge.d */
   0,  /* c.ole.s */
   0,  /* c.ole.d */
   0,  /* c.ugt.s */
   0,  /* c.ugt.d */
   0,  /* c.ule.s */
   0,  /* c.ule.d */
   0,  /* c.ogt.s */
   0,  /* c.ogt.d */
   0,  /* c.sf.s */
   0,  /* c.sf.d */
   0,  /* c.st.s */
   0,  /* c.st.d */
   0,  /* c.ngle.s */
   0,  /* c.ngle.d */
   0,  /* c.gle.s */
   0,  /* c.gle.d */
   0,  /* c.seq.s */
   0,  /* c.seq.d */
   0,  /* c.sne.s */
   0,  /* c.sne.d */
   0,  /* c.ngl.s */
   0,  /* c.ngl.d */
   0,  /* c.gl.s */
   0,  /* c.gl.d */
   0,  /* c.lt.s */
   0,  /* c.lt.d */
   0,  /* c.nlt.s */
   0,  /* c.nlt.d */
   0,  /* c.nge.s */
   0,  /* c.nge.d */
   0,  /* c.ge.s */
   0,  /* c.ge.d */
   0,  /* c.le.s */
   0,  /* c.le.d */
   0,  /* c.nle.s */
   0,  /* c.nle.d */
   0,  /* c.ngt.s */
   0,  /* c.ngt.d */
   0,  /* c.gt.s */
   0,  /* c.gt.d */
   0,  /* div.s */
   0,  /* div.d */
   0,  /* mul.s */
   0,  /* mul.d */
   0,  /* neg.s */
   0,  /* neg.d */
   0,  /* sub.s */
   0,  /* sub.d */
   0,  /* sqrt.s */
   0,  /* sqrt.d */
   0,  /* madd.s */
   0,  /* madd.d */
   0,  /* msub.s */
   0,  /* msub.d */
   0,  /* nmadd.s */
   0,  /* nmadd.d */
   0,  /* nmsub.s */
   0,  /* nmsub.d */
   0,  /* recip.s */
   0,  /* recip.d */
   0,  /* rsqrt.s */
   0,  /* rsqrt.d */
   0,  /* cfc1 */
   0,  /* ctc1 */
   0,  /* mfc1 */
   0,  /* mtc1 */
   0,  /* dmfc1 */
   0,  /* dmtc1 */
   0,  /* mov.s */
   0,  /* mov.d */
   0,  /* movf.s */
   0,  /* movf.d */
   0,  /* movn.s */
   0,  /* movn.d */
   0,  /* movt.s */
   0,  /* movt.d */
   0,  /* movz.s */
   0,  /* movz.d */
   0,  /* cvt.d.s */
   0,  /* cvt.d.w */
   0,  /* cvt.d.l */
   0,  /* cvt.l.s */
   0,  /* cvt.l.d */
   0,  /* cvt.s.d */
   0,  /* cvt.s.w */
   0,  /* cvt.s.l */
   0,  /* cvt.w.s */
   0,  /* cvt.w.d */
   0,  /* ceil.w.s */
   0,  /* ceil.w.d */
   0,  /* ceil.l.s */
   0,  /* ceil.l.d */
   0,  /* floor.w.s */
   0,  /* floor.w.d */
   0,  /* floor.l.s */
   0,  /* floor.l.d */
   0,  /* round.w.s */
   0,  /* round.w.d */
   0,  /* round.l.s */
   0,  /* round.l.d */
   0,  /* trunc.w.s */
   0,  /* trunc.w.d */
   0,  /* trunc.l.s */
   0,  /* trunc.l.d */
   0,  /* bc1f */
   0,  /* bc1t */
   0,  /* dsbh */
   0,  /* dshd */
   0,  /* seb */
   0,  /* seh */
   0,  /* wsbh */
   0,  /* dext */
   0,  /* dextm */
   0,  /* dextu */
   0,  /* dins */
   0,  /* dinsm */
   0,  /* dinsu */
   0,  /* drotr */
   0,  /* drotr32 */
   0,  /* drotrv */
   0,  /* ext */
   0,  /* ins */
   0,  /* rotr */
   0,  /* rotrv */
   0,  /* alnv.ps */
   0,  /* movn.ps */
   0,  /* movz.ps */
   0,  /* abs.ps */
   0,  /* c.eq.ps */
   0,  /* c.f.ps */
   0,  /* c.ge.ps */
   0,  /* c.gl.ps */
   0,  /* c.gle.ps */
   0,  /* c.gt.ps */
   0,  /* c.le.ps */
   0,  /* c.lt.ps */
   0,  /* c.neq.ps */
   0,  /* c.nge.ps */
   0,  /* c.ngl.ps */
   0,  /* c.ngle.ps */
   0,  /* c.ngt.ps */
   0,  /* c.nle.ps */
   0,  /* c.nlt.ps */
   0,  /* c.oge.ps */
   0,  /* c.ogl.ps */
   0,  /* c.ogt.ps */
   0,  /* c.ole.ps */
   0,  /* c.olt.ps */
   0,  /* c.or.ps */
   0,  /* c.seq.ps */
   0,  /* c.sf.ps */
   0,  /* c.sne.ps */
   0,  /* c.st.ps */
   0,  /* c.t.ps */
   0,  /* c.ueq.ps */
   0,  /* c.uge.ps */
   0,  /* c.ugt.ps */
   0,  /* c.ule.ps */
   0,  /* c.ult.ps */
   0,  /* c.un.ps */
   0,  /* cvt.ps.s */
   0,  /* cvt.s.pl */
   0,  /* cvt.s.pu */
   0,  /* mov.ps */
   0,  /* movf.ps */
   0,  /* movt.ps */
   0,  /* neg.ps */
   0,  /* pll.ps */
   0,  /* plu.ps */
   0,  /* pul.ps */
   0,  /* puu.ps */
   0,  /* add.ps */
   0,  /* madd.ps */
   0,  /* msub.ps */
   0,  /* mul.ps */
   0,  /* nmadd.ps */
   0,  /* nmsub.ps */
   0,  /* sub.ps */
   0,  /* lbx */
   0,  /* ldx */
   0,  /* lhx */
   0,  /* lwx */
   0,  /* madd */
   0,  /* maddu */
   0,  /* msub */
   0,  /* msubu */
   0,  /* dmadd */
   0,  /* dmaddu */
   0,  /* dmsub */
   0,  /* dmsubu */
   0,  /* dmulg */
   0,  /* dmulgu */
   0,  /* mfacx */
   0,  /* mtacx */
   0,  /* dperm */
   0,  /* pop */
   0,  /* dpop */
   0,  /* luxc1 */
   0,  /* suxc1 */
   0,  /* addred.ps */
   0,  /* mulred.ps */
   0,  /* ma.nlupuu.ps */
   0,  /* ma.plunuu.ps */
   0,  /* ma.plupll.ps */
   0,  /* ma.puupul.ps */
   0,  /* recipit1.d */
   0,  /* recipit1.s */
   0,  /* recipit1.ps */
   0,  /* recipit2.d */
   0,  /* recipit2.s */
   0,  /* recipit2.ps */
   0,  /* rsqrtit1.d */
   0,  /* rsqrtit1.s */
   0,  /* rsqrtit1.ps */
   0,  /* rsqrtit2.d */
   0,  /* rsqrtit2.s */
   0,  /* rsqrtit2.ps */
   0,  /* mfhc1 */
   0,  /* mthc1 */
   0,  /* bc2any2f */
   0,  /* bc2any2t */
   0,  /* perfctl */
   0,  /* tlbwir */
   0,  /* tlbwrr */
   0,  /* sext */
   0,  /* asm */
   0,  /* intrncall */
   0,  /* spadjust */
   0,  /* mov_hilo */
   0,  /* mov_fcc */
   0,  /* begin_pregtn */
   0,  /* end_pregtn */
   0,  /* bwd_bar */
   0,  /* fwd_bar */
   0,  /* dfixup */
   0,  /* ffixup */
   0,  /* ifixup */
   0,  /* label */
   0,  /* nop */
   0,  /* noop */
   0,  /* swp_start */
   0,  /* swp_stop */
};

void ISA_PACK_Adjust_Operands(const ISA_PACK_ADJ_INFO *info,
                              INT64 *opnd,
                              BOOL invert)
{
  INT code;

  for (; (code = ISA_PACK_ADJ_INFO_Code(info, invert)) != ISA_PACK_ADJ_END; ++info) {
    INT index = ISA_PACK_ADJ_INFO_OpndIdx(info);
    INT64 O_VAL = opnd[index];
    switch (code) {
    }
    opnd[index] = O_VAL;
  }
}
