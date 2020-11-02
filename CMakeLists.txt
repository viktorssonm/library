cmake_minimum_required(VERSION 3.0.0)
project(Library VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(CTest)
enable_testing()
include_directories(${CMAKE_SOURCE_DIR}/src)
add_executable(Library src/main.cpp src/book.h src/book.cpp src/patron.h src/patron.cpp src/library.h src/library.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
