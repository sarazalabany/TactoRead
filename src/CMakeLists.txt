cmake_minimum_required(VERSION 3.12)

message("current cmake directoy " ${CMAKE_CURRENT_SOURCE_DIR})


add_executable(application 
				main.cpp)

target_include_directories(application 
				PRIVATE 
				${CMAKE_CURRENT_SOURCE_DIR}/../include)