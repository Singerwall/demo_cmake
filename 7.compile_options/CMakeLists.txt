cmake_minimum_required (VERSION 3.5)

project (demo)



set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

option(MYDEBUG "enable debug compilation" OFF) #OFF

message(${MYDEBUG})

if(MYDEBUG)
	message("debug")
	set(CMAKE_BUILD_TYPE Debug)
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -std=c++17 -Wall")

else()
	message("Release")
	set(CMAKE_BUILD_TYPE Release)
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -std=c++17 -O3")

endif()

add_executable(main main.cpp)
