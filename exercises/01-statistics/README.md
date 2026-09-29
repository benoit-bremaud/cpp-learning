# Exercise 01: sequence statistics

Status: specification and implementation proposal; awaiting approval before code.

## Need

Compute statistics for a sequence of finite decimal values while practicing functions, const references, standard containers, and explicit error handling.

## Contract and acceptance criteria

- For one or more valid values, compute count, minimum, maximum, and arithmetic mean.
- Reject empty input, malformed tokens, and non-finite values with an understandable error and nonzero CLI exit status.
- The input sequence remains unchanged.
- If an intermediate sum is not representable in the chosen accumulator type, report an error; sophisticated numerically stable summation is outside this first exercise.
- For `2, 4, 6`, return count 3, minimum 2, maximum 6, mean 4.
- For `-3, -1`, return count 2, minimum -3, maximum -1, mean -2.
- For a singleton, minimum, maximum, and mean equal that value.
- Tests must also cover repeated values, zero, empty input, malformed tokens, non-finite input, and overflow handling. Compare floating-point results using a documented tolerance.

## Proposed implementation files

- Root `CMakeLists.txt`: C++20, one computation library, one CLI executable, and CTest integration.
- `exercises/01-statistics/statistics.hpp`: result type and public function contract.
- `exercises/01-statistics/statistics.cpp`: pure computation and validation.
- `exercises/01-statistics/main.cpp`: whitespace-separated terminal input and human-readable output.
- `tests/statistics_test.cpp`: meaningful computation tests with explicit failure reporting that remains active in release builds.
- `tests/statistics_cli_test.cmake`: CLI checks for valid input and parse failures.
- Root `.gitignore`: build outputs and local tooling files.

Use only the standard library initially. CTest will run the tests; a third-party testing framework can be introduced when its reporting or fixture support solves a demonstrated need. Warnings and supported sanitizer configurations will be validated locally. Any CI workflow is a separate approval item.

## Design review

Requirements: each behavior above has an associated test case. Dependency direction: the CLI calls pure computation; computation has no dependency on terminal or file I/O. Simplicity: a result struct and a function suffice; no inheritance or design pattern is warranted. No UML view is necessary to resolve this exercise's small, one-way dependency structure.

## Learning checkpoints

Explain why the sequence is passed by const reference, why mean uses floating-point arithmetic, why input validation belongs at defined boundaries, and how a failing test reveals a defect. Implement your first attempt before requesting a complete solution.
