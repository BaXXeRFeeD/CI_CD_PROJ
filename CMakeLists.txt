cmake_minimum_required(VERSION 3.12)

project(
        lab
        VERSION 1.0
        DESCRIPTION "C++"
        LANGUAGES CXX
)


set(CMAKE_CXX_STANDARD 17)

add_subdirectory(mymath)

enable_testing()
add_subdirectory(tests)