#
# The MIT License (MIT)
#
# Copyright (c) 2013 Matthew Arsenault
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#

# Check if the compiler supports a working ubsan. Provides a UBSan
# build type, which is essentially Debug + ubsan. The flag can be used
# independently to compose it with other build types or sanitizers.
#
# Sets these variables:
#
# HAVE_UNDEFINED_BEHAVIOR_SANITIZER - True or false if the UBSan is available
# UNDEFINED_BEHAVIOR_SANITIZER_FLAG - Flag to add to compiler to use ubsan if supported
#
# CMAKE_C_FLAGS_UBSAN - Flags to use for C with ubsan
# CMAKE_CXX_FLAGS_UBSAN  - Flags to use for C++ with ubsan
##
#

include(CheckCCompilerFlag)

# Set -Werror to catch "argument unused during compilation" warnings
set(CMAKE_REQUIRED_FLAGS "-Werror")
check_c_compiler_flag("-fsanitize=undefined" HAVE_FLAG_SANITIZE_UNDEFINED)

if(HAVE_FLAG_SANITIZE_UNDEFINED)
  set(UNDEFINED_BEHAVIOR_SANITIZER_FLAG "-fsanitize=undefined")
else()
  set(HAVE_UNDEFINED_BEHAVIOR_SANITIZER FALSE)
  return()
endif()

unset(CMAKE_REQUIRED_FLAGS)

set(CMAKE_C_FLAGS_UBSAN "-O0 -g ${UNDEFINED_BEHAVIOR_SANITIZER_FLAG} -fno-omit-frame-pointer"
    CACHE STRING "Flags used by the C compiler during UBSan builds."
    FORCE)
set(CMAKE_CXX_FLAGS_UBSAN "-O0 -g ${UNDEFINED_BEHAVIOR_SANITIZER_FLAG} -fno-omit-frame-pointer"
    CACHE STRING "Flags used by the C++ compiler during UBSan builds."
    FORCE)
set(CMAKE_EXE_LINKER_FLAGS_UBSAN "${UNDEFINED_BEHAVIOR_SANITIZER_FLAG}"
    CACHE STRING "Flags used for linking binaries during UBSan builds."
    FORCE)
set(CMAKE_SHARED_LINKER_FLAGS_UBSAN "${UNDEFINED_BEHAVIOR_SANITIZER_FLAG}"
    CACHE STRING "Flags used by the shared libraries linker during UBSan builds."
    FORCE)

mark_as_advanced(CMAKE_C_FLAGS_UBSAN
                 CMAKE_CXX_FLAGS_UBSAN
                 CMAKE_EXE_LINKER_FLAGS_UBSAN
                 CMAKE_SHARED_LINKER_FLAGS_UBSAN)


