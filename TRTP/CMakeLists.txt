cmake_minimum_required(VERSION 3.12)
project(TRTP C)

set(CMAKE_C_STANDARD 99)

add_executable(TRTP database.c macros.h record.h record.c)