cmake_minimum_required(VERSION 3.16)

project(RollForge)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    RollForge
    src/main.cpp
    src/DiceEngine.cpp
    src/Random.cpp
)

target_include_directories(RollForge PRIVATE include)