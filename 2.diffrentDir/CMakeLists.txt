cmake_minimum_required (VERSION 2.8)

project (demo)



aux_source_directory (Func SRC_LIST1)
aux_source_directory (FuncA SRC_LISTA)
aux_source_directory (FuncB SRC_LISTB)
aux_source_directory(. SRC_LIST)


include_directories (Func FuncA FuncB)
 

add_executable(main ${SRC_LIST}  ${SRC_LIST1} ${SRC_LISTA} ${SRC_LISTB})
