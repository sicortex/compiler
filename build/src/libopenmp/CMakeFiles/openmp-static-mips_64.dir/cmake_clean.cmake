FILE(REMOVE_RECURSE
  "CMakeFiles/openmp-static-mips_64"
  "../../lib/mips/64/libopenmp.a"
  "openmp-static-mips_64/affinity_c.o"
  "openmp-static-mips_64/atomic_c.o"
  "openmp-static-mips_64/cpuid_c.o"
  "openmp-static-mips_64/lock_c.o"
  "openmp-static-mips_64/loop_c.o"
  "openmp-static-mips_64/manager_c.o"
  "openmp-static-mips_64/omp_c.o"
  "openmp-static-mips_64/schedule_c.o"
  "openmp-static-mips_64/stack_c.o"
  "openmp-static-mips_64/team_c.o"
  "openmp-static-mips_64/thread_c.o"
  "openmp-static-mips_64/utils_c.o"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/openmp-static-mips_64.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
