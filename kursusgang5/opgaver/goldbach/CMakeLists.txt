cmake_minimum_required (VERSION 4.4)
project(goldbach C)

add_subdirectory(lib)

add_executable(goldbach main.c)
target_link_libraries(goldbach PUBLIC g)