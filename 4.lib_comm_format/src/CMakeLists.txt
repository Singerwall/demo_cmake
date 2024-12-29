aux_source_directory (. SRC_LIST)

include_directories (../inc)

#add_executable (main ${SRC_LIST})

#set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set (SRC_LIST  ${PROJECT_SOURCE_DIR} testFunc.c)
set (SRC_LISTA ${PROJECT_SOURCE_DIR} testFuncA.c)
set (SRC_LISTB ${PROJECT_SOURCE_DIR} testFuncB.c)

add_library (testFunc_shared SHARED ${SRC_LIST})
add_library (testFunc_static STATIC ${SRC_LIST})
set_target_properties (testFunc_shared PROPERTIES OUTPUT_NAME "testFunc")
set_target_properties (testFunc_static PROPERTIES OUTPUT_NAME "testFunc")

add_library (testFuncA_shared SHARED ${SRC_LISTA})
add_library (testFuncA_static STATIC ${SRC_LISTA})
set_target_properties (testFuncA_shared PROPERTIES OUTPUT_NAME "testFuncA")
set_target_properties (testFuncA_static PROPERTIES OUTPUT_NAME "testFuncA")

add_library (testFuncB_shared SHARED ${SRC_LISTB})
add_library (testFuncB_static STATIC ${SRC_LISTB})
set_target_properties (testFuncB_shared PROPERTIES OUTPUT_NAME "testFuncB")
set_target_properties (testFuncB_static PROPERTIES OUTPUT_NAME "testFuncB")


set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
