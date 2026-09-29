# Exercise 01 — sequence statistics conception

Curriculum placement: optional host-only C++ practice. This study is not a firmware design or the required first exercise of the embedded path. Streams, dynamic storage, and exceptions here must not be assumed suitable for a selected microcontroller target.

Status: proposed; reviewed locally; awaiting owner validation. No implementation exists. This document is the exercise work item and authoritative contract, together with its UML views.

## Need and prerequisites

A learner wants a command-line summary of finite decimal values. The exercise introduces a value type, const-reference parameters, deterministic computation, validation, and tests. Explain vectors, functions, structs, and basic exception propagation before implementation. Embedded error handling is studied separately against the selected target configuration.

Scope: whitespace-separated input through standard input until EOF; count, minimum, maximum, arithmetic mean. Exclude persistence, GUI, networking, concurrency, inheritance, and generic frameworks.

## Requirements

| ID | Contract |
| --- | --- |
| R1 | For a nonempty sequence of finite `double` values, return count, minimum, maximum, and mean. |
| R2 | Never mutate the caller's input. Process values in input order in O(n) time and O(1) auxiliary computation space. Parsing may store O(n) values. |
| R3 | Reject empty input and non-finite values with `std::invalid_argument`. |
| R4 | Accumulate in `double`. Before each addition, reject a mathematically out-of-range sum with `std::overflow_error`. Cancellation later in the sequence does not undo an earlier rejection. |
| R5 | Parse whitespace-delimited tokens using the classic C locale and consume each complete token. Reject malformed, out-of-range, or non-finite tokens with `std::invalid_argument`; input-stream failure other than normal EOF produces `std::runtime_error`. |
| R6 | On success print four lines, `count: N`, `minimum: X`, `maximum: Y`, `mean: Z`, in that order, with classic locale and `max_digits10` precision; return exit status 0. |
| R7 | For specified failures, print `error: ` followed by a nonempty diagnostic to stderr and return 1. Failures detected before output begins must not write statistics. Output-stream failure returns 1 and may leave partial output: bytes already accepted by the output device cannot be rolled back. Stderr reporting is best effort if the diagnostic stream also fails. |

Only finite numeric input is accepted. Negative and repeated values and signed zero are valid; no particular sign of zero is required in output. No input data is persisted.

## UC1 — obtain sequence statistics

Primary actor: Learner. Precondition: the CLI is running with readable stdin. Minimal guarantee: no input mutation, no partial statistics on validation failure. Success guarantee: R6 output and exit status 0.

1. The learner supplies numeric tokens and signals EOF.
2. The CLI calls `parse_values(input)`.
3. The CLI calls `compute_statistics(values)`.
4. The CLI formats the complete result, writes it, checks the stream state, and exits.

Extensions: step 2 rejects malformed/non-finite/out-of-range tokens or stream failures; step 3 rejects empty input, non-finite values supplied through direct API calls, or sum overflow; step 4 reports output failure. Specified errors follow R7. Exact diagnostic wording is deliberately not constrained.

## Exact C++ mapping

All named API declarations are in namespace `cpp_learning::statistics`.

| Element | Exact declaration or mapping |
| --- | --- |
| Value type | `struct Statistics` with public `std::size_t count; double minimum; double maximum; double mean;` |
| Computation | `Statistics compute_statistics(const std::vector<double>& values)` |
| Parsing | `std::vector<double> parse_values(std::istream& input)` |
| CLI boundary | `int run(std::istream& input, std::ostream& output, std::ostream& error)` |
| Entry point | Global `int main()` delegates to `run(std::cin, std::cout, std::cerr)` |

`Statistics` has value semantics and uses default special members. No owning raw pointers, inheritance, global mutable state, or `shared_ptr` are needed. Input references are borrowed only for the call and never retained. Parsing returns an owning vector by value. `run` owns its local vector and result and catches the specified standard exceptions. Allocation failures are outside the exercise's required recovery guarantees.

On successful computation, `count > 0`, extrema come from the supplied values, and `mean` is the finite accumulated sum divided by count under floating-point rounding. Public fields describe a computation result, not a general validated numeric abstraction.

## Computation algorithm

1. Reject an empty vector before accessing its first element.
2. Initialize sum to 0 and extrema from the first value.
3. For each value in input order: reject non-finite values; check addition against `std::numeric_limits<double>::max()` using the sign of the value; throw before an out-of-range addition; update sum and extrema.
4. Return `Statistics` with vector size, extrema, and sum divided by size converted to `double`.

The sum policy is intentionally simple and can reject sequences whose eventual mathematical mean is representable. Numerically stable summation is a later variation requiring a revised conception. Unit checks use `abs(actual - expected) <= 1e-12 * max(1, abs(expected))`; count and selected extrema are checked exactly.

## Planned implementation files

- `exercises/01-statistics/statistics.hpp`: `Statistics` and `compute_statistics` declarations.
- `exercises/01-statistics/statistics.cpp`: computation implementation; no stream or CLI dependency.
- `exercises/01-statistics/cli.hpp`: `parse_values` and `run` declarations.
- `exercises/01-statistics/cli.cpp`: parsing, orchestration, rendering, and error translation.
- `exercises/01-statistics/main.cpp`: stream wiring only.
- `tests/statistics_test.cpp`: computation contracts.
- `tests/statistics_cli_test.cpp`: parsing and CLI contracts using in-memory streams.
- Root `CMakeLists.txt`: C++20 computation and CLI libraries, executable, and CTest targets; no external dependencies.
- Root `.gitignore`: build artifacts and local tool files.

Tests must report failures independently of `assert` so checks remain active in release builds. Build flags and supported sanitizer configurations will be specified with the build proposal. CI changes require separate approval.

## UML views

- [Use case](../diagrams/01-statistics/01-use-case.md): actor and goal.
- [Sequence](../diagrams/01-statistics/02-sequence-compute.md): successful and failed computation paths.
- [Components](../diagrams/01-statistics/03-component.md): one-way source dependencies.
- [Class and artifacts](../diagrams/01-statistics/04-class.md): exact data shape and free-function contracts.

No state machine is required: no persistent entity changes state across requests. No deployment diagram is required for a single local process. UML source plus this contract specifies behavior; a separate data-flow diagram adds no necessary information for transient numeric input.

## Four-pass review

1. Requirements and traceability: R1–R7 map to UML and planned tests in the [matrix](../traceability-matrix.md); implementation remains pending.
2. Dependencies and SOLID: CLI depends on computation; computation has no stream dependency. Parsing, orchestration, and calculation have explicit responsibilities. No inheritance means no substitutability hierarchy to review.
3. KISS/YAGNI/DRY: one result struct, free functions, and borrowed standard streams suffice. No service or repository layers.
4. Pattern fit: no recurring variation or multiple infrastructure implementations justify a named design pattern. Stream parameters provide the test boundary directly.

Owner acceptance: pending. Before code, identify the accepted Git revision; any contract change reopens validation.
