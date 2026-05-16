FILE(REMOVE_RECURSE
  "CMakeFiles/compiler-stage"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/compiler-stage.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
