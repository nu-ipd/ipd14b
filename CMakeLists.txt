cmake_minimum_required(VERSION 3.3)
project(ipd14b CXX)
include(.ipd/cmake/CMakeLists.txt)


# Builds program `data_members` from C++ source file
# `src/data_members.cxx`.
add_cxx_program(data_members src/data_members.cxx)

add_cxx_test_program(member_functions_test
        test/member_functions_test.cxx
        src/member_functions.cxx)
