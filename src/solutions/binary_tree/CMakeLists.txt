# src/solutions/binary_tree/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB BINARY_TREE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(binary_tree STATIC ${BINARY_TREE_SOURCES})

# Include the directory for headers
target_include_directories(binary_tree
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR},
        ${CMAKE_SOURCE_DIR}
)