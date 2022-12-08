cmake_minimum_required(VERSION 3.12)

project(
        lab
        VERSION 1.0
        DESCRIPTION "C++"
        LANGUAGES CXX
)


set(CMAKE_CXX_STANDARD 17)
add_subdirectory(mymath)


add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE mymath)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})


enable_testing()
add_subdirectory(tests)