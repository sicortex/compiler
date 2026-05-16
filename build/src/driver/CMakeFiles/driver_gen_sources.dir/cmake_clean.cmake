FILE(REMOVE_RECURSE
  "CMakeFiles/driver_gen_sources"
  "check_combos.c"
  "implicits.c"
  "version_hg.c"
  "OPTIONS.P"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/driver_gen_sources.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
