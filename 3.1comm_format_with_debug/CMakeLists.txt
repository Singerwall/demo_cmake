cmake_minimum_required(VERSION 3.5)

option(MYDEBUG "enable debug compilation" ON) #OFF

message(${MYDEBUG})

if(MYDEBUG)
	message("debug")
	set(CMAKE_BUILD_TYPE Debug)
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -std=c++20 -Wall")

else()
	message("Release")
	set(CMAKE_BUILD_TYPE Release)
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -std=c++20 -O3")

endif()


project (serial_asio)



add_subdirectory (src)
