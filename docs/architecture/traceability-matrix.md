# Conception traceability

Status: planned code and tests, not implemented. This matrix currently covers only the optional host-only statistics exercise. Embedded exercise studies will add separate, target-specific entries before implementation.

| Requirement | UML realization | Planned code | Planned tests |
| --- | --- | --- | --- |
| R1: statistics | Sequence: compute call; class: Statistics | `statistics.cpp::compute_statistics` | `statistics_test.cpp`: 2/4/6, negative, singleton, repeated, zero, mixed-sign and fractional values |
| R2: input and complexity | Class: borrowed const input; specification algorithm | `compute_statistics` | Input unchanged test; complexity verified by inspection |
| R3: empty/non-finite | Sequence: invalid computation; class: exception note | `compute_statistics` | Empty, NaN, positive/negative infinity |
| R4: overflow | Sequence: invalid computation; specification algorithm | `compute_statistics` | Positive overflow, negative overflow, finite boundary, early overflow before later cancellation |
| R5: parsing | Sequence: parse path; component: CLI | `cli.cpp::parse_values` | Valid whitespace, malformed suffix, out-of-range token, non-finite token, simulated read failure |
| R6: success output | Use case: obtain statistics; sequence: success | `cli.cpp::run`, `main.cpp::main` | Four labels/order, representative values/precision, classic locale, exit 0, empty stderr |
| R7: failure output | Sequence: alternatives and output note | `cli.cpp::run` | Invalid inputs return 1, nonempty diagnostic prefix, no partial statistics; simulated output failure returns 1 |

Diagram sources and previews: [use case](diagrams/01-statistics/01-use-case.md), [sequence](diagrams/01-statistics/02-sequence-compute.md), [components](diagrams/01-statistics/03-component.md), [class and artifacts](diagrams/01-statistics/04-class.md).

Structural audit: `Statistics` is returned by computation and consumed by `run`; `parse_values` supplies its owned vector to `run`; `run` borrows it for computation; global `main` wires standard streams. Each proposed production symbol has a role in UC1. Build/test infrastructure is outside the production UML and must not introduce unmodeled domain behavior.
