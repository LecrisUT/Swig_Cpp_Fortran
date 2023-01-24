# TODO: Fortran -> Cpp interface
#target_sources(cpp_user PRIVATE
#		cpp_user.cpp)
#target_link_libraries(cpp_user PRIVATE swig_interface_for)

# CPP -> Fortran interface
target_sources(swig_interface_cpp PRIVATE cpp_int.cpp)
target_include_directories(swig_interface_cpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
