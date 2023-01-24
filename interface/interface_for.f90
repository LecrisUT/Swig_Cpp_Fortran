!! TODO: Fortran -> Cpp interface
!! This is a desired interface to be used for defining fortran exposed functions

module interface_for
    !! Using functions from Cpp -> Fortran interface. Ideally one should be able to re-use them back-and-forth
    use swig_fortran
    use iso_c_binding

    !! Interface to communicate back to Cpp
    interface
        !! Should not require/use bind(C) because some fortran functions are not compatible, e.g. class objects
        module subroutine for_func()
        end subroutine for_func
        module subroutine for_func_string(var)
            class(string), intent(in) :: var
        end subroutine for_func_string
    end interface
    !! Exposed classes should generate an equivalent class in interface_for::for_class that generates the object
    type for_class
        integer :: a
    contains
        procedure :: method => for_class_method
    end type for_class

    !! Fortran interface boilerplate
    interface for_class
        module function for_class_constr(a) result(this)
            integer, intent(in) :: a
            type(for_class)    :: this
        end function for_class_constr
    end interface for_class
    interface
        module subroutine for_class_method(this)
            class(for_class), intent(in) :: this
        end subroutine for_class_method
    end interface
end module interface_for