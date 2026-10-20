cmake_minimum_required(VERSION 3.20)

project(target_check LANGUAGES CXX)

add_executable(target_check src/main.cpp)
target_compile_features(target_check PRIVATE cxx_std_17)

if(MSVC)
    target_compile_options(target_check PRIVATE /W4 /WX)
else()
    target_compile_options(target_check PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()

include(CTest)

if(BUILD_TESTING)
    add_test(
        NAME target_check_contract
        COMMAND
            ${CMAKE_COMMAND}
            -DPROGRAM=$<TARGET_FILE:target_check>
            -DEXPECTED_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/expected-output.txt
            -P ${CMAKE_CURRENT_SOURCE_DIR}/tests/check-output.cmake
    )
endif()
