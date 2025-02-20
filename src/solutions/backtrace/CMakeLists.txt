# src/solutions/backtrace/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB BACK_TRACE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(backtrace STATIC ${BACK_TRACE_SOURCES})

# Include the directory for headers
target_include_directories(backtrace
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR},
        ${CMAKE_SOURCE_DIR}
)