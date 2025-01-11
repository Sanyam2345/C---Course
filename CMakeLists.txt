cmake_minimum_required(VERSION 3.10)
project(CPP_Course)

set(CMAKE_CXX_STANDARD 17)

# Include all source files
file(GLOB_RECURSE SOURCES
    "Section 4/*.cpp"
    "Section 6/*.cpp"
    "Section 7/*.cpp"
    "Section 8/*.cpp"
    "Section 9/*.cpp"
    "Section 10/*.cpp"
    "Section 11/*.cpp"
    "Section 12/*.cpp"
    "Section 13/*.cpp"
)

# Create one executable
add_executable(CPP_Course ${SOURCES})
