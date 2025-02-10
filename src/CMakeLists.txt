# src/CMakeLists.txt

# Add executable target for the main program
add_executable(LeetCode)

# Add source files for the executable target
target_sources(LeetCode
    PRIVATE
        SolutionManager.cpp
        main.cpp
)

# Include directories for all headers
target_include_directories(LeetCode
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

# Add problem-specific subdirectory
add_subdirectory(data_structures)
add_subdirectory(solutions)

# Link problem libraries to the main executable
target_link_libraries(LeetCode PRIVATE data_structures math_problem array string game dynamic_programming binary_tree graph knapsack linked_list)
