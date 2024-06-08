cmake_minimum_required(VERSION 3.28)
project(rubiks_cube_solver)

set(CMAKE_CXX_STANDARD 17)

add_executable(rubiks_cube_solver main.cpp
        GenericRubiksCube.cpp
        GenericRubiksCube.h
        RubiksCube3dArray.cpp)
