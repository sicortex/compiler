FILE(REMOVE_RECURSE
  "CMakeFiles/generate_topcode"
  "mips/topcode.c"
  "mips/topcode.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/generate_topcode.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
