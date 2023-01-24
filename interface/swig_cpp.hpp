// TODO: Fortran -> Cpp interface
// This is the equivalent interface to be generated

#ifndef SWIG_PLAYGROUND_SWIG_CPP_HPP
#define SWIG_PLAYGROUND_SWIG_CPP_HPP

#include "cpp_int.h"

namespace interface_for {
	void for_func();
	void for_func_string( const Fortran::string& val );
	class for_class{
		int a;
		void method();
		for_class(int a);
	};
}
#endif //SWIG_PLAYGROUND_SWIG_CPP_HPP
