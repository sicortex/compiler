FILE(REMOVE_RECURSE
  "CMakeFiles/openmp_p-mips_32"
  "../../lib/mips/32/libopenmp_p.a"
  "openmp_p-mips_32/affinity_c.o"
  "openmp_p-mips_32/atomic_c.o"
  "openmp_p-mips_32/cpuid_c.o"
  "openmp_p-mips_32/lock_c.o"
  "openmp_p-mips_32/loop_c.o"
  "openmp_p-mips_32/manager_c.o"
  "openmp_p-mips_32/omp_c.o"
  "openmp_p-mips_32/schedule_c.o"
  "openmp_p-mips_32/stack_c.o"
  "openmp_p-mips_32/team_c.o"
  "openmp_p-mips_32/thread_c.o"
  "openmp_p-mips_32/utils_c.o"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/openmp_p-mips_32.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
