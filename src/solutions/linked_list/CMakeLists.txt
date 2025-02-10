# src/solutions/linked_list/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB LINKED_LIST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(linked_list STATIC ${LINKED_LIST_SOURCES})

# Include the directory for headers
target_include_directories(linked_list
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR},
        ${CMAKE_SOURCE_DIR}
)