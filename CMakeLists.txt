cmake_minimum_required(VERSION 3.27)
project(_Zadania_2 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
#target_include_directories(_Zadania_2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(_Zadania_2 main.c
        Zad_2_.c
        )
add_executable(Zad_1 Zad_1.c)
add_executable(Zad_2 Zad_2_.c)
add_executable(Zad_3 Zad_3_.c)
