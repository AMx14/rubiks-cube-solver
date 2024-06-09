cmake_minimum_required(VERSION 3.28)
project(rubiks_cube_solver)

set(CMAKE_CXX_STANDARD 17)

add_executable(rubiks_cube_solver main.cpp
        Model/GenericRubiksCube.cpp
        Model/GenericRubiksCube.h
        Model/RubiksCube3dArray.cpp
        Model/RubiksCube1dArray.cpp
        Model/RubiksCubeBitboard.cpp
        Solvers/DFSSolver.h
        Solvers/BFSSolver.h
        Solvers/IDDFSSolver.h
        Solvers/IDAstarSolver.h
        Model/PatternDatabase/PatternDatabase.h
        PatternDatabases/CornerDBMaker.cpp
        PatternDatabases/CornerDBMaker.h
        PatternDatabases/math.h
        PatternDatabases/math.cpp
        PatternDatabases/PermutationIndexer.h)
