# cmake_minimum_required(VERSION <specify CMake version here>)
project(project)
enable_testing()
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "-static")
add_subdirectory(./google_test)
set(LIBRARIES gtest pthread)

add_executable(untitled test.cpp)
add_executable(main main.cpp)

target_link_libraries(untitled ${LIBRARIES})
target_link_libraries(untitled gtest gtest_main)

target_include_directories(untitled PUBLIC ${PROJECT_SOURCE_DIR})

include(GoogleTest)

gtest_discover_tests(untitled)