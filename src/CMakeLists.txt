find_program(LUA_EXECUTABLE luajit)
if(NOT LUA_EXECUTABLE)
    message("-- LuaJIT executable not found")
else()
    add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/jit_amd64.c
        COMMAND ${LUA_EXECUTABLE} ./dynasm/dynasm.lua --nolineno -o jit_amd64.c jit_amd64.dasc
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/jit_amd64.dasc)
    add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/jit_arm64.c
        COMMAND ${LUA_EXECUTABLE} ./dynasm/dynasm.lua --nolineno -o jit_arm64.c jit_arm64.dasc
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/jit_arm64.dasc)
    add_custom_target(generated DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/jit_amd64.c ${CMAKE_CURRENT_SOURCE_DIR}/jit_arm64.c)
endif()