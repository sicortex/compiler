# Install script for directory: /home/jhj/compiler/gcc_incl

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/opt/pathscale/ice9_path64_20110723")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Debug")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "0")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/4.0.10-85-gfe5c71e/include" TYPE FILE FILES
    "/home/jhj/compiler/gcc_incl/ammintrin.h"
    "/home/jhj/compiler/gcc_incl/cpuid.h"
    "/home/jhj/compiler/gcc_incl/decfloat.h"
    "/home/jhj/compiler/gcc_incl/emmintrin.h"
    "/home/jhj/compiler/gcc_incl/float.h"
    "/home/jhj/compiler/gcc_incl/iso646.h"
    "/home/jhj/compiler/gcc_incl/limits.h"
    "/home/jhj/compiler/gcc_incl/mm3dnow.h"
    "/home/jhj/compiler/gcc_incl/mmintrin.h"
    "/home/jhj/compiler/gcc_incl/mm_malloc.h"
    "/home/jhj/compiler/gcc_incl/nmmintrin.h"
    "/home/jhj/compiler/gcc_incl/pmmintrin.h"
    "/home/jhj/compiler/gcc_incl/smmintrin.h"
    "/home/jhj/compiler/gcc_incl/stdarg.h"
    "/home/jhj/compiler/gcc_incl/stdbool.h"
    "/home/jhj/compiler/gcc_incl/stddef.h"
    "/home/jhj/compiler/gcc_incl/syslimits.h"
    "/home/jhj/compiler/gcc_incl/tmmintrin.h"
    "/home/jhj/compiler/gcc_incl/unwind.h"
    "/home/jhj/compiler/gcc_incl/varargs.h"
    "/home/jhj/compiler/gcc_incl/xmmintrin.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

