cmake_minimum_required(VERSION 4.4)
project(newton_sqrt C)
add_subdirectory (lib)

add_executable(newton main.c)
target_link_libraries(newton PRIVATE mysqrt)