# Laboratory 03 — workshop total

## Objective and prerequisites

Initialize two integer quantities, calculate their sum, store the result, and observe that result in the console.

Prerequisites: integer initialization, named values, addition, and console output. Review the course lessons “Premières expressions — calculer une somme” and “Un premier programme C++ complet” when needed.

This is a host-only laboratory. Its trays and components form a small model; no physical inventory or sensor is connected.

## Need and expected behavior

The left tray contains 2 components and the right tray contains 3. The program stores their total in `component_count`, then writes:

```text
Workshop total
5
```

The two tray variables remain 2 and 3. Reading them in the addition does not remove or move components.

## UML conception

Read the authoritative [activity diagram](../../docs/architecture/diagrams/foundation-practice-pack/02-activity-workshop-total.md) before the source.

The diagram separates four reasoning steps:

1. establish both named quantities;
2. calculate their sum;
3. initialize the total with the value 5;
4. expose the stored result through console output.

The C++ declaration performs calculation and initialization in one instruction. The UML separation explains the values involved; it does not claim that the processor executes two source instructions.

## Build and verify

Run these commands from the repository root:

```sh
cmake -S exercises/03-workshop-total -B /tmp/cpp-workshop-total-debug -DCMAKE_BUILD_TYPE=Debug
cmake --build /tmp/cpp-workshop-total-debug
ctest --test-dir /tmp/cpp-workshop-total-debug --output-on-failure
```

Observe the program directly with:

```sh
/tmp/cpp-workshop-total-debug/workshop_total
```

The paths above suit Linux and macOS. On Windows, choose a local build directory. With a multi-configuration generator, also select `--config Debug` for the build and `-C Debug` for CTest.

## Practice on your own branch

Predict each result before building and running:

1. Change `left_tray_count` to 4. What total should appear, and which UML initialization changes?
2. Set `left_tray_count` to 0. Explain why an empty tray remains a known quantity rather than missing data.
3. Replace the expression with the literal `5`. The baseline output still passes: what connection to the two trays has the program lost?
4. Restore `left_tray_count + right_tray_count` and rerun CTest.

The third variation demonstrates a test limitation. A single expected output cannot prove which expression produced that output. Conception and source review complement the black-box test.

## Check your understanding

- Which part of the declaration calculates the value?
- Do `left_tray_count` and `right_tray_count` change when the program reads them?
- Does `component_count` retain a formula that updates automatically?
- Why can the literal-5 variation pass the baseline output test while violating the intended design?

The answers should distinguish operands, the result stored at one moment, and observable behavior from implementation correspondence.

## Scope limit

The program uses fixed values written in its source. It performs no input validation, automatic recount, repetition, or physical inventory operation. The exact-output test verifies one accepted execution and does not establish every internal property by itself.
