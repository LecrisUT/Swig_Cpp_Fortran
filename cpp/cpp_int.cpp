//
// Created by lecris on 23/01/20.
//

#include "cpp_int.h"

#include <iostream>

void test_swig::cpp_func() {
	std::cerr << "Running cpp_to_for." << std::endl;
}
void test_swig::cpp_func_std_string( const std::string& var ) {
	std::cerr << "Running cpp_func_std_string with var=\'" << var << "\'" << std::endl;
}
void test_swig::cpp_func_string( const Fortran::string& var ) {
	std::cerr << "Running cpp_func_string with var=\'" << var << "\'" << std::endl;
}

Fortran::string::string(const std::string& val): raw_str(val){

}
Fortran::string::operator const std::string&() {
	return raw_str;
}
Fortran::string::operator std::string() const {
	return raw_str;
}
std::ostream& Fortran::operator<<( std::ostream& os, const Fortran::string& obj ) {
	return os << obj.raw_str;
}
