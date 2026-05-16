FILE(REMOVE_RECURSE
  "CMakeFiles/generate_extension"
  "extension_include.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/generate_extension.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
