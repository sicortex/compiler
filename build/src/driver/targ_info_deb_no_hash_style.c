

#include "targ_info.h"
#include "option_names.h"

targ_info_t targ_info[] = {
	{"mips_64",	"mips",	"64",	ABI_64,	"/usr/lib64",	"/usr/lib64/gcc/mips64el-sicortex-linux-gnu/4.2.3",	"/lib64/ld.so.1"},
	{"mips_32",	"mips",	"32",	ABI_N32,	"/usr/lib32",	"/usr/lib64/gcc/mips64el-sicortex-linux-gnu/4.2.3/n32",	"/lib32/ld.so.1"}
};

size_t targ_info_size = sizeof(targ_info) / sizeof(targ_info[0]);

