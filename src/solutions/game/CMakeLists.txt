# src/game/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB GAME_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(game STATIC ${GAME_SOURCES})

# Include the problems directory for headers
target_include_directories(game
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR},
        ${CMAKE_SOURCE_DIR}
)