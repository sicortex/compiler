#include "targ_isa_properties.h"

const mUINT64 ISA_PROPERTIES_flags[] = {
  0x0000000100000002ULL, /* lb: load memtrap */
  0x0000000100000002ULL, /* lbu: load memtrap */
  0x0000000100000002ULL, /* lh: load memtrap */
  0x0000000100000002ULL, /* lhu: load memtrap */
  0x0000000100000002ULL, /* lw: load memtrap */
  0x0000000100003002ULL, /* lwl: load same_res unalign_ld memtrap */
  0x0000000100003002ULL, /* lwr: load same_res unalign_ld memtrap */
  0x0000000100000004ULL, /* sb: store memtrap */
  0x0000000100000004ULL, /* sh: store memtrap */
  0x0000000100000004ULL, /* sw: store memtrap */
  0x0000000100004004ULL, /* swl: store unalign_store memtrap */
  0x0000000100004004ULL, /* swr: store unalign_store memtrap */
  0x0000000100000002ULL, /* ll: load memtrap */
  0x0000000100000004ULL, /* sc: store memtrap */
  0x0000080000000000ULL, /* sync: side_effects */
  0x0000000100000002ULL, /* lwu: load memtrap */
  0x0000000100000002ULL, /* ld: load memtrap */
  0x0000000100003002ULL, /* ldl: load same_res unalign_ld memtrap */
  0x0000000100003002ULL, /* ldr: load same_res unalign_ld memtrap */
  0x0000000100000002ULL, /* lld: load memtrap */
  0x0000000100000004ULL, /* sd: store memtrap */
  0x0000000100004004ULL, /* sdl: store unalign_store memtrap */
  0x0000000100004004ULL, /* sdr: store unalign_store memtrap */
  0x0000000100000004ULL, /* scd: store memtrap */
  0x0000000000000020ULL, /* pref: prefetch */
  0x0000000000000020ULL, /* prefx: prefetch */
  0x0000000000008000ULL, /* add: iadd */
  0x0000000000008000ULL, /* addi: iadd */
  0x0000000000008000ULL, /* addiu: iadd */
  0x0000000000008000ULL, /* addu: iadd */
  0x0000000000040000ULL, /* div: idiv */
  0x0000000000040000ULL, /* divu: idiv */
  0x0000000000020000ULL, /* mul: imul */
  0x0000000000020000ULL, /* mult: imul */
  0x0000000000020000ULL, /* multu: imul */
  0x0000020000000000ULL, /* slt: icmp */
  0x0000020000000000ULL, /* slti: icmp */
  0x0000020000000000ULL, /* sltiu: icmp */
  0x0000020000000000ULL, /* sltu: icmp */
  0x0000000000010000ULL, /* sub: isub */
  0x0000000000010000ULL, /* subu: isub */
  0x0000000000088000ULL, /* dadd: iadd iop64 */
  0x0000000000088000ULL, /* daddi: iadd iop64 */
  0x0000000000088000ULL, /* daddiu: iadd iop64 */
  0x0000000000088000ULL, /* daddu: iadd iop64 */
  0x00000000000c0000ULL, /* ddiv: idiv iop64 */
  0x00000000000c0000ULL, /* ddivu: idiv iop64 */
  0x00000000000a0000ULL, /* dmult: imul iop64 */
  0x00000000000a0000ULL, /* dmultu: imul iop64 */
  0x0000000000090000ULL, /* dsub: isub iop64 */
  0x0000000000090000ULL, /* dsubu: isub iop64 */
  0x0000010000000000ULL, /* and: iand */
  0x0000010000000000ULL, /* andi: iand */
  0x0000000000000000ULL, /* lui: */
  0x0000000000000000ULL, /* nor: */
  0x0000001000000000ULL, /* or: ior */
  0x0000001000000000ULL, /* ori: ior */
  0x0000008000000000ULL, /* xor: ixor */
  0x0000008000000000ULL, /* xori: ixor */
  0x0000000000000000ULL, /* clo: */
  0x0000000000000000ULL, /* clz: */
  0x0000000000080000ULL, /* dclo: iop64 */
  0x0000000000080000ULL, /* dclz: iop64 */
  0x0000000000000000ULL, /* mfhi: */
  0x0000000000000000ULL, /* mflo: */
  0x0000000000000000ULL, /* mthi: */
  0x0000000000000000ULL, /* mtlo: */
  0x0000000000001201ULL, /* movf: move cond_move same_res */
  0x0000000000001201ULL, /* movn: move cond_move same_res */
  0x0000000000001201ULL, /* movt: move cond_move same_res */
  0x0000000000001201ULL, /* movz: move cond_move same_res */
  0x0000000000000000ULL, /* sll: */
  0x0000000000000000ULL, /* sllv: */
  0x0000000000000000ULL, /* sra: */
  0x0000000000000000ULL, /* srav: */
  0x0000000000000000ULL, /* srl: */
  0x0000000000000000ULL, /* srlv: */
  0x0000000000080000ULL, /* dsll: iop64 */
  0x0000000000080000ULL, /* dsll32: iop64 */
  0x0000000000080000ULL, /* dsllv: iop64 */
  0x0000000000080000ULL, /* dsra: iop64 */
  0x0000000000080000ULL, /* dsra32: iop64 */
  0x0000000000080000ULL, /* dsrav: iop64 */
  0x0000000000080000ULL, /* dsrl: iop64 */
  0x0000000000080000ULL, /* dsrl32: iop64 */
  0x0000000000080000ULL, /* dsrlv: iop64 */
  0x0000000000000140ULL, /* beq: xfer cond */
  0x0000000000000140ULL, /* bgez: xfer cond */
  0x0000000000000140ULL, /* bgezal: xfer cond */
  0x0000000000000140ULL, /* bgtz: xfer cond */
  0x0000000000000140ULL, /* blez: xfer cond */
  0x0000000000000140ULL, /* bltz: xfer cond */
  0x0000000000000140ULL, /* bltzal: xfer cond */
  0x0000000000000140ULL, /* bne: xfer cond */
  0x0000002000000040ULL, /* j: xfer jump */
  0x00000000000000c0ULL, /* jal: xfer call */
  0x00000000000000c0ULL, /* jalr: xfer call */
  0x0000004000000040ULL, /* jr: xfer ijump */
  0x0000000000000000ULL, /* break: */
  0x0000000000000000ULL, /* syscall: */
  0x0000000010000000ULL, /* teq: itrap */
  0x0000000010000000ULL, /* teqi: itrap */
  0x0000000010000000ULL, /* tge: itrap */
  0x0000000010000000ULL, /* tgei: itrap */
  0x0000000010000000ULL, /* tgeiu: itrap */
  0x0000000010000000ULL, /* tgeu: itrap */
  0x0000000010000000ULL, /* tlt: itrap */
  0x0000000010000000ULL, /* tlti: itrap */
  0x0000000010000000ULL, /* tltiu: itrap */
  0x0000000010000000ULL, /* tltu: itrap */
  0x0000000010000000ULL, /* tne: itrap */
  0x0000000010000000ULL, /* tnei: itrap */
  0x000040010000000aULL, /* lwc1: load fp_load memtrap fp_unpredictable_latency */
  0x000040010000000aULL, /* ldc1: load fp_load memtrap fp_unpredictable_latency */
  0x000040010000000aULL, /* lwxc1: load fp_load memtrap fp_unpredictable_latency */
  0x000040010000000aULL, /* ldxc1: load fp_load memtrap fp_unpredictable_latency */
  0x0000000100000014ULL, /* swc1: store fp_store memtrap */
  0x0000000100000014ULL, /* sdc1: store fp_store memtrap */
  0x0000000100000014ULL, /* swxc1: store fp_store memtrap */
  0x0000000100000014ULL, /* sdxc1: store fp_store memtrap */
  0x0002200001100000ULL, /* abs.s: flop fmisc fp_arith fp_round_trigger */
  0x0002200001100000ULL, /* abs.d: flop fmisc fp_arith fp_round_trigger */
  0x0002200000300000ULL, /* add.s: flop fadd fp_arith fp_round_trigger */
  0x0002200000300000ULL, /* add.d: flop fadd fp_arith fp_round_trigger */
  0x0002200600100000ULL, /* c.f.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.f.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.t.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.t.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.un.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.un.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.or.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.or.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.eq.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.eq.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.neq.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.neq.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.ueq.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.ueq.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.ogl.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.ogl.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.olt.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.olt.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.uge.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.uge.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.ult.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.ult.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.oge.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.oge.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.ole.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.ole.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.ugt.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.ugt.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.ule.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.ule.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.ogt.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.ogt.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.sf.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.sf.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.st.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.st.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.ngle.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.ngle.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.gle.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.gle.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.seq.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.seq.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.sne.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.sne.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.ngl.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.ngl.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.gl.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.gl.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.lt.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.lt.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.nlt.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.nlt.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.nge.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.nge.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.ge.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.ge.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.le.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.le.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.nle.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.nle.d: flop defs_fcc defs_fcr */
  0x0002200600100000ULL, /* c.ngt.s: flop defs_fcc defs_fcr fp_arith fp_round_trigger */
  0x0000000600100000ULL, /* c.ngt.d: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.gt.s: flop defs_fcc defs_fcr */
  0x0000000600100000ULL, /* c.gt.d: flop defs_fcc defs_fcr */
  0x0002200040100000ULL, /* div.s: flop fdiv fp_arith fp_round_trigger */
  0x0002200040100000ULL, /* div.d: flop fdiv fp_arith fp_round_trigger */
  0x0002200000900000ULL, /* mul.s: flop fmul fp_arith fp_round_trigger */
  0x0001a00000900000ULL, /* mul.d: flop fmul fp_arith fp_stall_hazard fp_round_hazard */
  0x0002200001100000ULL, /* neg.s: flop fmisc fp_arith fp_round_trigger */
  0x0002200001100000ULL, /* neg.d: flop fmisc fp_arith fp_round_trigger */
  0x0002200000500000ULL, /* sub.s: flop fsub fp_arith fp_round_trigger */
  0x0002200000500000ULL, /* sub.d: flop fsub fp_arith fp_round_trigger */
  0x0002200080100000ULL, /* sqrt.s: flop sqrt fp_arith fp_round_trigger */
  0x0003200080100000ULL, /* sqrt.d: flop sqrt fp_arith fp_round_hazard fp_round_trigger */
  0x0002200002100000ULL, /* madd.s: flop madd fp_arith fp_round_trigger */
  0x0001a00002100000ULL, /* madd.d: flop madd fp_arith fp_stall_hazard fp_round_hazard */
  0x0002200002100000ULL, /* msub.s: flop madd fp_arith fp_round_trigger */
  0x0001a00002100000ULL, /* msub.d: flop madd fp_arith fp_stall_hazard fp_round_hazard */
  0x0002200002100000ULL, /* nmadd.s: flop madd fp_arith fp_round_trigger */
  0x0001a00002100000ULL, /* nmadd.d: flop madd fp_arith fp_stall_hazard fp_round_hazard */
  0x0002200002100000ULL, /* nmsub.s: flop madd fp_arith fp_round_trigger */
  0x0001a00002100000ULL, /* nmsub.d: flop madd fp_arith fp_stall_hazard fp_round_hazard */
  0x0002200041100000ULL, /* recip.s: flop fmisc fdiv fp_arith fp_round_trigger */
  0x0001a00041100000ULL, /* recip.d: flop fmisc fdiv fp_arith fp_stall_hazard fp_round_hazard */
  0x00022000c1100000ULL, /* rsqrt.s: flop fmisc fdiv sqrt fp_arith fp_round_trigger */
  0x0001a000c1100000ULL, /* rsqrt.d: flop fmisc fdiv sqrt fp_arith fp_stall_hazard fp_round_hazard */
  0x0000000800000000ULL, /* cfc1: refs_fcr */
  0x0000000400000000ULL, /* ctc1: defs_fcr */
  0x0000000000000000ULL, /* mfc1: */
  0x0000000000000000ULL, /* mtc1: */
  0x0000000000080000ULL, /* dmfc1: iop64 */
  0x0000400000080000ULL, /* dmtc1: iop64 fp_unpredictable_latency */
  0x0002200000000401ULL, /* mov.s: move fp_move fp_arith fp_round_trigger */
  0x0002200000000401ULL, /* mov.d: move fp_move fp_arith fp_round_trigger */
  0x0000000000001601ULL, /* movf.s: move cond_move fp_move same_res */
  0x0000000000001601ULL, /* movf.d: move cond_move fp_move same_res */
  0x0002200000001601ULL, /* movn.s: move cond_move fp_move same_res fp_arith fp_round_trigger */
  0x0002200000001601ULL, /* movn.d: move cond_move fp_move same_res fp_arith fp_round_trigger */
  0x0002200000001601ULL, /* movt.s: move cond_move fp_move same_res fp_arith fp_round_trigger */
  0x0002200000001601ULL, /* movt.d: move cond_move fp_move same_res fp_arith fp_round_trigger */
  0x0002200000001601ULL, /* movz.s: move cond_move fp_move same_res fp_arith fp_round_trigger */
  0x0002200000001601ULL, /* movz.d: move cond_move fp_move same_res fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* cvt.d.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* cvt.d.w: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* cvt.d.l: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* cvt.l.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* cvt.l.d: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* cvt.s.d: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* cvt.s.w: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* cvt.s.l: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* cvt.w.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* cvt.w.d: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* ceil.w.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* ceil.w.d: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* ceil.l.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* ceil.l.d: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* floor.w.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* floor.w.d: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* floor.l.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* floor.l.d: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* round.w.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* round.w.d: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* round.l.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* round.l.d: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* trunc.w.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* trunc.w.d: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* trunc.l.s: fp_arith fp_round_trigger */
  0x0002200000000000ULL, /* trunc.l.d: fp_arith fp_round_trigger */
  0x0000000800000140ULL, /* bc1f: xfer cond refs_fcr */
  0x0000000800000140ULL, /* bc1t: xfer cond refs_fcr */
  0x0000000000000000ULL, /* dsbh: */
  0x0000000000000000ULL, /* dshd: */
  0x0000000000000000ULL, /* seb: */
  0x0000000000000000ULL, /* seh: */
  0x0000000000000000ULL, /* wsbh: */
  0x0000000000080000ULL, /* dext: iop64 */
  0x0000000000080000ULL, /* dextm: iop64 */
  0x0000000000080000ULL, /* dextu: iop64 */
  0x0000000000081000ULL, /* dins: same_res iop64 */
  0x0000000000081000ULL, /* dinsm: same_res iop64 */
  0x0000000000081000ULL, /* dinsu: same_res iop64 */
  0x0000000000080000ULL, /* drotr: iop64 */
  0x0000000000080000ULL, /* drotr32: iop64 */
  0x0000000000080000ULL, /* drotrv: iop64 */
  0x0000000000000000ULL, /* ext: */
  0x0000000000001000ULL, /* ins: same_res */
  0x0000000000000000ULL, /* rotr: */
  0x0000000000000000ULL, /* rotrv: */
  0x0000000000000000ULL, /* alnv.ps: */
  0x0000000000001601ULL, /* movn.ps: move cond_move fp_move same_res */
  0x0000000000001601ULL, /* movz.ps: move cond_move fp_move same_res */
  0x0000200001100000ULL, /* abs.ps: flop fmisc fp_arith */
  0x0000000000100000ULL, /* c.eq.ps: flop */
  0x0000000000100000ULL, /* c.f.ps: flop */
  0x0000000000100000ULL, /* c.ge.ps: flop */
  0x0000000000100000ULL, /* c.gl.ps: flop */
  0x0000000000100000ULL, /* c.gle.ps: flop */
  0x0000000000100000ULL, /* c.gt.ps: flop */
  0x0000000000100000ULL, /* c.le.ps: flop */
  0x0000000000100000ULL, /* c.lt.ps: flop */
  0x0000000000100000ULL, /* c.neq.ps: flop */
  0x0000000000100000ULL, /* c.nge.ps: flop */
  0x0000000000100000ULL, /* c.ngl.ps: flop */
  0x0000000000100000ULL, /* c.ngle.ps: flop */
  0x0000000000100000ULL, /* c.ngt.ps: flop */
  0x0000000000100000ULL, /* c.nle.ps: flop */
  0x0000000000100000ULL, /* c.nlt.ps: flop */
  0x0000000000100000ULL, /* c.oge.ps: flop */
  0x0000000000100000ULL, /* c.ogl.ps: flop */
  0x0000000000100000ULL, /* c.ogt.ps: flop */
  0x0000000000100000ULL, /* c.ole.ps: flop */
  0x0000000000100000ULL, /* c.olt.ps: flop */
  0x0000000000100000ULL, /* c.or.ps: flop */
  0x0000000000100000ULL, /* c.seq.ps: flop */
  0x0000000000100000ULL, /* c.sf.ps: flop */
  0x0000000000100000ULL, /* c.sne.ps: flop */
  0x0000000000100000ULL, /* c.st.ps: flop */
  0x0000000000100000ULL, /* c.t.ps: flop */
  0x0000000000100000ULL, /* c.ueq.ps: flop */
  0x0000000000100000ULL, /* c.uge.ps: flop */
  0x0000000000100000ULL, /* c.ugt.ps: flop */
  0x0000000000100000ULL, /* c.ule.ps: flop */
  0x0000000000100000ULL, /* c.ult.ps: flop */
  0x0000000000100000ULL, /* c.un.ps: flop */
  0x0000200000000000ULL, /* cvt.ps.s: fp_arith */
  0x0000200000000000ULL, /* cvt.s.pl: fp_arith */
  0x0000200000000000ULL, /* cvt.s.pu: fp_arith */
  0x0000000000000401ULL, /* mov.ps: move fp_move */
  0x0000000000001601ULL, /* movf.ps: move cond_move fp_move same_res */
  0x0000000000001601ULL, /* movt.ps: move cond_move fp_move same_res */
  0x0000200001100000ULL, /* neg.ps: flop fmisc fp_arith */
  0x0000000001100000ULL, /* pll.ps: flop fmisc */
  0x0000000001100000ULL, /* plu.ps: flop fmisc */
  0x0000000001100000ULL, /* pul.ps: flop fmisc */
  0x0000000001100000ULL, /* puu.ps: flop fmisc */
  0x0000200000100000ULL, /* add.ps: flop fp_arith */
  0x0000200002100000ULL, /* madd.ps: flop madd fp_arith */
  0x0000200002100000ULL, /* msub.ps: flop madd fp_arith */
  0x0000200000900000ULL, /* mul.ps: flop fmul fp_arith */
  0x0000200002100000ULL, /* nmadd.ps: flop madd fp_arith */
  0x0000200002100000ULL, /* nmsub.ps: flop madd fp_arith */
  0x0000200000100000ULL, /* sub.ps: flop fp_arith */
  0x0000000000000002ULL, /* lbx: load */
  0x0000000000000002ULL, /* ldx: load */
  0x0000000000000002ULL, /* lhx: load */
  0x0000000000000002ULL, /* lwx: load */
  0x0000000000020000ULL, /* madd: imul */
  0x0000000000020000ULL, /* maddu: imul */
  0x0000000000020000ULL, /* msub: imul */
  0x0000000000020000ULL, /* msubu: imul */
  0x00000000000a0000ULL, /* dmadd: imul iop64 */
  0x00000000000a0000ULL, /* dmaddu: imul iop64 */
  0x00000000000a0000ULL, /* dmsub: imul iop64 */
  0x00000000000a0000ULL, /* dmsubu: imul iop64 */
  0x00000000000a0000ULL, /* dmulg: imul iop64 */
  0x00000000000a0000ULL, /* dmulgu: imul iop64 */
  0x0000000000000000ULL, /* mfacx: */
  0x0000000000000000ULL, /* mtacx: */
  0x0000000000080000ULL, /* dperm: iop64 */
  0x0000000000000000ULL, /* pop: */
  0x0000000000080000ULL, /* dpop: iop64 */
  0x000040000000000aULL, /* luxc1: load fp_load fp_unpredictable_latency */
  0x0000000000000014ULL, /* suxc1: store fp_store */
  0x0000000000100000ULL, /* addred.ps: flop */
  0x0000000000100000ULL, /* mulred.ps: flop */
  0x0000000000100000ULL, /* ma.nlupuu.ps: flop */
  0x0000000000100000ULL, /* ma.plunuu.ps: flop */
  0x0000000000100000ULL, /* ma.plupll.ps: flop */
  0x0000000000100000ULL, /* ma.puupul.ps: flop */
  0x0000000040100000ULL, /* recipit1.d: flop fdiv */
  0x0000000040100000ULL, /* recipit1.s: flop fdiv */
  0x0000000040100000ULL, /* recipit1.ps: flop fdiv */
  0x0000000040100000ULL, /* recipit2.d: flop fdiv */
  0x0000000040100000ULL, /* recipit2.s: flop fdiv */
  0x0000000040100000ULL, /* recipit2.ps: flop fdiv */
  0x0000000040100000ULL, /* rsqrtit1.d: flop fdiv */
  0x0000000040100000ULL, /* rsqrtit1.s: flop fdiv */
  0x0000000040100000ULL, /* rsqrtit1.ps: flop fdiv */
  0x0000000040100000ULL, /* rsqrtit2.d: flop fdiv */
  0x0000000040100000ULL, /* rsqrtit2.s: flop fdiv */
  0x0000000040100000ULL, /* rsqrtit2.ps: flop fdiv */
  0x0000000000000000ULL, /* mfhc1: */
  0x0000000000000000ULL, /* mthc1: */
  0x0000000800000140ULL, /* bc2any2f: xfer cond refs_fcr */
  0x0000000800000140ULL, /* bc2any2t: xfer cond refs_fcr */
  0x0000000000000000ULL, /* perfctl: */
  0x0000000000000000ULL, /* tlbwir: */
  0x0000000000000000ULL, /* tlbwrr: */
  0x0000040000000000ULL, /* sext: simulated */
  0x00001c0000001000ULL, /* asm: same_res simulated side_effects var_opnds */
  0x00000c0000000800ULL, /* intrncall: uniq_res simulated side_effects */
  0x0000040000000000ULL, /* spadjust: simulated */
  0x0000040000000000ULL, /* mov_hilo: simulated */
  0x0000040000001000ULL, /* mov_fcc: same_res simulated */
  0x0000000008000000ULL, /* begin_pregtn: dummy */
  0x0000000008000000ULL, /* end_pregtn: dummy */
  0x0000000028000000ULL, /* bwd_bar: dummy unsafe */
  0x0000000028000000ULL, /* fwd_bar: dummy unsafe */
  0x0000000008000000ULL, /* dfixup: dummy */
  0x0000000008000000ULL, /* ffixup: dummy */
  0x0000000008000000ULL, /* ifixup: dummy */
  0x0000000008000000ULL, /* label: dummy */
  0x0000000004000000ULL, /* nop: noop */
  0x000000000c000000ULL, /* noop: noop dummy */
  0x0000000008000000ULL, /* swp_start: dummy */
  0x0000000008000000ULL, /* swp_stop: dummy */
};
