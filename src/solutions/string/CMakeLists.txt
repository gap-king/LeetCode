# src/solutions/string/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB STRING_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(string STATIC ${STRING_SOURCES})

# Include the directory for headers
target_include_directories(string
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR},
        ${CMAKE_SOURCE_DIR}
)