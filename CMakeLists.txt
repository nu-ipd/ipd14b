cmake_minimum_required(VERSION 3.3)
project(ipd14b CXX)
include(.ipd/cmake/CMakeLists.txt)


add_cxx_program(data_members src/data_members.cxx)

add_cxx_test_program(member_functions_test
        test/member_functions_test.cxx
        src/member_functions.cxx)

add_cxx_test_program(constructors_test
        test/constructors_test.cxx
        src/constructors.cxx)

# Exercises:
add_cxx_program(ipd14b-1
        exercise/ipd14b-1-main.cxx
        exercise/ipd14b-1.cxx)

add_cxx_test_program(ipd14b-2
        exercise/ipd14b-2.cxx
        exercise/ipd14b-1.cxx)

add_cxx_test_program(ipd14b-3
        exercise/ipd14b-3.cxx)
