# src/solutions/knapsack/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB KNAPSACK_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(knapsack STATIC ${KNAPSACK_SOURCES})

# Include the directory for headers
target_include_directories(knapsack
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR},
        ${CMAKE_SOURCE_DIR}
)