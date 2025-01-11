cmake_minimum_required(VERSION 3.10)
project(CPP_Course)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add all sections with their respective files
# Adjust folder names and file extensions as necessary
file(GLOB_RECURSE SECTION4 "Section 4/*.cpp")
file(GLOB_RECURSE SECTION6 "Section 6/*.cpp")
file(GLOB_RECURSE SECTION7 "Section 7/*.cpp")
file(GLOB_RECURSE SECTION8 "Section 8/*.cpp")
file(GLOB_RECURSE SECTION9 "Section 9/*.cpp")
file(GLOB_RECURSE SECTION10 "Section 10/*.cpp")
file(GLOB_RECURSE SECTION11 "Section 11/*.cpp")
file(GLOB_RECURSE SECTION12 "Section 12/*.cpp")
file(GLOB_RECURSE SECTION13 "Section 13/*.cpp")

# Combine all source files into one list
set(SOURCES
    ${SECTION4}
    ${SECTION6}
    ${SECTION7}
    ${SECTION8}
    ${SECTION9}
    ${SECTION10}
    ${SECTION11}
    ${SECTION12}
    ${SECTION13}
)

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

