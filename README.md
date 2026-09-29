# Embedded C++ Learning

A self-paced, UML-first journey through C++ firmware development for microcontrollers, especially ESP32 and Arduino-compatible boards, with focused C foundations where useful.

## Start here

1. Complete the [diagnostic](docs/diagnostic.md) without an AI-generated solution.
2. Read the [progressive learning plan](docs/learning-plan.md). Advance at your own pace, using demonstrated understanding rather than deadlines.
3. Record your results in the [progress tracker](docs/progress.md).
4. Review the [platform choices](docs/embedded-platforms.md). The exact board remains to be selected.
5. Study and validate the UML conception of each exercise before implementing it.

## Learning approach

Learn types, bits, lifetimes, bounded memory, RAII, non-blocking timing, peripherals, interrupts, and state machines, then progress to ESP-IDF and FreeRTOS on an appropriate ESP32 target. Revisit C for pointers, data representation, register access, callbacks, and C driver APIs.

Choose a supported C++ standard per target and pinned toolchain; C++20 remains available for host practice rather than a universal firmware requirement.

Every exercise follows this loop: understand the need, study and validate its UML conception, implement the accepted model, test normal and invalid inputs, and audit correspondence between diagrams and code. Ask for hints before asking for solutions.

## Repository map

- `docs/architecture/learning-method.md`: mandatory UML-first exercise workflow.
- `docs/architecture/traceability-matrix.md`: requirements, diagrams, code, and test mapping.
- `docs/embedded-platforms.md`: provisional target strategy and official references.
- `docs/learning-plan.md`: sequence, practical work, and completion criteria.
- `docs/diagnostic.md`: initial knowledge assessment and placement guidance.
- `docs/progress.md`: evidence-based progress tracking.
- `exercises/01-statistics/README.md`: optional host-only statistics exercise and UML study; not the embedded starting exercise.
- Future exercise implementations, tests, and projects will be added progressively after design approval.

## Tooling

The initial machine has GCC 13.3.0, CMake 3.28.3, and Ninja available. The proposed toolchain is GCC, CMake, CTest, compiler warnings, and AddressSanitizer/UndefinedBehaviorSanitizer for supported exercises. These are host tools; an embedded compiler and SDK must be selected separately. No board toolchain or build configuration has been set up yet.

## References

- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines): a review reference for ownership, interfaces, and resource safety.
- [CMake tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html): learn the build system as exercises become multi-file programs. Documentation may describe features newer than the locally installed CMake.
- [CTest documentation](https://cmake.org/cmake/help/latest/manual/ctest.1.html): test execution and reporting.

## Working agreement

Keep documentation, code, and commit messages in English. Work on a dedicated branch from `main`, use Conventional Commits, and review the full diff before publishing. Obtain explicit approval before implementing a proposed design, creating a PR, or adding CI workflows. The owner performs pushes under the current global rules.
