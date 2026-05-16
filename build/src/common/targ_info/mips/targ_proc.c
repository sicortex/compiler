#include "targ_proc.h"

static const char* const processor_names[] = {
  "r10000",
  "mips5kf",
  "twc9a",
  "UNDEFINED"
};

PROCESSOR PROCESSOR_Value = PROCESSOR_UNDEFINED;

const char* PROCESSOR_Name(PROCESSOR proc)
{
  return processor_names[(int)proc];
}
