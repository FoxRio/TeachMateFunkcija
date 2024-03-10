# CMakeLists.txt

cmake_minimum_required(VERSION 3.0)  # Minimum CMake version required

project(TeachMate)

# Add executable target
add_executable(${PROJECT_NAME} main.cpp teach_mate.cpp)

# Include directory containing teach_mate.h
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
