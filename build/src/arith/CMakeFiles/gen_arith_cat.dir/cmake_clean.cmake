FILE(REMOVE_RECURSE
  "CMakeFiles/gen_arith_cat"
  "arith.cat"
  "arith.msgs"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/gen_arith_cat.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
