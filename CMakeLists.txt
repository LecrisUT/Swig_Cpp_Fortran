cmake_minimum_required(VERSION 3.24)
project(Swig_Playground
		LANGUAGES CXX Fortran)

set(CMAKE_CXX_STANDARD 17)

if (NOT CMAKE_SWIG_OUTDIR)
	set(CMAKE_SWIG_OUTDIR ${CMAKE_CURRENT_BINARY_DIR}/swig)
endif()
if (NOT CMAKE_Fortran_MODULE_DIRECTORY)
	set(CMAKE_Fortran_MODULE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/fortran_mods)
endif()
include_directories(${CMAKE_Fortran_MODULE_DIRECTORY})

find_package(SWIG REQUIRED COMPONENTS fortran)
include(UseSWIG)

# TODO: Fortran -> Cpp interface
#add_executable(cpp_user)
#add_library(swig_interface_for STATIC)

# Cpp -> Fortran interface
add_executable(for_user)
add_library(swig_interface_cpp STATIC)

add_subdirectory(interface)
add_subdirectory(cpp)
add_subdirectory(fortran)
