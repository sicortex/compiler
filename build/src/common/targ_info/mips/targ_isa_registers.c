#include "targ_isa_subset.h"
#include "targ_isa_registers.h"

const ISA_REGISTER_CLASS_INFO ISA_REGISTER_CLASS_info[] = {
  { 0x00,   0,  -1,  0, 0, 0, "UNDEFINED", { 0 } },
  { 0x01,   0,  31, 64, 1, 0, "integer",
    { "$0", "$1", "$2", "$3", "$4", "$5", "$6", "$7", "$8", "$9", "$10", 
      "$11", "$12", "$13", "$14", "$15", "$16", "$17", "$18", "$19", "$20", 
      "$21", "$22", "$23", "$24", "$25", "$26", "$27", "$gp", "$sp", "$30", 
      "$31" } },
  { 0x01,   0,  31, 64, 1, 0, "float",
    { "$f0", "$f1", "$f2", "$f3", "$f4", "$f5", "$f6", "$f7", "$f8", "$f9", 
      "$f10", "$f11", "$f12", "$f13", "$f14", "$f15", "$f16", "$f17", 
      "$f18", "$f19", "$f20", "$f21", "$f22", "$f23", "$f24", "$f25", 
      "$f26", "$f27", "$f28", "$f29", "$f30", "$f31" } },
  { 0x01,   0,   7,  1, 0, 0, "fcc",
    { "$fcc0", "$fcc1", "$fcc2", "$fcc3", "$fcc4", "$fcc5", "$fcc6", "$fcc7" } },
  { 0x01,   0,   0, 128, 0, 0, "hilo",
    { "$hilo" } },
};

mUINT8 ISA_REGISTER_CLASS_info_index[] = {
  0,  /* ISA_REGISTER_CLASS_UNDEFINED */
  1,  /* ISA_REGISTER_CLASS_integer */
  2,  /* ISA_REGISTER_CLASS_float */
  3,  /* ISA_REGISTER_CLASS_fcc */
  4,  /* ISA_REGISTER_CLASS_hilo */
};

const ISA_REGISTER_SUBCLASS_INFO ISA_REGISTER_SUBCLASS_info[] = {
  { "UNDEFINED", ISA_REGISTER_CLASS_UNDEFINED, 0, { 0 }, { 0 } },
};

void ISA_REGISTER_Initialize(void)
{
  INT rc;
  INT mask = 1 << (INT)ISA_SUBSET_Value;
  for (rc = ISA_REGISTER_CLASS_MIN; rc <= ISA_REGISTER_CLASS_MAX; ++rc) {
    INT i = ISA_REGISTER_CLASS_info_index[rc];
    const ISA_REGISTER_CLASS_INFO *info = &ISA_REGISTER_CLASS_info[i];
    while ((info->isa_mask & mask) == 0) ++info, ++i;
    ISA_REGISTER_CLASS_info_index[rc] = i;
  }
}
