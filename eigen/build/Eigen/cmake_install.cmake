# Install script for directory: /home/tapgar/eigen/Eigen

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE FILE FILES
    "/home/tapgar/eigen/Eigen/QtAlignedMalloc"
    "/home/tapgar/eigen/Eigen/SVD"
    "/home/tapgar/eigen/Eigen/UmfPackSupport"
    "/home/tapgar/eigen/Eigen/Householder"
    "/home/tapgar/eigen/Eigen/SuperLUSupport"
    "/home/tapgar/eigen/Eigen/Eigenvalues"
    "/home/tapgar/eigen/Eigen/OrderingMethods"
    "/home/tapgar/eigen/Eigen/PardisoSupport"
    "/home/tapgar/eigen/Eigen/SparseCholesky"
    "/home/tapgar/eigen/Eigen/Core"
    "/home/tapgar/eigen/Eigen/CholmodSupport"
    "/home/tapgar/eigen/Eigen/IterativeLinearSolvers"
    "/home/tapgar/eigen/Eigen/SPQRSupport"
    "/home/tapgar/eigen/Eigen/StdDeque"
    "/home/tapgar/eigen/Eigen/SparseLU"
    "/home/tapgar/eigen/Eigen/StdVector"
    "/home/tapgar/eigen/Eigen/Jacobi"
    "/home/tapgar/eigen/Eigen/StdList"
    "/home/tapgar/eigen/Eigen/LU"
    "/home/tapgar/eigen/Eigen/SparseCore"
    "/home/tapgar/eigen/Eigen/Cholesky"
    "/home/tapgar/eigen/Eigen/Geometry"
    "/home/tapgar/eigen/Eigen/MetisSupport"
    "/home/tapgar/eigen/Eigen/PaStiXSupport"
    "/home/tapgar/eigen/Eigen/Sparse"
    "/home/tapgar/eigen/Eigen/Eigen"
    "/home/tapgar/eigen/Eigen/SparseQR"
    "/home/tapgar/eigen/Eigen/Dense"
    "/home/tapgar/eigen/Eigen/QR"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE DIRECTORY FILES "/home/tapgar/eigen/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

