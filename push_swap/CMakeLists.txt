cmake_minimum_required(VERSION 3.19)
project(push_swap C)

set(CMAKE_C_STANDARD 99)

add_executable(push_swap main.c src/sort_to_five.c src/new_str.c src/sort_six_plus.c src/free_list.c)