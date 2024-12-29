cmake_minimum_required (VERSION 2.8)

project (demo)
aux_source_directory(. SRC_LIST)

#set( SRC_LIST
#	 ./main.c
#	 ./testFuncA.c
#	 ./testFunc.c)

add_executable(main ${SRC_LIST})
