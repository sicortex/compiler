cmake_minimum_required(VERSION 2.8.1)
project(GetGccRuntimeDir CXX)

TRY_RUN(RUN_RES COMP_RES
    ${CMAKE_BINARY_DIR} "/home/jhj/compiler/build//CMakeFiles/GetGccRuntimeDir/rt.cc"
    CMAKE_FLAGS
	"-DLINK_LIBRARIES:STRING=-v"
    COMPILE_OUTPUT_VARIABLE COMP_OUT
    RUN_OUTPUT_VARIABLE RUN_OUT)
FILE(WRITE "${CMAKE_CURRENT_BINARY_DIR}/result.cmake"
    "set(GCCRTDATA \"${COMP_OUT}\")\n")
