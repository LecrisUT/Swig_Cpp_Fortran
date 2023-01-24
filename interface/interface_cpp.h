#ifndef SWIG_PLAYGROUND_INTERFACE_CPP_H
#define SWIG_PLAYGROUND_INTERFACE_CPP_H

#include <string>

namespace Fortran{
	class string{
	public:
		// Generates get_raw_str(), but not set_raw_str()
		const std::string raw_str;
		// Generates a constructor
		explicit string( const std::string& val );
		// Additional helpers for CPP
		operator const std::string&();
		operator std::string() const;
	};
}

namespace test_swig {
	void cpp_func();
	void cpp_func_std_string( const std::string& var );
	void cpp_func_string( const Fortran::string& var );
}

#endif //SWIG_PLAYGROUND_INTERFACE_CPP_H
