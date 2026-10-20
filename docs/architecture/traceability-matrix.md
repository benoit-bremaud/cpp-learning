# Conception traceability

Status: planned code and tests, not implemented unless a row explicitly names an existing reference. This matrix covers the optional host-only statistics exercise and the proposed foundation practice pack. Embedded exercise studies will add separate, target-specific entries before implementation.

| Requirement | UML realization | Planned code | Planned tests |
| --- | --- | --- | --- |
| R1: statistics | Sequence: compute call; class: Statistics | `statistics.cpp::compute_statistics` | `statistics_test.cpp`: 2/4/6, negative, singleton, repeated, zero, mixed-sign and fractional values |
| R2: input and complexity | Class: borrowed const input; specification algorithm | `compute_statistics` | Input unchanged test; complexity verified by inspection |
| R3: empty/non-finite | Sequence: invalid computation; class: exception note | `compute_statistics` | Empty, NaN, positive/negative infinity |
| R4: overflow | Sequence: invalid computation; specification algorithm | `compute_statistics` | Positive overflow, negative overflow, finite boundary, early overflow before later cancellation |
| R5: parsing | Sequence: parse path; component: CLI | `cli.cpp::parse_values` | Valid whitespace, malformed suffix, out-of-range token, non-finite token, simulated read failure |
| R6: success output | Use case: obtain statistics; sequence: success | `cli.cpp::run`, `main.cpp::main` | Four labels/order, representative values/precision, classic locale, exit 0, empty stderr |
| R7: failure output | Sequence: alternatives and output note | `cli.cpp::run` | Invalid inputs return 1, nonempty diagnostic prefix, no statistics for failures before output starts; simulated mid-write failure returns 1 and may leave partial bytes |

Diagram sources and previews: [use case](diagrams/01-statistics/01-use-case.md), [sequence](diagrams/01-statistics/02-sequence-compute.md), [components](diagrams/01-statistics/03-component.md), [class and artifacts](diagrams/01-statistics/04-class.md).

Structural audit: `Statistics` is returned by computation and consumed by `run`; `parse_values` supplies its owned vector to `run`; `run` borrows it for computation; global `main` wires standard streams. Each proposed production symbol has a role in UC1. Build/test infrastructure is outside the production UML and must not introduce unmodeled domain behavior.

## Foundation practice pack

| Requirement | UML realization | Planned code | Planned tests |
| --- | --- | --- | --- |
| FP-R1: independent projects | Specification file plan; no runtime UML needed | One local `CMakeLists.txt` per laboratory | Configure each laboratory separately in Debug and Release |
| FP-R2/FP-R3: observable baseline | All three activities end with status 0 after their specified writes | Each `src/main.cpp`; local CMake output checker | Exact stdout, empty stderr, status 0 in CTest |
| FP-R4: learner guidance | Specification learning boundary and laboratory contracts | Each `README.md` | Editorial inspection of prerequisites, commands, variations, and limits |
| FP-R5: UML/source correspondence | Three activity diagrams | Identifiers and actions in each `main.cpp` | Source-to-activity inspection and PlantUML snapshot verification |
| FP-R6: bounded concepts | Activities contain no excluded behavior | Three flat `main` programs | Dependency and source inspection |
| FO-R1–FO-R3: ordered output | [First output activity](diagrams/foundation-practice-pack/01-activity-first-output.md) | `02-first-output/src/main.cpp` | Two exact lines in order and status 0 |
| WT-R1–WT-R3: named addition | [Workshop total activity](diagrams/foundation-practice-pack/02-activity-workshop-total.md) | `03-workshop-total/src/main.cpp` | Exact label/value output; source inspection preserves operands and expression |
| TC-R1–TC-R4: exact target decision | [Target check activity](diagrams/foundation-practice-pack/03-activity-target-check.md) | `04-target-check/src/main.cpp` | Baseline exact output; source inspection and documented runs for counts 2 and 4 |

Pack structural audit: the three proposed executables do not call each other or share runtime state. Each program owns one complete scenario and depends only on the standard console. Test scripts observe process boundaries and do not add production behavior. No proposed production symbol or diagram is orphaned.
