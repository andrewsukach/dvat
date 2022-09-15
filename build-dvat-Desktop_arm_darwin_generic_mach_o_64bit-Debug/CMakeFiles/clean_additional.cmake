# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/dvat_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/dvat_autogen.dir/ParseCache.txt"
  "dvat_autogen"
  )
endif()
