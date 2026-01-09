cmake_minimum_required(VERSION 3.10)
project(MathSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(NumberLibrary STATIC NumberLibrary.cpp NumberLibrary.h)
add_library(VectorLibrary SHARED VectorLibrary.cpp VectorLibrary.h)

target_link_libraries(VectorLibrary PUBLIC NumberLibrary)

add_executable(Test Test.cpp)
target_link_libraries(Test PRIVATE VectorLibrary)
