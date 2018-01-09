# Install script for directory: /home/tapgar/eigen/unsupported/Eigen

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE FILE FILES
    "/home/tapgar/eigen/unsupported/Eigen/AdolcForward"
    "/home/tapgar/eigen/unsupported/Eigen/AlignedVector3"
    "/home/tapgar/eigen/unsupported/Eigen/ArpackSupport"
    "/home/tapgar/eigen/unsupported/Eigen/AutoDiff"
    "/home/tapgar/eigen/unsupported/Eigen/BVH"
    "/home/tapgar/eigen/unsupported/Eigen/EulerAngles"
    "/home/tapgar/eigen/unsupported/Eigen/FFT"
    "/home/tapgar/eigen/unsupported/Eigen/IterativeSolvers"
    "/home/tapgar/eigen/unsupported/Eigen/KroneckerProduct"
    "/home/tapgar/eigen/unsupported/Eigen/LevenbergMarquardt"
    "/home/tapgar/eigen/unsupported/Eigen/MatrixFunctions"
    "/home/tapgar/eigen/unsupported/Eigen/MoreVectorization"
    "/home/tapgar/eigen/unsupported/Eigen/MPRealSupport"
    "/home/tapgar/eigen/unsupported/Eigen/NonLinearOptimization"
    "/home/tapgar/eigen/unsupported/Eigen/NumericalDiff"
    "/home/tapgar/eigen/unsupported/Eigen/OpenGLSupport"
    "/home/tapgar/eigen/unsupported/Eigen/Polynomials"
    "/home/tapgar/eigen/unsupported/Eigen/Skyline"
    "/home/tapgar/eigen/unsupported/Eigen/SparseExtra"
    "/home/tapgar/eigen/unsupported/Eigen/SpecialFunctions"
    "/home/tapgar/eigen/unsupported/Eigen/Splines"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE DIRECTORY FILES "/home/tapgar/eigen/unsupported/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/tapgar/eigen/build/unsupported/Eigen/CXX11/cmake_install.cmake")

endif()

