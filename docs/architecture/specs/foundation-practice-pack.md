# Foundation practice pack conception

Status: approved in principle by the owner; detailed conception reviewed locally and awaiting owner validation before implementation.

## Need and learning boundary

The introductory course already teaches complete programs, output, integer initialization, expressions, Boolean comparisons, and a first `if`. The practice repository currently offers no small runnable path through those prerequisites. This pack provides three independent host-only laboratories that the learner can build, run, modify, and revisit in an IDE.

The pack deliberately stops before functions, input parsing, loops, and hardware. Each program uses values written in its source so that practice does not silently introduce a second learning objective. The laboratories use C++17, CMake, CTest, and the standard console only.

## Shared requirements

| ID | Contract |
| --- | --- |
| FP-R1 | Each laboratory is an independently configurable and buildable CMake project under its own `exercises/` directory. |
| FP-R2 | Each `main` returns status 0 on its specified path and writes exactly the specified text to standard output, with no standard-error output. |
| FP-R3 | Each laboratory provides an exact-output CTest check that remains active in Debug and Release builds. |
| FP-R4 | Each README states the prerequisite course pages, need, expected observation, build/test commands, source-editing variations, and scope limits. |
| FP-R5 | Each teaching behavior has one authoritative UML activity whose actions, decisions, names, and expected outcomes map to the proposed C++ source. |
| FP-R6 | The exercises do not introduce input parsing, functions other than `main`, loops, classes, inheritance, dynamic allocation, exceptions, hardware APIs, or a reusable exercise framework. |

Small CMake test scripts may be duplicated between laboratories to preserve their independence. This duplication is infrastructure text rather than duplicated domain knowledge; no shared build abstraction is introduced in this first pack.

## Laboratory 02 — first output

Directory: `exercises/02-first-output`.

### Contract

| ID | Contract |
| --- | --- |
| FO-R1 | Write `Course ready` followed by a newline. |
| FO-R2 | Then write `First program complete` followed by a newline. |
| FO-R3 | Return status 0 after both writes. |

Exact standard output:

```text
Course ready
First program complete
```

The activity is linear. It does not model preprocessing or compilation as runtime actions. The learner variations change one message, exchange the two writes, and remove then restore one newline. The reference test continues to describe the accepted baseline; learners perform variations on their own Git branch and restore the reference before rerunning the baseline test.

Proposed source mapping:

| Activity action | C++ mapping |
| --- | --- |
| Write the readiness line | `std::cout << "Course ready\n";` |
| Write the completion line | `std::cout << "First program complete\n";` |
| Finish successfully | `return 0;` |

Authoritative activity: [first output](../diagrams/foundation-practice-pack/01-activity-first-output.md).

## Laboratory 03 — workshop total

Directory: `exercises/03-workshop-total`.

### Contract

| ID | Contract |
| --- | --- |
| WT-R1 | Initialize `left_tray_count` to 2 and `right_tray_count` to 3. |
| WT-R2 | Initialize `component_count` from the addition of the two named values. The operand variables remain unchanged. |
| WT-R3 | Write `Workshop total`, a newline, the value 5, and a final newline, then return status 0. |

Exact standard output:

```text
Workshop total
5
```

The activity distinguishes initialization, calculation, result storage, and output. This is a reasoning model; it does not prescribe processor instructions or an evaluation order between two side-effect-free integer reads.

The learner variations change one tray count and predict the total, make one tray empty, and replace the addition with a literal 5 before explaining what information was lost. The accepted reference keeps the named expression.

Proposed source mapping:

| Activity action | C++ mapping |
| --- | --- |
| Establish the two tray counts | Two `int` initializations with 2 and 3 |
| Calculate and store the total | `int component_count = left_tray_count + right_tray_count;` |
| Write the label and result | Two `std::cout` statements |
| Finish successfully | `return 0;` |

Authoritative activity: [workshop total](../diagrams/foundation-practice-pack/02-activity-workshop-total.md).

## Laboratory 04 — target check

Directory: `exercises/04-target-check`.

### Contract

| ID | Contract |
| --- | --- |
| TC-R1 | Establish `measurement_target` as a constant integer with value 3 and `measurement_count` as an integer with baseline value 3. |
| TC-R2 | Initialize `target_matched` once from exact equality between the count and target. |
| TC-R3 | When `target_matched` is true, write `Target matched` followed by a newline. When false, omit that line. |
| TC-R4 | In both cases, then write `Check finished` followed by a newline and return status 0. |

Baseline standard output for count 3:

```text
Target matched
Check finished
```

Variation output for count 2 or 4:

```text
Check finished
```

The learner predicts both variations before rebuilding. Each edit creates a new independent execution; the program does not read changing measurements, wait, or repeat. `target_matched` is a stored answer and does not recompute itself.

Proposed source mapping:

| Activity action | C++ mapping |
| --- | --- |
| Establish target and count | `const int measurement_target = 3;` and `int measurement_count = 3;` |
| Calculate exact match | `bool target_matched = measurement_count == measurement_target;` |
| Select the optional write | `if (target_matched) { ... }` |
| Write the common completion line | `std::cout << "Check finished\n";` after the block |
| Finish successfully | `return 0;` |

Authoritative activity: [target check](../diagrams/foundation-practice-pack/03-activity-target-check.md).

## Planned files

Each laboratory will contain:

- `README.md`: learner-facing instructions and variations.
- `CMakeLists.txt`: one executable, C++17 selection, warnings, CTest registration.
- `src/main.cpp`: the accepted reference behavior.
- `tests/expected-output.txt`: byte-for-byte baseline output.
- `tests/check-output.cmake`: execute the built program and compare status, stdout, and stderr.

The exact-output script is local to each laboratory. It may accept only the built executable and expected-output path; it is not a general test framework. No root build file is required for this pack.

## Verification plan

- Configure, build, and test each laboratory independently in Debug and Release.
- Compile with GCC warnings enabled and treat warnings as errors for the repository reference.
- Verify exact stdout, empty stderr, and exit status 0.
- Inspect that the three source files preserve the accepted identifiers and action order.
- Render each PlantUML source and verify that committed SVG snapshots match their sources.
- Confirm that each README describes variations without claiming the baseline test validates a modified learner experiment.

These checks establish source/design consistency and observable behavior. They do not demonstrate learner comprehension; the prediction and explanation prompts provide practice evidence without automated scoring.

## Four-pass review

1. **Requirements and traceability:** FP-R1–FP-R6 apply to all three laboratories; FO-R1–FO-R3, WT-R1–WT-R3, and TC-R1–TC-R4 map to activities, planned source statements, and exact-output checks in the traceability matrix.
2. **Dependencies and SOLID:** every program is a flat console boundary with no domain/infrastructure split to introduce. Each `main` owns one small scenario. Build/test tooling observes the executable without entering production code.
3. **KISS/YAGNI/DRY:** three independent projects satisfy revisiting and cloning requirements. No root orchestrator, starter/solution duplication, input layer, shared CMake framework, or exercise engine is justified. Small test-script duplication preserves module autonomy.
4. **Pattern fit:** no present variation, substitutable implementation, complex construction, persistent state, or infrastructure seam justifies a design pattern. Adding Strategy, Factory, Repository, classes, or dependency injection would be a Golden Hammer.

## Explicit exclusions and next gate

This conception does not implement code, publish links, add CI, or change the course website. The statistics exercise remains separate and optional. A guarded-update practice laboratory is deferred until functions or another honest multi-case test seam has been taught.

Implementation begins only after the owner validates this detailed conception. If implementation requires different identifiers, output, dependencies, or learner behavior, revise and revalidate this document first.
