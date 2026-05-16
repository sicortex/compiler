#include <string.h>
#include "topcode.h"
#include "targ_isa_print.h"


const ISA_PRINT_INFO ISA_PRINT_info[14] = {
  { "",             ISA_PRINT_COMP_end },	/* print_NULL[0] */
  { "%s %s,%s,%s",  ISA_PRINT_COMP_name,	/* ropop[0] */
                    ISA_PRINT_COMP_result,	/* ropop[1] */
                    ISA_PRINT_COMP_opnd,	/* ropop[2] */
                    ISA_PRINT_COMP_opnd+1,	/* ropop[3] */
                    ISA_PRINT_COMP_end },	/* ropop[4] */
  { "%s %s",        ISA_PRINT_COMP_name,	/* op[0] */
                    ISA_PRINT_COMP_opnd,	/* op[1] */
                    ISA_PRINT_COMP_end },	/* op[2] */
  { "%s %s,%s",     ISA_PRINT_COMP_name,	/* opop[0] */
                    ISA_PRINT_COMP_opnd,	/* opop[1] */
                    ISA_PRINT_COMP_opnd+1,	/* opop[2] */
                    ISA_PRINT_COMP_end },	/* opop[3] */
  { "%s $0,%s,%s",  ISA_PRINT_COMP_name,	/* divide[0] */
                    ISA_PRINT_COMP_opnd,	/* divide[1] */
                    ISA_PRINT_COMP_opnd+1,	/* divide[2] */
                    ISA_PRINT_COMP_end },	/* divide[3] */
  { "%s %s",        ISA_PRINT_COMP_name,	/* r[0] */
                    ISA_PRINT_COMP_result,	/* r[1] */
                    ISA_PRINT_COMP_end },	/* r[2] */
  { "%s %s,%s",     ISA_PRINT_COMP_name,	/* rop[0] */
                    ISA_PRINT_COMP_result,	/* rop[1] */
                    ISA_PRINT_COMP_opnd,	/* rop[2] */
                    ISA_PRINT_COMP_end },	/* rop[3] */
  { "%s %s,%s",     ISA_PRINT_COMP_name,	/* opr[0] */
                    ISA_PRINT_COMP_opnd,	/* opr[1] */
                    ISA_PRINT_COMP_result,	/* opr[2] */
                    ISA_PRINT_COMP_end },	/* opr[3] */
  { "%s %s,%s,%s,%s",  ISA_PRINT_COMP_name,	/* ropopop[0] */
                    ISA_PRINT_COMP_result,	/* ropopop[1] */
                    ISA_PRINT_COMP_opnd,	/* ropopop[2] */
                    ISA_PRINT_COMP_opnd+1,	/* ropopop[3] */
                    ISA_PRINT_COMP_opnd+2,	/* ropopop[4] */
                    ISA_PRINT_COMP_end },	/* ropopop[5] */
  { "%s %s,%s,%s",  ISA_PRINT_COMP_name,	/* opopop[0] */
                    ISA_PRINT_COMP_opnd,	/* opopop[1] */
                    ISA_PRINT_COMP_opnd+1,	/* opopop[2] */
                    ISA_PRINT_COMP_opnd+2,	/* opopop[3] */
                    ISA_PRINT_COMP_end },	/* opopop[4] */
  { "%s %s,%s(%s)",  ISA_PRINT_COMP_name,	/* load[0] */
                    ISA_PRINT_COMP_result,	/* load[1] */
                    ISA_PRINT_COMP_opnd+1,	/* load[2] */
                    ISA_PRINT_COMP_opnd,	/* load[3] */
                    ISA_PRINT_COMP_end },	/* load[4] */
  { "%s %s,%s(%s)",  ISA_PRINT_COMP_name,	/* prefetch[0] */
                    ISA_PRINT_COMP_opnd,	/* prefetch[1] */
                    ISA_PRINT_COMP_opnd+2,	/* prefetch[2] */
                    ISA_PRINT_COMP_opnd+1,	/* prefetch[3] */
                    ISA_PRINT_COMP_end },	/* prefetch[4] */
  { "%s %s,%s(%s)",  ISA_PRINT_COMP_name,	/* store[0] */
                    ISA_PRINT_COMP_opnd,	/* store[1] */
                    ISA_PRINT_COMP_opnd+2,	/* store[2] */
                    ISA_PRINT_COMP_opnd+1,	/* store[3] */
                    ISA_PRINT_COMP_end },	/* store[4] */
  { "%s",           ISA_PRINT_COMP_name,	/* no_rop[0] */
                    ISA_PRINT_COMP_end },	/* no_rop[1] */
};

