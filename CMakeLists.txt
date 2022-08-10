cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)
project(ExprJIT C)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
if(HAVE_SANITIZER)
    include(FindUBSan)
    include(FindASan)
endif()

add_library(exprjit
    "src/exprjit.c"
    "src/exprjit.h"
    "src/tinyexpr-compat.h"
)
target_include_directories(exprjit PUBLIC src)
target_link_libraries(exprjit PUBLIC m)

include(CheckCSourceCompiles)
check_c_source_compiles("
    int main() {
        void *pLabel = &&label;
        goto *pLabel;
        return 1;
        label:
        return 0;
    }"
    HAVE_COMPUTED_GOTO)
if (HAVE_COMPUTED_GOTO)
    target_compile_definitions(exprjit PUBLIC -DHAVE_COMPUTED_GOTO=1)
endif ()

add_subdirectory(src)
if(TARGET generated)
    add_dependencies(exprjit generated)
endif()

add_executable(exprjit_cli test/cli.c)
target_link_libraries(exprjit_cli exprjit)

add_executable(exprjit_test test/main.c)
target_link_libraries(exprjit_test exprjit)

add_executable(exprjit_benchmark test/benchmark.c)
target_link_libraries(exprjit_benchmark exprjit)

add_executable(exprjit_smoke test/smoke.c test/minctest.h)
target_link_libraries(exprjit_smoke exprjit)
