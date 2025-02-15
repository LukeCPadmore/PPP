cmake_minimum_required(VERSION 3.30)
project(PPP)

set(CMAKE_CXX_STANDARD 23)

add_executable(HelloWorld Chapter3/Sieve.cpp
        Chapter3/QuadraticSolver.cpp)
