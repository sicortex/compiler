#include "targ_isa_bundle.h"


const ISA_BUNDLE_INFO ISA_BUNDLE_info[] = {
 {
    "i",             ".i",       1,
    {  1 /* Fetch_Unit */, },
    { FALSE, },
    { ISA_EXEC_Fetch_Unit, },
     0, 0x0, 0x001
  },
  {
    "template_MAX", "", -1,
    { -1 /* ??????? */,},
    { FALSE,},
    -1, 0x0, 0x000
  }
};

const ISA_EXEC_UNIT_PROPERTY ISA_EXEC_unit_prop[390] = {
    1,  /* lb:  Fetch_Unit */
    1,  /* lbu:  Fetch_Unit */
    1,  /* lh:  Fetch_Unit */
    1,  /* lhu:  Fetch_Unit */
    1,  /* lw:  Fetch_Unit */
    1,  /* lwl:  Fetch_Unit */
    1,  /* lwr:  Fetch_Unit */
    1,  /* sb:  Fetch_Unit */
    1,  /* sh:  Fetch_Unit */
    1,  /* sw:  Fetch_Unit */
    1,  /* swl:  Fetch_Unit */
    1,  /* swr:  Fetch_Unit */
    1,  /* ll:  Fetch_Unit */
    1,  /* sc:  Fetch_Unit */
    1,  /* sync:  Fetch_Unit */
    1,  /* lwu:  Fetch_Unit */
    1,  /* ld:  Fetch_Unit */
    1,  /* ldl:  Fetch_Unit */
    1,  /* ldr:  Fetch_Unit */
    1,  /* lld:  Fetch_Unit */
    1,  /* sd:  Fetch_Unit */
    1,  /* sdl:  Fetch_Unit */
    1,  /* sdr:  Fetch_Unit */
    1,  /* scd:  Fetch_Unit */
    1,  /* pref:  Fetch_Unit */
    1,  /* prefx:  Fetch_Unit */
    1,  /* add:  Fetch_Unit */
    1,  /* addi:  Fetch_Unit */
    1,  /* addiu:  Fetch_Unit */
    1,  /* addu:  Fetch_Unit */
    1,  /* div:  Fetch_Unit */
    1,  /* divu:  Fetch_Unit */
    1,  /* mul:  Fetch_Unit */
    1,  /* mult:  Fetch_Unit */
    1,  /* multu:  Fetch_Unit */
    1,  /* slt:  Fetch_Unit */
    1,  /* slti:  Fetch_Unit */
    1,  /* sltiu:  Fetch_Unit */
    1,  /* sltu:  Fetch_Unit */
    1,  /* sub:  Fetch_Unit */
    1,  /* subu:  Fetch_Unit */
    1,  /* dadd:  Fetch_Unit */
    1,  /* daddi:  Fetch_Unit */
    1,  /* daddiu:  Fetch_Unit */
    1,  /* daddu:  Fetch_Unit */
    1,  /* ddiv:  Fetch_Unit */
    1,  /* ddivu:  Fetch_Unit */
    1,  /* dmult:  Fetch_Unit */
    1,  /* dmultu:  Fetch_Unit */
    1,  /* dsub:  Fetch_Unit */
    1,  /* dsubu:  Fetch_Unit */
    1,  /* and:  Fetch_Unit */
    1,  /* andi:  Fetch_Unit */
    1,  /* lui:  Fetch_Unit */
    1,  /* nor:  Fetch_Unit */
    1,  /* or:  Fetch_Unit */
    1,  /* ori:  Fetch_Unit */
    1,  /* xor:  Fetch_Unit */
    1,  /* xori:  Fetch_Unit */
    1,  /* clo:  Fetch_Unit */
    1,  /* clz:  Fetch_Unit */
    1,  /* dclo:  Fetch_Unit */
    1,  /* dclz:  Fetch_Unit */
    1,  /* mfhi:  Fetch_Unit */
    1,  /* mflo:  Fetch_Unit */
    1,  /* mthi:  Fetch_Unit */
    1,  /* mtlo:  Fetch_Unit */
    1,  /* movf:  Fetch_Unit */
    1,  /* movn:  Fetch_Unit */
    1,  /* movt:  Fetch_Unit */
    1,  /* movz:  Fetch_Unit */
    1,  /* sll:  Fetch_Unit */
    1,  /* sllv:  Fetch_Unit */
    1,  /* sra:  Fetch_Unit */
    1,  /* srav:  Fetch_Unit */
    1,  /* srl:  Fetch_Unit */
    1,  /* srlv:  Fetch_Unit */
    1,  /* dsll:  Fetch_Unit */
    1,  /* dsll32:  Fetch_Unit */
    1,  /* dsllv:  Fetch_Unit */
    1,  /* dsra:  Fetch_Unit */
    1,  /* dsra32:  Fetch_Unit */
    1,  /* dsrav:  Fetch_Unit */
    1,  /* dsrl:  Fetch_Unit */
    1,  /* dsrl32:  Fetch_Unit */
    1,  /* dsrlv:  Fetch_Unit */
    1,  /* beq:  Fetch_Unit */
    1,  /* bgez:  Fetch_Unit */
    1,  /* bgezal:  Fetch_Unit */
    1,  /* bgtz:  Fetch_Unit */
    1,  /* blez:  Fetch_Unit */
    1,  /* bltz:  Fetch_Unit */
    1,  /* bltzal:  Fetch_Unit */
    1,  /* bne:  Fetch_Unit */
    1,  /* j:  Fetch_Unit */
    1,  /* jal:  Fetch_Unit */
    1,  /* jalr:  Fetch_Unit */
    1,  /* jr:  Fetch_Unit */
    1,  /* break:  Fetch_Unit */
    1,  /* syscall:  Fetch_Unit */
    1,  /* teq:  Fetch_Unit */
    1,  /* teqi:  Fetch_Unit */
    1,  /* tge:  Fetch_Unit */
    1,  /* tgei:  Fetch_Unit */
    1,  /* tgeiu:  Fetch_Unit */
    1,  /* tgeu:  Fetch_Unit */
    1,  /* tlt:  Fetch_Unit */
    1,  /* tlti:  Fetch_Unit */
    1,  /* tltiu:  Fetch_Unit */
    1,  /* tltu:  Fetch_Unit */
    1,  /* tne:  Fetch_Unit */
    1,  /* tnei:  Fetch_Unit */
    1,  /* lwc1:  Fetch_Unit */
    1,  /* ldc1:  Fetch_Unit */
    1,  /* lwxc1:  Fetch_Unit */
    1,  /* ldxc1:  Fetch_Unit */
    1,  /* swc1:  Fetch_Unit */
    1,  /* sdc1:  Fetch_Unit */
    1,  /* swxc1:  Fetch_Unit */
    1,  /* sdxc1:  Fetch_Unit */
    1,  /* abs.s:  Fetch_Unit */
    1,  /* abs.d:  Fetch_Unit */
    1,  /* add.s:  Fetch_Unit */
    1,  /* add.d:  Fetch_Unit */
    1,  /* c.f.s:  Fetch_Unit */
    1,  /* c.f.d:  Fetch_Unit */
    1,  /* c.t.s:  Fetch_Unit */
    1,  /* c.t.d:  Fetch_Unit */
    1,  /* c.un.s:  Fetch_Unit */
    1,  /* c.un.d:  Fetch_Unit */
    1,  /* c.or.s:  Fetch_Unit */
    1,  /* c.or.d:  Fetch_Unit */
    1,  /* c.eq.s:  Fetch_Unit */
    1,  /* c.eq.d:  Fetch_Unit */
    1,  /* c.neq.s:  Fetch_Unit */
    1,  /* c.neq.d:  Fetch_Unit */
    1,  /* c.ueq.s:  Fetch_Unit */
    1,  /* c.ueq.d:  Fetch_Unit */
    1,  /* c.ogl.s:  Fetch_Unit */
    1,  /* c.ogl.d:  Fetch_Unit */
    1,  /* c.olt.s:  Fetch_Unit */
    1,  /* c.olt.d:  Fetch_Unit */
    1,  /* c.uge.s:  Fetch_Unit */
    1,  /* c.uge.d:  Fetch_Unit */
    1,  /* c.ult.s:  Fetch_Unit */
    1,  /* c.ult.d:  Fetch_Unit */
    1,  /* c.oge.s:  Fetch_Unit */
    1,  /* c.oge.d:  Fetch_Unit */
    1,  /* c.ole.s:  Fetch_Unit */
    1,  /* c.ole.d:  Fetch_Unit */
    1,  /* c.ugt.s:  Fetch_Unit */
    1,  /* c.ugt.d:  Fetch_Unit */
    1,  /* c.ule.s:  Fetch_Unit */
    1,  /* c.ule.d:  Fetch_Unit */
    1,  /* c.ogt.s:  Fetch_Unit */
    1,  /* c.ogt.d:  Fetch_Unit */
    1,  /* c.sf.s:  Fetch_Unit */
    1,  /* c.sf.d:  Fetch_Unit */
    1,  /* c.st.s:  Fetch_Unit */
    1,  /* c.st.d:  Fetch_Unit */
    1,  /* c.ngle.s:  Fetch_Unit */
    1,  /* c.ngle.d:  Fetch_Unit */
    1,  /* c.gle.s:  Fetch_Unit */
    1,  /* c.gle.d:  Fetch_Unit */
    1,  /* c.seq.s:  Fetch_Unit */
    1,  /* c.seq.d:  Fetch_Unit */
    1,  /* c.sne.s:  Fetch_Unit */
    1,  /* c.sne.d:  Fetch_Unit */
    1,  /* c.ngl.s:  Fetch_Unit */
    1,  /* c.ngl.d:  Fetch_Unit */
    1,  /* c.gl.s:  Fetch_Unit */
    1,  /* c.gl.d:  Fetch_Unit */
    1,  /* c.lt.s:  Fetch_Unit */
    1,  /* c.lt.d:  Fetch_Unit */
    1,  /* c.nlt.s:  Fetch_Unit */
    1,  /* c.nlt.d:  Fetch_Unit */
    1,  /* c.nge.s:  Fetch_Unit */
    1,  /* c.nge.d:  Fetch_Unit */
    1,  /* c.ge.s:  Fetch_Unit */
    1,  /* c.ge.d:  Fetch_Unit */
    1,  /* c.le.s:  Fetch_Unit */
    1,  /* c.le.d:  Fetch_Unit */
    1,  /* c.nle.s:  Fetch_Unit */
    1,  /* c.nle.d:  Fetch_Unit */
    1,  /* c.ngt.s:  Fetch_Unit */
    1,  /* c.ngt.d:  Fetch_Unit */
    1,  /* c.gt.s:  Fetch_Unit */
    1,  /* c.gt.d:  Fetch_Unit */
    1,  /* div.s:  Fetch_Unit */
    1,  /* div.d:  Fetch_Unit */
    1,  /* mul.s:  Fetch_Unit */
    1,  /* mul.d:  Fetch_Unit */
    1,  /* neg.s:  Fetch_Unit */
    1,  /* neg.d:  Fetch_Unit */
    1,  /* sub.s:  Fetch_Unit */
    1,  /* sub.d:  Fetch_Unit */
    1,  /* sqrt.s:  Fetch_Unit */
    1,  /* sqrt.d:  Fetch_Unit */
    1,  /* madd.s:  Fetch_Unit */
    1,  /* madd.d:  Fetch_Unit */
    1,  /* msub.s:  Fetch_Unit */
    1,  /* msub.d:  Fetch_Unit */
    1,  /* nmadd.s:  Fetch_Unit */
    1,  /* nmadd.d:  Fetch_Unit */
    1,  /* nmsub.s:  Fetch_Unit */
    1,  /* nmsub.d:  Fetch_Unit */
    1,  /* recip.s:  Fetch_Unit */
    1,  /* recip.d:  Fetch_Unit */
    1,  /* rsqrt.s:  Fetch_Unit */
    1,  /* rsqrt.d:  Fetch_Unit */
    1,  /* cfc1:  Fetch_Unit */
    1,  /* ctc1:  Fetch_Unit */
    1,  /* mfc1:  Fetch_Unit */
    1,  /* mtc1:  Fetch_Unit */
    1,  /* dmfc1:  Fetch_Unit */
    1,  /* dmtc1:  Fetch_Unit */
    1,  /* mov.s:  Fetch_Unit */
    1,  /* mov.d:  Fetch_Unit */
    1,  /* movf.s:  Fetch_Unit */
    1,  /* movf.d:  Fetch_Unit */
    1,  /* movn.s:  Fetch_Unit */
    1,  /* movn.d:  Fetch_Unit */
    1,  /* movt.s:  Fetch_Unit */
    1,  /* movt.d:  Fetch_Unit */
    1,  /* movz.s:  Fetch_Unit */
    1,  /* movz.d:  Fetch_Unit */
    1,  /* cvt.d.s:  Fetch_Unit */
    1,  /* cvt.d.w:  Fetch_Unit */
    1,  /* cvt.d.l:  Fetch_Unit */
    1,  /* cvt.l.s:  Fetch_Unit */
    1,  /* cvt.l.d:  Fetch_Unit */
    1,  /* cvt.s.d:  Fetch_Unit */
    1,  /* cvt.s.w:  Fetch_Unit */
    1,  /* cvt.s.l:  Fetch_Unit */
    1,  /* cvt.w.s:  Fetch_Unit */
    1,  /* cvt.w.d:  Fetch_Unit */
    1,  /* ceil.w.s:  Fetch_Unit */
    1,  /* ceil.w.d:  Fetch_Unit */
    1,  /* ceil.l.s:  Fetch_Unit */
    1,  /* ceil.l.d:  Fetch_Unit */
    1,  /* floor.w.s:  Fetch_Unit */
    1,  /* floor.w.d:  Fetch_Unit */
    1,  /* floor.l.s:  Fetch_Unit */
    1,  /* floor.l.d:  Fetch_Unit */
    1,  /* round.w.s:  Fetch_Unit */
    1,  /* round.w.d:  Fetch_Unit */
    1,  /* round.l.s:  Fetch_Unit */
    1,  /* round.l.d:  Fetch_Unit */
    1,  /* trunc.w.s:  Fetch_Unit */
    1,  /* trunc.w.d:  Fetch_Unit */
    1,  /* trunc.l.s:  Fetch_Unit */
    1,  /* trunc.l.d:  Fetch_Unit */
    1,  /* bc1f:  Fetch_Unit */
    1,  /* bc1t:  Fetch_Unit */
    1,  /* dsbh:  Fetch_Unit */
    1,  /* dshd:  Fetch_Unit */
    1,  /* seb:  Fetch_Unit */
    1,  /* seh:  Fetch_Unit */
    1,  /* wsbh:  Fetch_Unit */
    1,  /* dext:  Fetch_Unit */
    1,  /* dextm:  Fetch_Unit */
    1,  /* dextu:  Fetch_Unit */
    1,  /* dins:  Fetch_Unit */
    1,  /* dinsm:  Fetch_Unit */
    1,  /* dinsu:  Fetch_Unit */
    1,  /* drotr:  Fetch_Unit */
    1,  /* drotr32:  Fetch_Unit */
    1,  /* drotrv:  Fetch_Unit */
    1,  /* ext:  Fetch_Unit */
    1,  /* ins:  Fetch_Unit */
    1,  /* rotr:  Fetch_Unit */
    1,  /* rotrv:  Fetch_Unit */
    1,  /* alnv.ps:  Fetch_Unit */
    1,  /* movn.ps:  Fetch_Unit */
    1,  /* movz.ps:  Fetch_Unit */
    1,  /* abs.ps:  Fetch_Unit */
    1,  /* c.eq.ps:  Fetch_Unit */
    1,  /* c.f.ps:  Fetch_Unit */
    1,  /* c.ge.ps:  Fetch_Unit */
    1,  /* c.gl.ps:  Fetch_Unit */
    1,  /* c.gle.ps:  Fetch_Unit */
    1,  /* c.gt.ps:  Fetch_Unit */
    1,  /* c.le.ps:  Fetch_Unit */
    1,  /* c.lt.ps:  Fetch_Unit */
    1,  /* c.neq.ps:  Fetch_Unit */
    1,  /* c.nge.ps:  Fetch_Unit */
    1,  /* c.ngl.ps:  Fetch_Unit */
    1,  /* c.ngle.ps:  Fetch_Unit */
    1,  /* c.ngt.ps:  Fetch_Unit */
    1,  /* c.nle.ps:  Fetch_Unit */
    1,  /* c.nlt.ps:  Fetch_Unit */
    1,  /* c.oge.ps:  Fetch_Unit */
    1,  /* c.ogl.ps:  Fetch_Unit */
    1,  /* c.ogt.ps:  Fetch_Unit */
    1,  /* c.ole.ps:  Fetch_Unit */
    1,  /* c.olt.ps:  Fetch_Unit */
    1,  /* c.or.ps:  Fetch_Unit */
    1,  /* c.seq.ps:  Fetch_Unit */
    1,  /* c.sf.ps:  Fetch_Unit */
    1,  /* c.sne.ps:  Fetch_Unit */
    1,  /* c.st.ps:  Fetch_Unit */
    1,  /* c.t.ps:  Fetch_Unit */
    1,  /* c.ueq.ps:  Fetch_Unit */
    1,  /* c.uge.ps:  Fetch_Unit */
    1,  /* c.ugt.ps:  Fetch_Unit */
    1,  /* c.ule.ps:  Fetch_Unit */
    1,  /* c.ult.ps:  Fetch_Unit */
    1,  /* c.un.ps:  Fetch_Unit */
    1,  /* cvt.ps.s:  Fetch_Unit */
    1,  /* cvt.s.pl:  Fetch_Unit */
    1,  /* cvt.s.pu:  Fetch_Unit */
    1,  /* mov.ps:  Fetch_Unit */
    1,  /* movf.ps:  Fetch_Unit */
    1,  /* movt.ps:  Fetch_Unit */
    1,  /* neg.ps:  Fetch_Unit */
    1,  /* pll.ps:  Fetch_Unit */
    1,  /* plu.ps:  Fetch_Unit */
    1,  /* pul.ps:  Fetch_Unit */
    1,  /* puu.ps:  Fetch_Unit */
    1,  /* add.ps:  Fetch_Unit */
    1,  /* madd.ps:  Fetch_Unit */
    1,  /* msub.ps:  Fetch_Unit */
    1,  /* mul.ps:  Fetch_Unit */
    1,  /* nmadd.ps:  Fetch_Unit */
    1,  /* nmsub.ps:  Fetch_Unit */
    1,  /* sub.ps:  Fetch_Unit */
    1,  /* lbx:  Fetch_Unit */
    1,  /* ldx:  Fetch_Unit */
    1,  /* lhx:  Fetch_Unit */
    1,  /* lwx:  Fetch_Unit */
    1,  /* madd:  Fetch_Unit */
    1,  /* maddu:  Fetch_Unit */
    1,  /* msub:  Fetch_Unit */
    1,  /* msubu:  Fetch_Unit */
    1,  /* dmadd:  Fetch_Unit */
    1,  /* dmaddu:  Fetch_Unit */
    1,  /* dmsub:  Fetch_Unit */
    1,  /* dmsubu:  Fetch_Unit */
    1,  /* dmulg:  Fetch_Unit */
    1,  /* dmulgu:  Fetch_Unit */
    1,  /* mfacx:  Fetch_Unit */
    1,  /* mtacx:  Fetch_Unit */
    1,  /* dperm:  Fetch_Unit */
    1,  /* pop:  Fetch_Unit */
    1,  /* dpop:  Fetch_Unit */
    1,  /* luxc1:  Fetch_Unit */
    1,  /* suxc1:  Fetch_Unit */
    1,  /* addred.ps:  Fetch_Unit */
    1,  /* mulred.ps:  Fetch_Unit */
    1,  /* ma.nlupuu.ps:  Fetch_Unit */
    1,  /* ma.plunuu.ps:  Fetch_Unit */
    1,  /* ma.plupll.ps:  Fetch_Unit */
    1,  /* ma.puupul.ps:  Fetch_Unit */
    1,  /* recipit1.d:  Fetch_Unit */
    1,  /* recipit1.s:  Fetch_Unit */
    1,  /* recipit1.ps:  Fetch_Unit */
    1,  /* recipit2.d:  Fetch_Unit */
    1,  /* recipit2.s:  Fetch_Unit */
    1,  /* recipit2.ps:  Fetch_Unit */
    1,  /* rsqrtit1.d:  Fetch_Unit */
    1,  /* rsqrtit1.s:  Fetch_Unit */
    1,  /* rsqrtit1.ps:  Fetch_Unit */
    1,  /* rsqrtit2.d:  Fetch_Unit */
    1,  /* rsqrtit2.s:  Fetch_Unit */
    1,  /* rsqrtit2.ps:  Fetch_Unit */
    1,  /* mfhc1:  Fetch_Unit */
    1,  /* mthc1:  Fetch_Unit */
    1,  /* bc2any2f:  Fetch_Unit */
    1,  /* bc2any2t:  Fetch_Unit */
    1,  /* perfctl:  Fetch_Unit */
    1,  /* tlbwir:  Fetch_Unit */
    1,  /* tlbwrr:  Fetch_Unit */
    0,  /* sext:  */
    0,  /* asm:  */
    0,  /* intrncall:  */
    0,  /* spadjust:  */
    0,  /* mov_hilo:  */
    0,  /* mov_fcc:  */
    0,  /* begin_pregtn:  */
    0,  /* end_pregtn:  */
    0,  /* bwd_bar:  */
    0,  /* fwd_bar:  */
    0,  /* dfixup:  */
    0,  /* ffixup:  */
    0,  /* ifixup:  */
    0,  /* label:  */
    0,  /* nop:  */
    0,  /* noop:  */
    0,  /* swp_start:  */
    0,  /* swp_stop:  */
};

const ISA_BUNDLE_PACK_INFO ISA_BUNDLE_pack_info[] = {
  { ISA_BUNDLE_PACK_COMP_slot+0   ,  0,  0,  0, 0x0000000000ffffff },  /* SLOT0 */
  { ISA_BUNDLE_PACK_COMP_end      , -1, -1, -1,                 -1 },  /* END */
};

const mUINT8 ISA_BUNDLE_pack_info_index[5] = {
   1, /* ISA_BUNDLE_PACK_COMP_end */
   1, /* ISA_BUNDLE_PACK_COMP_template */
   0, /* ISA_BUNDLE_PACK_COMP_slot+0 */
   1, /* ISA_BUNDLE_PACK_COMP_slot+1 */
   1, /* ISA_BUNDLE_PACK_COMP_slot+2 */
};
