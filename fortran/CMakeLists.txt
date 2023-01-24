# TODO: Fortran -> Cpp interface
#target_sources(swig_interface_for PRIVATE for_int_h.f90 for_int.f90)
#target_link_libraries(swig_interface_for PRIVATE swig_fortran)

# CPP -> Fortran interface
target_sources(for_user PRIVATE
		for_user.f90)
target_link_libraries(for_user PRIVATE swig_fortran)
