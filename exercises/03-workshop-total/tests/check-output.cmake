if(NOT DEFINED PROGRAM OR NOT DEFINED EXPECTED_FILE)
    message(FATAL_ERROR "PROGRAM and EXPECTED_FILE are required")
endif()

execute_process(
    COMMAND "${PROGRAM}"
    RESULT_VARIABLE program_status
    OUTPUT_VARIABLE actual_output
    ERROR_VARIABLE actual_error
)

file(READ "${EXPECTED_FILE}" expected_output)

if(NOT program_status EQUAL 0)
    message(FATAL_ERROR "Program returned status ${program_status}")
endif()

if(NOT actual_error STREQUAL "")
    message(FATAL_ERROR "Expected empty stderr, received: ${actual_error}")
endif()

if(NOT actual_output STREQUAL expected_output)
    message(FATAL_ERROR
        "Unexpected stdout.\nExpected:\n${expected_output}\nActual:\n${actual_output}"
    )
endif()
