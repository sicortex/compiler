#include "topcode.h"
#include "targ_isa_pseudo.h"

typedef struct {
  mTOP to_opc;
  mTOP from_opc;
  mUINT8 require[1];
  mUINT8 map[1][2];
} PSEUDO;

static const PSEUDO pseudos[1] = {
  /*  0: TOP_UNDEFINED => TOP_UNDEFINED */
  { 390, 390, { 0 }, { {0, 0} }}
};

static const mUINT8 pseudo_index[390][2] = {
  {  0,  0 }, /* lb        */
  {  0,  0 }, /* lbu       */
  {  0,  0 }, /* lh        */
  {  0,  0 }, /* lhu       */
  {  0,  0 }, /* lw        */
  {  0,  0 }, /* lwl       */
  {  0,  0 }, /* lwr       */
  {  0,  0 }, /* sb        */
  {  0,  0 }, /* sh        */
  {  0,  0 }, /* sw        */
  {  0,  0 }, /* swl       */
  {  0,  0 }, /* swr       */
  {  0,  0 }, /* ll        */
  {  0,  0 }, /* sc        */
  {  0,  0 }, /* sync      */
  {  0,  0 }, /* lwu       */
  {  0,  0 }, /* ld        */
  {  0,  0 }, /* ldl       */
  {  0,  0 }, /* ldr       */
  {  0,  0 }, /* lld       */
  {  0,  0 }, /* sd        */
  {  0,  0 }, /* sdl       */
  {  0,  0 }, /* sdr       */
  {  0,  0 }, /* scd       */
  {  0,  0 }, /* pref      */
  {  0,  0 }, /* prefx     */
  {  0,  0 }, /* add       */
  {  0,  0 }, /* addi      */
  {  0,  0 }, /* addiu     */
  {  0,  0 }, /* addu      */
  {  0,  0 }, /* div       */
  {  0,  0 }, /* divu      */
  {  0,  0 }, /* mul       */
  {  0,  0 }, /* mult      */
  {  0,  0 }, /* multu     */
  {  0,  0 }, /* slt       */
  {  0,  0 }, /* slti      */
  {  0,  0 }, /* sltiu     */
  {  0,  0 }, /* sltu      */
  {  0,  0 }, /* sub       */
  {  0,  0 }, /* subu      */
  {  0,  0 }, /* dadd      */
  {  0,  0 }, /* daddi     */
  {  0,  0 }, /* daddiu    */
  {  0,  0 }, /* daddu     */
  {  0,  0 }, /* ddiv      */
  {  0,  0 }, /* ddivu     */
  {  0,  0 }, /* dmult     */
  {  0,  0 }, /* dmultu    */
  {  0,  0 }, /* dsub      */
  {  0,  0 }, /* dsubu     */
  {  0,  0 }, /* and       */
  {  0,  0 }, /* andi      */
  {  0,  0 }, /* lui       */
  {  0,  0 }, /* nor       */
  {  0,  0 }, /* or        */
  {  0,  0 }, /* ori       */
  {  0,  0 }, /* xor       */
  {  0,  0 }, /* xori      */
  {  0,  0 }, /* clo       */
  {  0,  0 }, /* clz       */
  {  0,  0 }, /* dclo      */
  {  0,  0 }, /* dclz      */
  {  0,  0 }, /* mfhi      */
  {  0,  0 }, /* mflo      */
  {  0,  0 }, /* mthi      */
  {  0,  0 }, /* mtlo      */
  {  0,  0 }, /* movf      */
  {  0,  0 }, /* movn      */
  {  0,  0 }, /* movt      */
  {  0,  0 }, /* movz      */
  {  0,  0 }, /* sll       */
  {  0,  0 }, /* sllv      */
  {  0,  0 }, /* sra       */
  {  0,  0 }, /* srav      */
  {  0,  0 }, /* srl       */
  {  0,  0 }, /* srlv      */
  {  0,  0 }, /* dsll      */
  {  0,  0 }, /* dsll32    */
  {  0,  0 }, /* dsllv     */
  {  0,  0 }, /* dsra      */
  {  0,  0 }, /* dsra32    */
  {  0,  0 }, /* dsrav     */
  {  0,  0 }, /* dsrl      */
  {  0,  0 }, /* dsrl32    */
  {  0,  0 }, /* dsrlv     */
  {  0,  0 }, /* beq       */
  {  0,  0 }, /* bgez      */
  {  0,  0 }, /* bgezal    */
  {  0,  0 }, /* bgtz      */
  {  0,  0 }, /* blez      */
  {  0,  0 }, /* bltz      */
  {  0,  0 }, /* bltzal    */
  {  0,  0 }, /* bne       */
  {  0,  0 }, /* j         */
  {  0,  0 }, /* jal       */
  {  0,  0 }, /* jalr      */
  {  0,  0 }, /* jr        */
  {  0,  0 }, /* break     */
  {  0,  0 }, /* syscall   */
  {  0,  0 }, /* teq       */
  {  0,  0 }, /* teqi      */
  {  0,  0 }, /* tge       */
  {  0,  0 }, /* tgei      */
  {  0,  0 }, /* tgeiu     */
  {  0,  0 }, /* tgeu      */
  {  0,  0 }, /* tlt       */
  {  0,  0 }, /* tlti      */
  {  0,  0 }, /* tltiu     */
  {  0,  0 }, /* tltu      */
  {  0,  0 }, /* tne       */
  {  0,  0 }, /* tnei      */
  {  0,  0 }, /* lwc1      */
  {  0,  0 }, /* ldc1      */
  {  0,  0 }, /* lwxc1     */
  {  0,  0 }, /* ldxc1     */
  {  0,  0 }, /* swc1      */
  {  0,  0 }, /* sdc1      */
  {  0,  0 }, /* swxc1     */
  {  0,  0 }, /* sdxc1     */
  {  0,  0 }, /* abs.s     */
  {  0,  0 }, /* abs.d     */
  {  0,  0 }, /* add.s     */
  {  0,  0 }, /* add.d     */
  {  0,  0 }, /* c.f.s     */
  {  0,  0 }, /* c.f.d     */
  {  0,  0 }, /* c.t.s     */
  {  0,  0 }, /* c.t.d     */
  {  0,  0 }, /* c.un.s    */
  {  0,  0 }, /* c.un.d    */
  {  0,  0 }, /* c.or.s    */
  {  0,  0 }, /* c.or.d    */
  {  0,  0 }, /* c.eq.s    */
  {  0,  0 }, /* c.eq.d    */
  {  0,  0 }, /* c.neq.s   */
  {  0,  0 }, /* c.neq.d   */
  {  0,  0 }, /* c.ueq.s   */
  {  0,  0 }, /* c.ueq.d   */
  {  0,  0 }, /* c.ogl.s   */
  {  0,  0 }, /* c.ogl.d   */
  {  0,  0 }, /* c.olt.s   */
  {  0,  0 }, /* c.olt.d   */
  {  0,  0 }, /* c.uge.s   */
  {  0,  0 }, /* c.uge.d   */
  {  0,  0 }, /* c.ult.s   */
  {  0,  0 }, /* c.ult.d   */
  {  0,  0 }, /* c.oge.s   */
  {  0,  0 }, /* c.oge.d   */
  {  0,  0 }, /* c.ole.s   */
  {  0,  0 }, /* c.ole.d   */
  {  0,  0 }, /* c.ugt.s   */
  {  0,  0 }, /* c.ugt.d   */
  {  0,  0 }, /* c.ule.s   */
  {  0,  0 }, /* c.ule.d   */
  {  0,  0 }, /* c.ogt.s   */
  {  0,  0 }, /* c.ogt.d   */
  {  0,  0 }, /* c.sf.s    */
  {  0,  0 }, /* c.sf.d    */
  {  0,  0 }, /* c.st.s    */
  {  0,  0 }, /* c.st.d    */
  {  0,  0 }, /* c.ngle.s  */
  {  0,  0 }, /* c.ngle.d  */
  {  0,  0 }, /* c.gle.s   */
  {  0,  0 }, /* c.gle.d   */
  {  0,  0 }, /* c.seq.s   */
  {  0,  0 }, /* c.seq.d   */
  {  0,  0 }, /* c.sne.s   */
  {  0,  0 }, /* c.sne.d   */
  {  0,  0 }, /* c.ngl.s   */
  {  0,  0 }, /* c.ngl.d   */
  {  0,  0 }, /* c.gl.s    */
  {  0,  0 }, /* c.gl.d    */
  {  0,  0 }, /* c.lt.s    */
  {  0,  0 }, /* c.lt.d    */
  {  0,  0 }, /* c.nlt.s   */
  {  0,  0 }, /* c.nlt.d   */
  {  0,  0 }, /* c.nge.s   */
  {  0,  0 }, /* c.nge.d   */
  {  0,  0 }, /* c.ge.s    */
  {  0,  0 }, /* c.ge.d    */
  {  0,  0 }, /* c.le.s    */
  {  0,  0 }, /* c.le.d    */
  {  0,  0 }, /* c.nle.s   */
  {  0,  0 }, /* c.nle.d   */
  {  0,  0 }, /* c.ngt.s   */
  {  0,  0 }, /* c.ngt.d   */
  {  0,  0 }, /* c.gt.s    */
  {  0,  0 }, /* c.gt.d    */
  {  0,  0 }, /* div.s     */
  {  0,  0 }, /* div.d     */
  {  0,  0 }, /* mul.s     */
  {  0,  0 }, /* mul.d     */
  {  0,  0 }, /* neg.s     */
  {  0,  0 }, /* neg.d     */
  {  0,  0 }, /* sub.s     */
  {  0,  0 }, /* sub.d     */
  {  0,  0 }, /* sqrt.s    */
  {  0,  0 }, /* sqrt.d    */
  {  0,  0 }, /* madd.s    */
  {  0,  0 }, /* madd.d    */
  {  0,  0 }, /* msub.s    */
  {  0,  0 }, /* msub.d    */
  {  0,  0 }, /* nmadd.s   */
  {  0,  0 }, /* nmadd.d   */
  {  0,  0 }, /* nmsub.s   */
  {  0,  0 }, /* nmsub.d   */
  {  0,  0 }, /* recip.s   */
  {  0,  0 }, /* recip.d   */
  {  0,  0 }, /* rsqrt.s   */
  {  0,  0 }, /* rsqrt.d   */
  {  0,  0 }, /* cfc1      */
  {  0,  0 }, /* ctc1      */
  {  0,  0 }, /* mfc1      */
  {  0,  0 }, /* mtc1      */
  {  0,  0 }, /* dmfc1     */
  {  0,  0 }, /* dmtc1     */
  {  0,  0 }, /* mov.s     */
  {  0,  0 }, /* mov.d     */
  {  0,  0 }, /* movf.s    */
  {  0,  0 }, /* movf.d    */
  {  0,  0 }, /* movn.s    */
  {  0,  0 }, /* movn.d    */
  {  0,  0 }, /* movt.s    */
  {  0,  0 }, /* movt.d    */
  {  0,  0 }, /* movz.s    */
  {  0,  0 }, /* movz.d    */
  {  0,  0 }, /* cvt.d.s   */
  {  0,  0 }, /* cvt.d.w   */
  {  0,  0 }, /* cvt.d.l   */
  {  0,  0 }, /* cvt.l.s   */
  {  0,  0 }, /* cvt.l.d   */
  {  0,  0 }, /* cvt.s.d   */
  {  0,  0 }, /* cvt.s.w   */
  {  0,  0 }, /* cvt.s.l   */
  {  0,  0 }, /* cvt.w.s   */
  {  0,  0 }, /* cvt.w.d   */
  {  0,  0 }, /* ceil.w.s  */
  {  0,  0 }, /* ceil.w.d  */
  {  0,  0 }, /* ceil.l.s  */
  {  0,  0 }, /* ceil.l.d  */
  {  0,  0 }, /* floor.w.s */
  {  0,  0 }, /* floor.w.d */
  {  0,  0 }, /* floor.l.s */
  {  0,  0 }, /* floor.l.d */
  {  0,  0 }, /* round.w.s */
  {  0,  0 }, /* round.w.d */
  {  0,  0 }, /* round.l.s */
  {  0,  0 }, /* round.l.d */
  {  0,  0 }, /* trunc.w.s */
  {  0,  0 }, /* trunc.w.d */
  {  0,  0 }, /* trunc.l.s */
  {  0,  0 }, /* trunc.l.d */
  {  0,  0 }, /* bc1f      */
  {  0,  0 }, /* bc1t      */
  {  0,  0 }, /* dsbh      */
  {  0,  0 }, /* dshd      */
  {  0,  0 }, /* seb       */
  {  0,  0 }, /* seh       */
  {  0,  0 }, /* wsbh      */
  {  0,  0 }, /* dext      */
  {  0,  0 }, /* dextm     */
  {  0,  0 }, /* dextu     */
  {  0,  0 }, /* dins      */
  {  0,  0 }, /* dinsm     */
  {  0,  0 }, /* dinsu     */
  {  0,  0 }, /* drotr     */
  {  0,  0 }, /* drotr32   */
  {  0,  0 }, /* drotrv    */
  {  0,  0 }, /* ext       */
  {  0,  0 }, /* ins       */
  {  0,  0 }, /* rotr      */
  {  0,  0 }, /* rotrv     */
  {  0,  0 }, /* alnv.ps   */
  {  0,  0 }, /* movn.ps   */
  {  0,  0 }, /* movz.ps   */
  {  0,  0 }, /* abs.ps    */
  {  0,  0 }, /* c.eq.ps   */
  {  0,  0 }, /* c.f.ps    */
  {  0,  0 }, /* c.ge.ps   */
  {  0,  0 }, /* c.gl.ps   */
  {  0,  0 }, /* c.gle.ps  */
  {  0,  0 }, /* c.gt.ps   */
  {  0,  0 }, /* c.le.ps   */
  {  0,  0 }, /* c.lt.ps   */
  {  0,  0 }, /* c.neq.ps  */
  {  0,  0 }, /* c.nge.ps  */
  {  0,  0 }, /* c.ngl.ps  */
  {  0,  0 }, /* c.ngle.ps */
  {  0,  0 }, /* c.ngt.ps  */
  {  0,  0 }, /* c.nle.ps  */
  {  0,  0 }, /* c.nlt.ps  */
  {  0,  0 }, /* c.oge.ps  */
  {  0,  0 }, /* c.ogl.ps  */
  {  0,  0 }, /* c.ogt.ps  */
  {  0,  0 }, /* c.ole.ps  */
  {  0,  0 }, /* c.olt.ps  */
  {  0,  0 }, /* c.or.ps   */
  {  0,  0 }, /* c.seq.ps  */
  {  0,  0 }, /* c.sf.ps   */
  {  0,  0 }, /* c.sne.ps  */
  {  0,  0 }, /* c.st.ps   */
  {  0,  0 }, /* c.t.ps    */
  {  0,  0 }, /* c.ueq.ps  */
  {  0,  0 }, /* c.uge.ps  */
  {  0,  0 }, /* c.ugt.ps  */
  {  0,  0 }, /* c.ule.ps  */
  {  0,  0 }, /* c.ult.ps  */
  {  0,  0 }, /* c.un.ps   */
  {  0,  0 }, /* cvt.ps.s  */
  {  0,  0 }, /* cvt.s.pl  */
  {  0,  0 }, /* cvt.s.pu  */
  {  0,  0 }, /* mov.ps    */
  {  0,  0 }, /* movf.ps   */
  {  0,  0 }, /* movt.ps   */
  {  0,  0 }, /* neg.ps    */
  {  0,  0 }, /* pll.ps    */
  {  0,  0 }, /* plu.ps    */
  {  0,  0 }, /* pul.ps    */
  {  0,  0 }, /* puu.ps    */
  {  0,  0 }, /* add.ps    */
  {  0,  0 }, /* madd.ps   */
  {  0,  0 }, /* msub.ps   */
  {  0,  0 }, /* mul.ps    */
  {  0,  0 }, /* nmadd.ps  */
  {  0,  0 }, /* nmsub.ps  */
  {  0,  0 }, /* sub.ps    */
  {  0,  0 }, /* lbx       */
  {  0,  0 }, /* ldx       */
  {  0,  0 }, /* lhx       */
  {  0,  0 }, /* lwx       */
  {  0,  0 }, /* madd      */
  {  0,  0 }, /* maddu     */
  {  0,  0 }, /* msub      */
  {  0,  0 }, /* msubu     */
  {  0,  0 }, /* dmadd     */
  {  0,  0 }, /* dmaddu    */
  {  0,  0 }, /* dmsub     */
  {  0,  0 }, /* dmsubu    */
  {  0,  0 }, /* dmulg     */
  {  0,  0 }, /* dmulgu    */
  {  0,  0 }, /* mfacx     */
  {  0,  0 }, /* mtacx     */
  {  0,  0 }, /* dperm     */
  {  0,  0 }, /* pop       */
  {  0,  0 }, /* dpop      */
  {  0,  0 }, /* luxc1     */
  {  0,  0 }, /* suxc1     */
  {  0,  0 }, /* addred.ps */
  {  0,  0 }, /* mulred.ps */
  {  0,  0 }, /* ma.nlupuu.ps */
  {  0,  0 }, /* ma.plunuu.ps */
  {  0,  0 }, /* ma.plupll.ps */
  {  0,  0 }, /* ma.puupul.ps */
  {  0,  0 }, /* recipit1.d */
  {  0,  0 }, /* recipit1.s */
  {  0,  0 }, /* recipit1.ps */
  {  0,  0 }, /* recipit2.d */
  {  0,  0 }, /* recipit2.s */
  {  0,  0 }, /* recipit2.ps */
  {  0,  0 }, /* rsqrtit1.d */
  {  0,  0 }, /* rsqrtit1.s */
  {  0,  0 }, /* rsqrtit1.ps */
  {  0,  0 }, /* rsqrtit2.d */
  {  0,  0 }, /* rsqrtit2.s */
  {  0,  0 }, /* rsqrtit2.ps */
  {  0,  0 }, /* mfhc1     */
  {  0,  0 }, /* mthc1     */
  {  0,  0 }, /* bc2any2f  */
  {  0,  0 }, /* bc2any2t  */
  {  0,  0 }, /* perfctl   */
  {  0,  0 }, /* tlbwir    */
  {  0,  0 }, /* tlbwrr    */
  {  0,  0 }, /* sext      */
  {  0,  0 }, /* asm       */
  {  0,  0 }, /* intrncall */
  {  0,  0 }, /* spadjust  */
  {  0,  0 }, /* mov_hilo  */
  {  0,  0 }, /* mov_fcc   */
  {  0,  0 }, /* begin_pregtn */
  {  0,  0 }, /* end_pregtn */
  {  0,  0 }, /* bwd_bar   */
  {  0,  0 }, /* fwd_bar   */
  {  0,  0 }, /* dfixup    */
  {  0,  0 }, /* ffixup    */
  {  0,  0 }, /* ifixup    */
  {  0,  0 }, /* label     */
  {  0,  0 }, /* nop       */
  {  0,  0 }, /* noop      */
  {  0,  0 }, /* swp_start */
  {  0,  0 }, /* swp_stop  */
};

#define OPND(n)   (o[(n)])
#define RESULT(n) (r[(n)])

TOP ISA_PSEUDO_Translate(TOP opc, INT64 *r, INT64 *o, ISA_PSEUDO_DIRECTION dir)
{
  int i;
  int j;
  int n;
  int arg[0];
  const INT idx = pseudo_index[(INT)opc][dir];
  const PSEUDO *pop = pseudos + idx;

  if (pop->from_opc != opc) return opc;

  if (dir == ISA_PSEUDO_to_pseudo) {
    do {
      for (i = 0;; ++i) {
        BOOL val;
        n = pop->require[i];
        switch (n) {
        case 0:
          goto xlate_pseudo;
        default:
          return TOP_UNDEFINED;
        }
        if (!val) break;
      }
    } while ((++pop)->from_opc == opc);
    return opc;
  }

xlate_pseudo:
  ;
  return (TOP)pop->to_opc;
}
