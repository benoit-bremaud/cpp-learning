cmake_minimum_required(VERSION 3.20)

project(workshop_total LANGUAGES CXX)

add_executable(workshop_total src/main.cpp)
target_compile_features(workshop_total PRIVATE cxx_std_17)

if(MSVC)
    target_compile_options(workshop_total PRIVATE /W4 /WX)
else()
    target_compile_options(workshop_total PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()

include(CTest)

if(BUILD_TESTING)
    add_test(
        NAME workshop_total_contract
        COMMAND
            ${CMAKE_COMMAND}
            -DPROGRAM=$<TARGET_FILE:workshop_total>
            -DEXPECTED_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/expected-output.txt
            -P ${CMAKE_CURRENT_SOURCE_DIR}/tests/check-output.cmake
    )
endif()
