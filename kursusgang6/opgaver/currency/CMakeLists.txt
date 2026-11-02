cmake_minimum_required(VERSION 4.4)
project(currency C)
add_subdirectory (lib)

add_executable (currency main.c)
target_link_libraries (currency PRIVATE currencylib)