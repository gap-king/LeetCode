# src/interview_bank/CMakeLists.txt

# Collect all .cpp files in current directory
file(GLOB INTERVIEW_BANK_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add a library target for problem solutions
add_library(interview_bank STATIC ${INTERVIEW_BANK_SOURCES})

# Include the directory for headers
target_include_directories(interview_bank
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR},
        ${CMAKE_SOURCE_DIR}
)