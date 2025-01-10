# src/solutions/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB ARRAY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(array STATIC ${ARRAY_SOURCES})

# Include the directory for headers
target_include_directories(array
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)