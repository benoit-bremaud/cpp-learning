# Exercise 01: sequence statistics

Status: specification and implementation proposal; awaiting approval before code.

## Need

Compute statistics for a sequence of finite decimal values while practicing functions, const references, standard containers, and explicit error handling.

## Authoritative conception

Read the [complete study](../../docs/architecture/specs/01-statistics.md) before coding. It defines requirements, the user scenario, exact public signatures, error behavior, the algorithm, UML views, proposed files, and the review record.

The [traceability matrix](../../docs/architecture/traceability-matrix.md) connects the requirements to diagrams, planned symbols, and tests. These implementation and test targets do not exist yet.

Acceptance of this study is required before implementation. If implementation exposes a design problem, revise and revalidate the study before changing the accepted contract.

## Learning checkpoints

Explain why the sequence is passed by const reference, why mean uses floating-point arithmetic, why input validation belongs at defined boundaries, and how a failing test reveals a defect. Implement your first attempt before requesting a complete solution.
