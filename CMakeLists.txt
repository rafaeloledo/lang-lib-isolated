cmake_minimum_required(VERSION 3.22.1)

project(Teste VERSION 1.0.0)

configure_file(teste.hpp.in teste.hpp)
add_executable(Teste teste.cxx)

target_include_directories(Teste PUBLIC 
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/lib/mymath"
    )

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib/mymath)