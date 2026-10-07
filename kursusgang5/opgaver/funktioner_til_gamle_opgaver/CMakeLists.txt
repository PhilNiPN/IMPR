cmake_minimum_required(VERSION 4.4)

project (funk C)

add_subdirectory (lib)

add_executable (exec main.c)
target_link_libraries(exec sum)