# src/math_problem/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB MATH_PROBLEM_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(math_problem STATIC ${MATH_PROBLEM_SOURCES})

# Include the problems directory for headers
target_include_directories(math_problem
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)