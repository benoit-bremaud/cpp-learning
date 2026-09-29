# Threshold indicator — accepted exercise conception

Status: approved by the owner (choice A); the reference implementation now exists locally. This document is the work item and authoritative contract for a host-only learning example.

## Learning scope

Illustrate the distinction between successful compilation and correct behavior using an exclusive temperature threshold. This is a guided example associated with TOOL-01, not evidence that a beginner already understands functions, integer types or Boolean returns. Independent implementation follows the applicable CPP-02, CPP-04, CPP-05, CPP-07 and UML-03 introductions.

## UC1 — Determine the requested indicator state

Primary actor: learner using a local host test runner. Input: an already available whole-degree Celsius temperature. Preconditions: the value is representable by C++ `int`. Success: obtain a Boolean decision without controlling hardware. Main flow: supply the temperature, compare it to the fixed threshold, observe the returned decision. No input parsing or sensor failure is modeled.

## Requirements

- R1: return true exactly when the temperature is strictly greater than 30 degrees Celsius.
- R2: return false when the temperature is less than or equal to 30, including exactly 30.
- R3: do not read hardware, print output, allocate dynamic storage or retain mutable state. Each call depends only on its argument.
- R4: accept every representable `int`; perform comparison only, without arithmetic that could overflow. Negative values are valid inputs. Decimal temperatures, absent/invalid measurements and sensor accuracy are outside this deliberately simplified contract.

The result describes whether an indicator should be on; it neither powers a LED nor promises a real device is on. This is a teaching policy, not a safety controller specification.

## Proposed C++ contract and files

Host language baseline: C++17, sufficient for this exercise. Proposed signature: `bool should_light_indicator(int temperature_celsius) noexcept` in namespace `learning`. Threshold: local named constant `threshold_celsius`, type `const int`, value 30. The definition explicitly uses if/else with a return in each branch to mirror the activity for this first reading.

Planned under `exercises/threshold-indicator/`:

- `include/threshold_indicator.hpp`: documented declaration.
- `src/threshold_indicator.cpp`: pure decision and named threshold.
- `tests/threshold_indicator_test.cpp`: automated comparisons and process exit status.
- `CMakeLists.txt`: independent host build with CTest; no board SDK or network dependency.
- `README.md`: cloning, build/test instructions and links to this conception.

No production `main`, command-line parser, class hierarchy, driver abstraction or design pattern is needed. The test runner's main is infrastructure; it supplies inputs and reports pass/fail, without changing the modeled decision.

## UML and exact mapping

[Activity view](../diagrams/threshold-indicator/01-activity-decision.md).

| Model element | Proposed code | Verification |
| --- | --- | --- |
| Activity input `temperature_celsius` | `int` parameter of `learning::should_light_indicator` | All test inputs passed by value |
| Establish `threshold_celsius = 30` | Local `const int` initialized to 30 | Boundary tests distinguish threshold changes |
| Decision `temperature_celsius > threshold_celsius` | The if condition with strict `>` | 29, 30, 31 cases |
| Guard true / return true | True branch returns `true` | 31 and maximum int |
| Guard false / return false | Else branch returns `false` | 29, 30, zero, negative, minimum int |
| Activity termination | Function returns Boolean to caller | One result per call |

The two guards are complementary and cover all accepted inputs. No class or sequence view adds useful information to this single pure function. An activity is not a state machine: there is no remembered previous indicator state.

## Acceptance cases

| Input | Expected result | Reason |
| --- | --- | --- |
| 29 | false | Immediately below threshold |
| 30 | false | Exact threshold must remain off |
| 31 | true | Immediately above threshold |
| 0 | false | Ordinary non-triggering value |
| -10 | false | Negative temperatures accepted |
| Minimum representable int | false | Lower input boundary |
| Maximum representable int | true | Upper input boundary |

Also call with 31, then 29, then 31: expect true, false, true, demonstrating that earlier calls do not latch the result. Tests must report failures and return nonzero even in release builds; do not rely solely on assertions disabled by NDEBUG. A deliberate `>=` mutation must fail the 30-degree case. Verification results are recorded in the implementation validation section below.

## Four-pass conception review

1. Requirements and traceability: strict/inclusive boundary, full input domain and every modeled branch are mapped to acceptance cases. Actual GPIO and missing measurements are explicitly excluded.
2. Responsibilities and dependencies: one pure decision; test infrastructure calls it, and it imports no hardware or IO. No inheritance, substitutability or interface-segregation mechanism is needed.
3. KISS/YAGNI/DRY: one function and a named threshold; no configurable policy, persistent state or reusable framework.
4. Pattern fit: no present force justifies Strategy, State, Observer or another pattern. Testability comes directly from the pure input/output contract.

Owner validation was obtained before source and test implementation. Future changes to the threshold policy or domain require updating this study and its tests together.

## Implementation validation

GCC 13.3.0, CMake 3.28.3: Debug and Release builds pass with warnings treated as errors. CTest passes the ten decisions in both configurations. An isolated source copy changing only `>` to `>=` compiles with optimization and NDEBUG, then fails exactly at temperature 30 with exit status 1. The repository implementation remains the approved strict comparison.

Model/code inspection confirms the signature, local constant, strict decision, explicit returns and absence of production IO, mutable state or allocation. No hardware behavior has been tested.
