# src/data_structuress/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB DATA_STRUCTURES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(data_structures STATIC ${DATA_STRUCTURES})

# Include the problems directory for headers
target_include_directories(data_structures
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR},
        ${CMAKE_SOURCE_DIR}

)