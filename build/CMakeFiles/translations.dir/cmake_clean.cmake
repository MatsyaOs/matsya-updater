file(REMOVE_RECURSE
  "../translations/en_US.ts"
  "../translations/zh_CN.ts"
  "CMakeFiles/translations"
  "en_US.qm"
  "zh_CN.qm"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/translations.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