const mUINT8 ISA_PRINT_info_index[390] = {
   10,  /* lb: load */
   10,  /* lbu: load */
   10,  /* lh: load */
   10,  /* lhu: load */
   10,  /* lw: load */
   10,  /* lwl: load */
   10,  /* lwr: load */
   12,  /* sb: store */
   12,  /* sh: store */
   12,  /* sw: store */
   12,  /* swl: store */
   12,  /* swr: store */
   10,  /* ll: load */
   12,  /* sc: store */
   13,  /* sync: no_rop */
   10,  /* lwu: load */
   10,  /* ld: load */
   10,  /* ldl: load */
   10,  /* ldr: load */
   10,  /* lld: load */
   12,  /* sd: store */
   12,  /* sdl: store */
   12,  /* sdr: store */
   12,  /* scd: store */
   11,  /* pref: prefetch */
   11,  /* prefx: prefetch */
    1,  /* add: ropop */
    1,  /* addi: ropop */
    1,  /* addiu: ropop */
    1,  /* addu: ropop */
    4,  /* div: divide */
    4,  /* divu: divide */
    1,  /* mul: ropop */
    3,  /* mult: opop */
    3,  /* multu: opop */
    1,  /* slt: ropop */
    1,  /* slti: ropop */
    1,  /* sltiu: ropop */
    1,  /* sltu: ropop */
    1,  /* sub: ropop */
    1,  /* subu: ropop */
    1,  /* dadd: ropop */
    1,  /* daddi: ropop */
    1,  /* daddiu: ropop */
    1,  /* daddu: ropop */
    4,  /* ddiv: divide */
    4,  /* ddivu: divide */
    3,  /* dmult: opop */
    3,  /* dmultu: opop */
    1,  /* dsub: ropop */
    1,  /* dsubu: ropop */
    1,  /* and: ropop */
    1,  /* andi: ropop */
    6,  /* lui: rop */
    1,  /* nor: ropop */
    1,  /* or: ropop */
    1,  /* ori: ropop */
    1,  /* xor: ropop */
    1,  /* xori: ropop */
    6,  /* clo: rop */
    6,  /* clz: rop */
    6,  /* dclo: rop */
    6,  /* dclz: rop */
    5,  /* mfhi: r */
    5,  /* mflo: r */
    2,  /* mthi: op */
    2,  /* mtlo: op */
    1,  /* movf: ropop */
    1,  /* movn: ropop */
    1,  /* movt: ropop */
    1,  /* movz: ropop */
    1,  /* sll: ropop */
    1,  /* sllv: ropop */
    1,  /* sra: ropop */
    1,  /* srav: ropop */
    1,  /* srl: ropop */
    1,  /* srlv: ropop */
    1,  /* dsll: ropop */
    1,  /* dsll32: ropop */
    1,  /* dsllv: ropop */
    1,  /* dsra: ropop */
    1,  /* dsra32: ropop */
    1,  /* dsrav: ropop */
    1,  /* dsrl: ropop */
    1,  /* dsrl32: ropop */
    1,  /* dsrlv: ropop */
    9,  /* beq: opopop */
    3,  /* bgez: opop */
    3,  /* bgezal: opop */
    3,  /* bgtz: opop */
    3,  /* blez: opop */
    3,  /* bltz: opop */
    3,  /* bltzal: opop */
    9,  /* bne: opopop */
    2,  /* j: op */
    2,  /* jal: op */
    2,  /* jalr: op */
    2,  /* jr: op */
   13,  /* break: no_rop */
   13,  /* syscall: no_rop */
    9,  /* teq: opopop */
    9,  /* teqi: opopop */
    9,  /* tge: opopop */
    9,  /* tgei: opopop */
    9,  /* tgeiu: opopop */
    9,  /* tgeu: opopop */
    9,  /* tlt: opopop */
    9,  /* tlti: opopop */
    9,  /* tltiu: opopop */
    9,  /* tltu: opopop */
    9,  /* tne: opopop */
    9,  /* tnei: opopop */
   10,  /* lwc1: load */
   10,  /* ldc1: load */
   10,  /* lwxc1: load */
   10,  /* ldxc1: load */
   12,  /* swc1: store */
   12,  /* sdc1: store */
   12,  /* swxc1: store */
   12,  /* sdxc1: store */
    6,  /* abs.s: rop */
    6,  /* abs.d: rop */
    1,  /* add.s: ropop */
    1,  /* add.d: ropop */
    1,  /* c.f.s: ropop */
    1,  /* c.f.d: ropop */
    1,  /* c.t.s: ropop */
    1,  /* c.t.d: ropop */
    1,  /* c.un.s: ropop */
    1,  /* c.un.d: ropop */
    1,  /* c.or.s: ropop */
    1,  /* c.or.d: ropop */
    1,  /* c.eq.s: ropop */
    1,  /* c.eq.d: ropop */
    1,  /* c.neq.s: ropop */
    1,  /* c.neq.d: ropop */
    1,  /* c.ueq.s: ropop */
    1,  /* c.ueq.d: ropop */
    1,  /* c.ogl.s: ropop */
    1,  /* c.ogl.d: ropop */
    1,  /* c.olt.s: ropop */
    1,  /* c.olt.d: ropop */
    1,  /* c.uge.s: ropop */
    1,  /* c.uge.d: ropop */
    1,  /* c.ult.s: ropop */
    1,  /* c.ult.d: ropop */
    1,  /* c.oge.s: ropop */
    1,  /* c.oge.d: ropop */
    1,  /* c.ole.s: ropop */
    1,  /* c.ole.d: ropop */
    1,  /* c.ugt.s: ropop */
    1,  /* c.ugt.d: ropop */
    1,  /* c.ule.s: ropop */
    1,  /* c.ule.d: ropop */
    1,  /* c.ogt.s: ropop */
    1,  /* c.ogt.d: ropop */
    1,  /* c.sf.s: ropop */
    1,  /* c.sf.d: ropop */
    1,  /* c.st.s: ropop */
    1,  /* c.st.d: ropop */
    1,  /* c.ngle.s: ropop */
    1,  /* c.ngle.d: ropop */
    1,  /* c.gle.s: ropop */
    1,  /* c.gle.d: ropop */
    1,  /* c.seq.s: ropop */
    1,  /* c.seq.d: ropop */
    1,  /* c.sne.s: ropop */
    1,  /* c.sne.d: ropop */
    1,  /* c.ngl.s: ropop */
    1,  /* c.ngl.d: ropop */
    1,  /* c.gl.s: ropop */
    1,  /* c.gl.d: ropop */
    1,  /* c.lt.s: ropop */
    1,  /* c.lt.d: ropop */
    1,  /* c.nlt.s: ropop */
    1,  /* c.nlt.d: ropop */
    1,  /* c.nge.s: ropop */
    1,  /* c.nge.d: ropop */
    1,  /* c.ge.s: ropop */
    1,  /* c.ge.d: ropop */
    1,  /* c.le.s: ropop */
    1,  /* c.le.d: ropop */
    1,  /* c.nle.s: ropop */
    1,  /* c.nle.d: ropop */
    1,  /* c.ngt.s: ropop */
    1,  /* c.ngt.d: ropop */
    1,  /* c.gt.s: ropop */
    1,  /* c.gt.d: ropop */
    1,  /* div.s: ropop */
    1,  /* div.d: ropop */
    1,  /* mul.s: ropop */
    1,  /* mul.d: ropop */
    6,  /* neg.s: rop */
    6,  /* neg.d: rop */
    1,  /* sub.s: ropop */
    1,  /* sub.d: ropop */
    6,  /* sqrt.s: rop */
    6,  /* sqrt.d: rop */
    8,  /* madd.s: ropopop */
    8,  /* madd.d: ropopop */
    8,  /* msub.s: ropopop */
    8,  /* msub.d: ropopop */
    8,  /* nmadd.s: ropopop */
    8,  /* nmadd.d: ropopop */
    8,  /* nmsub.s: ropopop */
    8,  /* nmsub.d: ropopop */
    6,  /* recip.s: rop */
    6,  /* recip.d: rop */
    6,  /* rsqrt.s: rop */
    6,  /* rsqrt.d: rop */
   13,  /* cfc1: no_rop */
   13,  /* ctc1: no_rop */
    6,  /* mfc1: rop */
    7,  /* mtc1: opr */
    6,  /* dmfc1: rop */
    7,  /* dmtc1: opr */
    6,  /* mov.s: rop */
    6,  /* mov.d: rop */
    1,  /* movf.s: ropop */
    1,  /* movf.d: ropop */
    1,  /* movn.s: ropop */
    1,  /* movn.d: ropop */
    1,  /* movt.s: ropop */
    1,  /* movt.d: ropop */
    1,  /* movz.s: ropop */
    1,  /* movz.d: ropop */
    6,  /* cvt.d.s: rop */
    6,  /* cvt.d.w: rop */
    6,  /* cvt.d.l: rop */
    6,  /* cvt.l.s: rop */
    6,  /* cvt.l.d: rop */
    6,  /* cvt.s.d: rop */
    6,  /* cvt.s.w: rop */
    6,  /* cvt.s.l: rop */
    6,  /* cvt.w.s: rop */
    6,  /* cvt.w.d: rop */
    6,  /* ceil.w.s: rop */
    6,  /* ceil.w.d: rop */
    6,  /* ceil.l.s: rop */
    6,  /* ceil.l.d: rop */
    6,  /* floor.w.s: rop */
    6,  /* floor.w.d: rop */
    6,  /* floor.l.s: rop */
    6,  /* floor.l.d: rop */
    6,  /* round.w.s: rop */
    6,  /* round.w.d: rop */
    6,  /* round.l.s: rop */
    6,  /* round.l.d: rop */
    6,  /* trunc.w.s: rop */
    6,  /* trunc.w.d: rop */
    6,  /* trunc.l.s: rop */
    6,  /* trunc.l.d: rop */
    3,  /* bc1f: opop */
    3,  /* bc1t: opop */
    6,  /* dsbh: rop */
    6,  /* dshd: rop */
    6,  /* seb: rop */
    6,  /* seh: rop */
    6,  /* wsbh: rop */
    8,  /* dext: ropopop */
    8,  /* dextm: ropopop */
    8,  /* dextu: ropopop */
    8,  /* dins: ropopop */
    8,  /* dinsm: ropopop */
    8,  /* dinsu: ropopop */
    1,  /* drotr: ropop */
    1,  /* drotr32: ropop */
    1,  /* drotrv: ropop */
    8,  /* ext: ropopop */
    8,  /* ins: ropopop */
    1,  /* rotr: ropop */
    1,  /* rotrv: ropop */
    8,  /* alnv.ps: ropopop */
    1,  /* movn.ps: ropop */
    1,  /* movz.ps: ropop */
    6,  /* abs.ps: rop */
    1,  /* c.eq.ps: ropop */
    1,  /* c.f.ps: ropop */
    1,  /* c.ge.ps: ropop */
    1,  /* c.gl.ps: ropop */
    1,  /* c.gle.ps: ropop */
    1,  /* c.gt.ps: ropop */
    1,  /* c.le.ps: ropop */
    1,  /* c.lt.ps: ropop */
    1,  /* c.neq.ps: ropop */
    1,  /* c.nge.ps: ropop */
    1,  /* c.ngl.ps: ropop */
    1,  /* c.ngle.ps: ropop */
    1,  /* c.ngt.ps: ropop */
    1,  /* c.nle.ps: ropop */
    1,  /* c.nlt.ps: ropop */
    1,  /* c.oge.ps: ropop */
    1,  /* c.ogl.ps: ropop */
    1,  /* c.ogt.ps: ropop */
    1,  /* c.ole.ps: ropop */
    1,  /* c.olt.ps: ropop */
    1,  /* c.or.ps: ropop */
    1,  /* c.seq.ps: ropop */
    1,  /* c.sf.ps: ropop */
    1,  /* c.sne.ps: ropop */
    1,  /* c.st.ps: ropop */
    1,  /* c.t.ps: ropop */
    1,  /* c.ueq.ps: ropop */
    1,  /* c.uge.ps: ropop */
    1,  /* c.ugt.ps: ropop */
    1,  /* c.ule.ps: ropop */
    1,  /* c.ult.ps: ropop */
    1,  /* c.un.ps: ropop */
    1,  /* cvt.ps.s: ropop */
    6,  /* cvt.s.pl: rop */
    6,  /* cvt.s.pu: rop */
    6,  /* mov.ps: rop */
    1,  /* movf.ps: ropop */
    1,  /* movt.ps: ropop */
    6,  /* neg.ps: rop */
    1,  /* pll.ps: ropop */
    1,  /* plu.ps: ropop */
    1,  /* pul.ps: ropop */
    1,  /* puu.ps: ropop */
    1,  /* add.ps: ropop */
    8,  /* madd.ps: ropopop */
    8,  /* msub.ps: ropopop */
    1,  /* mul.ps: ropop */
    8,  /* nmadd.ps: ropopop */
    8,  /* nmsub.ps: ropopop */
    1,  /* sub.ps: ropop */
   10,  /* lbx: load */
   10,  /* ldx: load */
   10,  /* lhx: load */
   10,  /* lwx: load */
    3,  /* madd: opop */
    3,  /* maddu: opop */
    3,  /* msub: opop */
    3,  /* msubu: opop */
    3,  /* dmadd: opop */
    3,  /* dmaddu: opop */
    3,  /* dmsub: opop */
    3,  /* dmsubu: opop */
    1,  /* dmulg: ropop */
    1,  /* dmulgu: ropop */
    5,  /* mfacx: r */
    2,  /* mtacx: op */
    3,  /* dperm: opop */
    6,  /* pop: rop */
    6,  /* dpop: rop */
   10,  /* luxc1: load */
   12,  /* suxc1: store */
    1,  /* addred.ps: ropop */
    1,  /* mulred.ps: ropop */
    8,  /* ma.nlupuu.ps: ropopop */
    8,  /* ma.plunuu.ps: ropopop */
    8,  /* ma.plupll.ps: ropopop */
    8,  /* ma.puupul.ps: ropopop */
    6,  /* recipit1.d: rop */
    6,  /* recipit1.s: rop */
    6,  /* recipit1.ps: rop */
    1,  /* recipit2.d: ropop */
    1,  /* recipit2.s: ropop */
    1,  /* recipit2.ps: ropop */
    6,  /* rsqrtit1.d: rop */
    6,  /* rsqrtit1.s: rop */
    6,  /* rsqrtit1.ps: rop */
    1,  /* rsqrtit2.d: ropop */
    1,  /* rsqrtit2.s: ropop */
    1,  /* rsqrtit2.ps: ropop */
    6,  /* mfhc1: rop */
    7,  /* mthc1: opr */
    3,  /* bc2any2f: opop */
    3,  /* bc2any2t: opop */
    2,  /* perfctl: op */
    3,  /* tlbwir: opop */
    3,  /* tlbwrr: opop */
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
   13,  /* nop: no_rop */
    0,  /* noop */
    0,  /* swp_start */
    0,  /* swp_stop */
};

BOOL ISA_PRINT_Operand_Is_Part_Of_Name(TOP topcode, INT opindex)
{
  const ISA_PRINT_INFO *info = ISA_PRINT_Info(topcode);
  const char *place_in_format = ISA_PRINT_INFO_Format(info);
  BOOL in_name_part = 0;
  INT comp;
  INT i = 0;
  for (;;) {
  	comp = ISA_PRINT_INFO_Comp(info,i);
  	if (comp == ISA_PRINT_COMP_end) break;
	place_in_format = strchr(place_in_format, '%');
	place_in_format += 2; /* assume %s */
  	if (comp == ISA_PRINT_COMP_name) {
	  if (*place_in_format == '\0' || *place_in_format == ' ')
		in_name_part = 0;
	  else
		in_name_part = 1;
  	}
  	if (comp >= ISA_PRINT_COMP_opnd && comp < ISA_PRINT_COMP_result) {
  	  if (in_name_part) {
	    INT comp_opindex = comp - ISA_PRINT_COMP_opnd;
	    if (comp_opindex == opindex)
		return 1;
	    if (*place_in_format == '\0' || *place_in_format == ' ')
		in_name_part = 0;
  	  }
  	}
  	++i;
  }
  return 0;
}
