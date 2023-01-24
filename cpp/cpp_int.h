//
// Created by lecris on 23/01/20.
//

#ifndef SWIG_PLAYGROUND_CPP_INT_H
#define SWIG_PLAYGROUND_CPP_INT_H

#include "interface_cpp.h"

namespace Fortran {
	// Add additional interface helpers
	std::ostream& operator<<(std::ostream& os, const string& obj);
}

#endif //SWIG_PLAYGROUND_CPP_INT_H
