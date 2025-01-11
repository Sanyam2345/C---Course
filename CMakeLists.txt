cmake_minimum_required(VERSION 3.10)
project(CPP_Course)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find all 'main.cpp' files recursively
file(GLOB_RECURSE MAIN_CPP_FILES RELATIVE ${CMAKE_SOURCE_DIR} */main.cpp)

# Loop through all 'main.cpp' files and create an executable for each
foreach(MAIN_CPP_FILE ${MAIN_CPP_FILES})
    # Extract the file name (e.g., main.cpp -> main)
    get_filename_component(EXECUTABLE_NAME ${MAIN_CPP_FILE} NAME_WE)

    # Create an executable using the file name
    add_executable(${EXECUTABLE_NAME} ${MAIN_CPP_FILE})
endforeach()
