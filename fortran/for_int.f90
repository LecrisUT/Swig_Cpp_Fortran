submodule (interface_for) interface_for_impl
    use iso_fortran_env
contains
    module procedure for_func
        write (error_unit, *) "Running for_to_cpp"
    end procedure for_func
    module procedure for_func_string
        write (error_unit, *) "Running for_to_cpp_string with var = '", var%get_raw_str(), "'"
    end procedure for_func_string
    module procedure for_class_method
        write (error_unit, *) "Running for_class.method with a = '", this%a, "'"
    end procedure for_class_method
    module procedure for_class_constr
        this%a = a
    end procedure for_class_constr
end submodule interface_for_impl