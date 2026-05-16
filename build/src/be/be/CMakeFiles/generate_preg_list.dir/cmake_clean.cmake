FILE(REMOVE_RECURSE
  "CMakeFiles/generate_preg_list"
  "../preg_list.cxx"
  "../preg_list.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/generate_preg_list.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
