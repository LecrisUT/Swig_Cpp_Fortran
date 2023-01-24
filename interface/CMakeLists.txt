# TODO: Fortran -> Cpp interface
#set_property(SOURCE cpp.i PROPERTY FORTRAN ON)
#swig_add_library(swig_cpp
#		TYPE STATIC
#		LANGUAGE CXX
#		SOURCES cpp.i)
#target_link_libraries(swig_cpp PRIVATE swig_interface_for)
#target_sources(swig_interface_for PRIVATE interface_for.f90)

# CPP -> Fortran interface
set_property(SOURCE fortran.i PROPERTY CPLUSPLUS ON)
swig_add_library(swig_fortran
		TYPE STATIC
		LANGUAGE Fortran
		SOURCES fortran.i)
target_link_libraries(swig_fortran PRIVATE swig_interface_cpp)
target_include_directories(swig_fortran PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(swig_interface_cpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
