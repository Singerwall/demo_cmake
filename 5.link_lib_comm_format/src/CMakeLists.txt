aux_source_directory (. SRC_LIST)

include_directories (../inc)

add_executable (main ${SRC_LIST})

find_library(TESTFUNC_LIB   testFunc   HINTS ${PROJECT_SOURCE_DIR}/lib)
find_library(TESTFUNCA_LIB  testFuncA  HINTS ${PROJECT_SOURCE_DIR}/lib)
find_library(TESTFUNCB_LIB  testFuncB  HINTS ${PROJECT_SOURCE_DIR}/lib)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

target_link_libraries (main ${TESTFUNC_LIB} ${TESTFUNCA_LIB} ${TESTFUNCB_LIB})

 
