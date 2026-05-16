#include "topcode.h"
#include "targ_isa_subset.h"

static const char* const isa_subset_names[] = {
  "MIPS4",  "UNDEFINED"
};
ISA_SUBSET ISA_SUBSET_Value = ISA_SUBSET_UNDEFINED;

const char* ISA_SUBSET_Name( ISA_SUBSET subset ) {
  return isa_subset_names[(INT)subset];
}
static const char isa_subset_opcode_table[2][49] = {
  { /* MIPS4 */
    0377, /* lb lbu lh lhu lw lwl lwr sb */
    0377, /* sh sw swl swr ll sc sync lwu */
    0377, /* ld ldl ldr lld sd sdl sdr scd */
    0377, /* pref prefx add addi addiu addu div divu */
    0377, /* mul mult multu slt slti sltiu sltu sub */
    0377, /* subu dadd daddi daddiu daddu ddiv ddivu dmult */
    0377, /* dmultu dsub dsubu and andi lui nor or */
    0377, /* ori xor xori clo clz dclo dclz mfhi */
    0377, /* mflo mthi mtlo movf movn movt movz sll */
    0377, /* sllv sra srav srl srlv dsll dsll32 dsllv */
    0377, /* dsra dsra32 dsrav dsrl dsrl32 dsrlv beq bgez */
    0377, /* bgezal bgtz blez bltz bltzal bne j jal */
    0377, /* jalr jr break syscall teq teqi tge tgei */
    0377, /* tgeiu tgeu tlt tlti tltiu tltu tne tnei */
    0377, /* lwc1 ldc1 lwxc1 ldxc1 swc1 sdc1 swxc1 sdxc1 */
    0377, /* abs.s abs.d add.s add.d c.f.s c.f.d c.t.s c.t.d */
    0377, /* c.un.s c.un.d c.or.s c.or.d c.eq.s c.eq.d c.neq.s c.neq.d */
    0377, /* c.ueq.s c.ueq.d c.ogl.s c.ogl.d c.olt.s c.olt.d c.uge.s c.uge.d */
    0377, /* c.ult.s c.ult.d c.oge.s c.oge.d c.ole.s c.ole.d c.ugt.s c.ugt.d */
    0377, /* c.ule.s c.ule.d c.ogt.s c.ogt.d c.sf.s c.sf.d c.st.s c.st.d */
    0377, /* c.ngle.s c.ngle.d c.gle.s c.gle.d c.seq.s c.seq.d c.sne.s c.sne.d */
    0377, /* c.ngl.s c.ngl.d c.gl.s c.gl.d c.lt.s c.lt.d c.nlt.s c.nlt.d */
    0377, /* c.nge.s c.nge.d c.ge.s c.ge.d c.le.s c.le.d c.nle.s c.nle.d */
    0377, /* c.ngt.s c.ngt.d c.gt.s c.gt.d div.s div.d mul.s mul.d */
    0377, /* neg.s neg.d sub.s sub.d sqrt.s sqrt.d madd.s madd.d */
    0377, /* msub.s msub.d nmadd.s nmadd.d nmsub.s nmsub.d recip.s recip.d */
    0377, /* rsqrt.s rsqrt.d cfc1 ctc1 mfc1 mtc1 dmfc1 dmtc1 */
    0377, /* mov.s mov.d movf.s movf.d movn.s movn.d movt.s movt.d */
    0377, /* movz.s movz.d cvt.d.s cvt.d.w cvt.d.l cvt.l.s cvt.l.d cvt.s.d */
    0377, /* cvt.s.w cvt.s.l cvt.w.s cvt.w.d ceil.w.s ceil.w.d ceil.l.s ceil.l.d */
    0377, /* floor.w.s floor.w.d floor.l.s floor.l.d round.w.s round.w.d round.l.s round.l.d */
    0377, /* trunc.w.s trunc.w.d trunc.l.s trunc.l.d bc1f bc1t dsbh dshd */
    0377, /* seb seh wsbh dext dextm dextu dins dinsm */
    0377, /* dinsu drotr drotr32 drotrv ext ins rotr rotrv */
    0377, /* alnv.ps movn.ps movz.ps abs.ps c.eq.ps c.f.ps c.ge.ps c.gl.ps */
    0377, /* c.gle.ps c.gt.ps c.le.ps c.lt.ps c.neq.ps c.nge.ps c.ngl.ps c.ngle.ps */
    0377, /* c.ngt.ps c.nle.ps c.nlt.ps c.oge.ps c.ogl.ps c.ogt.ps c.ole.ps c.olt.ps */
    0377, /* c.or.ps c.seq.ps c.sf.ps c.sne.ps c.st.ps c.t.ps c.ueq.ps c.uge.ps */
    0377, /* c.ugt.ps c.ule.ps c.ult.ps c.un.ps cvt.ps.s cvt.s.pl cvt.s.pu mov.ps */
    0377, /* movf.ps movt.ps neg.ps pll.ps plu.ps pul.ps puu.ps add.ps */
    0377, /* madd.ps msub.ps mul.ps nmadd.ps nmsub.ps sub.ps lbx ldx */
    0377, /* lhx lwx madd maddu msub msubu dmadd dmaddu */
    0377, /* dmsub dmsubu dmulg dmulgu mfacx mtacx dperm pop */
    0377, /* dpop luxc1 suxc1 addred.ps mulred.ps ma.nlupuu.ps ma.plunuu.ps ma.plupll.ps */
    0377, /* ma.puupul.ps recipit1.d recipit1.s recipit1.ps recipit2.d recipit2.s recipit2.ps rsqrtit1.d */
    0377, /* rsqrtit1.s rsqrtit1.ps rsqrtit2.d rsqrtit2.s rsqrtit2.ps mfhc1 mthc1 bc2any2f */
    0377, /* bc2any2t perfctl tlbwir tlbwrr sext asm intrncall spadjust */
    0377, /* mov_hilo mov_fcc begin_pregtn end_pregtn bwd_bar fwd_bar dfixup ffixup */
    0077, /* ifixup label nop noop swp_start swp_stop */
  },
  { /* UNDEFINED */
    0
  }
};
int ISA_SUBSET_Member( ISA_SUBSET subset, TOP opcode )
{
  INT byte_index = ((UINT) opcode) / 8;
  INT bit_index = ((UINT) opcode) % 8;
  INT byte = isa_subset_opcode_table[(int) subset][byte_index];
  return (byte >> bit_index) & 1;
}
