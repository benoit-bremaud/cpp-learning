# C++ Learning

A progressive, practice-driven journey through modern C++, from a skills diagnostic to an independently built command-line application.

## Start here

1. Complete the [diagnostic](docs/diagnostic.md) without an AI-generated solution.
2. Read the [progressive learning plan](docs/learning-plan.md). Advance at your own pace, using demonstrated understanding rather than deadlines.
3. Record your results in the [progress tracker](docs/progress.md).
4. Review the [first exercise and implementation proposal](exercises/01-statistics/README.md) before starting code.

## Learning approach

Use C++20 as the baseline, with selected C++23 features explored later after checking compiler and standard-library support. Learn value semantics, the standard library, lifetimes, and RAII before manual resource management or advanced metaprogramming.

Every exercise follows this loop: understand the need, study and validate its UML conception, implement the accepted model, test normal and invalid inputs, and audit correspondence between diagrams and code. Ask for hints before asking for solutions.

## Repository map

- `docs/architecture/learning-method.md`: mandatory UML-first exercise workflow.
- `docs/architecture/traceability-matrix.md`: requirements, diagrams, code, and test mapping.
- `docs/learning-plan.md`: sequence, practical work, and completion criteria.
- `docs/diagnostic.md`: initial knowledge assessment and placement guidance.
- `docs/progress.md`: evidence-based progress tracking.
- `exercises/01-statistics/README.md`: first exercise specification and proposed files.
- Future exercise implementations, tests, and projects will be added progressively after design approval.

## Tooling

The initial machine has GCC 13.3.0, CMake 3.28.3, and Ninja available. The proposed toolchain is GCC, CMake, CTest, compiler warnings, and AddressSanitizer/UndefinedBehaviorSanitizer for supported exercises. The build configuration has not been implemented yet.

## References

- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines): a review reference for ownership, interfaces, and resource safety.
- [CMake tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html): learn the build system as exercises become multi-file programs. Documentation may describe features newer than the locally installed CMake.
- [CTest documentation](https://cmake.org/cmake/help/latest/manual/ctest.1.html): test execution and reporting.

## Working agreement

Keep documentation, code, and commit messages in English. Work on a dedicated branch from `main`, use Conventional Commits, and review the full diff before publishing. Obtain explicit approval before implementing a proposed design, creating a PR, or adding CI workflows. The owner performs pushes under the current global rules.
