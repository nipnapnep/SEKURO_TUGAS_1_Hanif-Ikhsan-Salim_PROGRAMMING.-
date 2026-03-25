cmake_minimum_required(VERSION 3.10)
project(robot)

# Mengatur agar file hasil build (.exe) masuk ke dalam folder bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Menambahkan semua file .cpp dari dalam folder src untuk di-compile
add_executable(program_robot 
    src/main.cpp 
    src/robot.cpp 
    src/robotair.cpp
)

# Memberitahu CMake untuk mencari file header (.hpp) di dalam folder src
target_include_directories(program_robot PRIVATE src)