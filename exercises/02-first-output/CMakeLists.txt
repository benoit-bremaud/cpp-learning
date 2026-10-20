cmake_minimum_required(VERSION 3.20)

project(first_output LANGUAGES CXX)

add_executable(first_output src/main.cpp)
target_compile_features(first_output PRIVATE cxx_std_17)
set_target_properties(first_output PROPERTIES CXX_EXTENSIONS OFF)

if(MSVC)
    target_compile_options(first_output PRIVATE /W4 /WX)
else()
    target_compile_options(first_output PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()

include(CTest)

if(BUILD_TESTING)
    add_test(
        NAME first_output_contract
        COMMAND
            ${CMAKE_COMMAND}
            -DPROGRAM=$<TARGET_FILE:first_output>
            -DEXPECTED_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/expected-output.txt
            -P ${CMAKE_CURRENT_SOURCE_DIR}/tests/check-output.cmake
    )
endif()
