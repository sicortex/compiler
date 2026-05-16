# Install script for directory: /home/jhj/compiler/src

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/4.0.10-85-gfe5c71e" TYPE FILE FILES
    "/home/jhj/compiler/src/include/omp/omp_lib.h"
    "/home/jhj/compiler/src/include/omp/omp_lib.f"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/jhj/compiler/build/src/csu/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/driver/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/libcif/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/libcmplrs/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/libelf/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/libelfutil/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/common/rtkutils/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/common/targ_info/parser/gensyn/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/common/targ_info/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/common/util/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/be/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/libpscrt/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/wgen/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/ipa/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/ipa_link/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/libopenmp/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/libfi/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/libm/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/libmpath/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/instrumentation/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/arith/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/ir_tools/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/tools/cmake_install.cmake")
  INCLUDE("/home/jhj/compiler/build/src/libhugetlbfs/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

