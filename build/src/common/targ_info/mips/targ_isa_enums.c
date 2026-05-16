#include "targ_isa_enums.h"

const ISA_ENUM_CLASS_INFO ISA_ENUM_CLASS_info[] = {
	{ "EC_UNDEFINED",	ECV_UNDEFINED,	ECV_UNDEFINED },
	{ "EC_pfhint",	ECV_pfhint_load,	ECV_pfhint_prepare_store },
	{ "EC_perfctlcode",	ECV_perfctlcode_stop,	ECV_perfctlcode_start },
};

const ISA_ENUM_CLASS_VALUE_INFO ISA_ENUM_CLASS_VALUE_info[] = {
	{ "UNDEFINED",	-1 },
	{ "load",	0 },
	{ "store",	1 },
	{ "load_streamed",	4 },
	{ "store_streamed",	5 },
	{ "load_retained",	6 },
	{ "store_retained",	7 },
	{ "nudge_L1",	24 },
	{ "nudge",	25 },
	{ "load_to_L2",	28 },
	{ "store_to_L2",	29 },
	{ "prepare_store",	30 },
	{ "stop",	0 },
	{ "start",	1 },
};

