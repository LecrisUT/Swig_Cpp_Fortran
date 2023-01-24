#include "swig_cpp.hpp"
#include <string>
#include <iostream>

using namespace interface_for;

int main(){
	std::string test_string = "Hello from cpp!";
	std::cerr << "Trying to run Fortran commands from cpp" << std::endl;
	for_func();
	for_func_string(Fortran::string(test_string));
	return 0;
}