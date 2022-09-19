cmake_minimum_required(VERSION 3.22)
project(WP5)

set(CMAKE_CXX_STANDARD 14)

add_executable(WP5 main.cpp MapGeneric.h MapGeneric.cpp MapTriple.h MapTriple.cpp MapSquare.h MapSquare.cpp MapAbsoluteValue.h MapAbsoluteValue.cpp FilterGeneric.h FilterGeneric.cpp FilterOdd.h FilterOdd.cpp FilterNonPositive.h FilterNonPositive.cpp FilterForTwoDigitPositive.h FilterForTwoDigitPositive.cpp ReduceGeneric.h ReduceGeneric.cpp ReduceMinimum.h ReduceMinimum.cpp ReduceGCD.h ReduceGCD.cpp)
