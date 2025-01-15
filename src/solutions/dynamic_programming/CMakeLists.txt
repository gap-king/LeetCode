# src/dynamic_programming/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB DYNAMIC_PROGRAMMING_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(dynamic_programming STATIC ${DYNAMIC_PROGRAMMING_SOURCES})

# Include the problems directory for headers
target_include_directories(dynamic_programming
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR},
        ${CMAKE_SOURCE_DIR}

)