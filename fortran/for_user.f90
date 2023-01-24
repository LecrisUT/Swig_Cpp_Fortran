program for_user
    use swig_fortran
    use iso_fortran_env

    character(len=30) :: var
    type(string) :: var2

    var = "Hello from Fortran!"
    var2 = string("This uses string object")

    write (error_unit, *) "Trying to run cpp commands from Fortran"
    call cpp_func()
    call cpp_func_std_string(var)
    call cpp_func_string(string(var))
    call cpp_func_std_string(var2%get_raw_str())
    call cpp_func_string(var2)
end program for_user