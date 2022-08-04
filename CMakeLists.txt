cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)
project(ExprJIT C)

add_library(exprjit
    "src/exprjit.c"
    "src/exprjit.h"
)
target_include_directories(exprjit PUBLIC src)

add_executable(exprjit_test Test/main.c)
target_link_libraries(exprjit_test exprjit)
