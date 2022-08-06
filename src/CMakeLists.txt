add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/jit_amd64.c
        COMMAND luajit ./dynasm/dynasm.lua --nolineno -o jit_amd64.c jit_amd64.dasc
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/jit_amd64.dasc)
add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/jit_arm64.c
        COMMAND luajit ./dynasm/dynasm.lua --nolineno -o jit_arm64.c jit_arm64.dasc
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/jit_arm64.dasc)
add_custom_target(generated DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/jit_amd64.c ${CMAKE_CURRENT_SOURCE_DIR}/jit_arm64.c)