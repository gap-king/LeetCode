# src/solutions/graph/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB GRAPH_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(graph STATIC ${GRAPH_SOURCES})

# Include the directory for headers
target_include_directories(graph
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR},
        ${CMAKE_SOURCE_DIR}
)