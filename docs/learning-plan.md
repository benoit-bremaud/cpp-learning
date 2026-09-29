# Progressive C++ learning plan

## Goal and progression

Build the ability to design, implement, debug, test, and explain a small modern C++ application independently. This plan assumes general programming knowledge but does not assume fluency in C++. Start with the diagnostic; compress only the modules whose exit criteria you can already demonstrate.

The stages below are ordered by prerequisites, with no dates, durations, or deadlines. Pause, repeat, or resume any stage whenever you have time. Advancement depends on understanding, not a schedule.

## Sequence

| Stage | Focus | Practical work | Exit criterion |
| --- | --- | --- | --- |
| 1 | Diagnostic; compilation, linking, types, initialization, control flow | Compile a tiny program; diagnose one compilation error and one link error; begin a statistics exercise | Explain source → object → executable and distinguish compiler errors from runtime failures |
| 2 | Functions, scope, const, references, parameter passing | Complete the statistics exercise and separate pure computation from terminal input | Justify value versus const-reference parameters; handle empty and malformed input |
| 3 | `string`, `vector`, `array`, iterators, algorithms, complexity | Build a word-frequency analyzer, first with sequences, then an associative container | Explain container choice, iterator invalidation, and dominant complexity |
| 4 | Object lifetime, storage duration, pointers, references, RAII | Diagnose dangling references and a resource leak in isolated examples; replace unsafe ownership | Draw object lifetimes and explain why each reference remains valid |
| 5 | Classes, invariants, constructors, composition, Rule of Zero | Model inventory items with validated quantities | Maintain invariants across construction and updates; avoid unnecessary custom special members |
| 6 | Ownership, `unique_ptr`, copying, moving, value categories | Model uniquely owned resources and observe copies/moves in a small diagnostic type | Explain `std::move`, moved-from states, and when shared ownership is justified |
| 7 | Errors, exceptions, `optional`, exception safety | Add robust parsing and missing-value handling to the analyzer | Distinguish an absent value, invalid input, and an exceptional failure; preserve invariants |
| 8 | Headers, translation units, CMake, CTest, debugger, sanitizers | Split an exercise into computation, CLI, and tests; debug a planted defect | Rebuild and run tests from a fresh build directory; explain sanitizer evidence |
| 9 | Templates, deduction, concepts | Write a constrained generic utility with a real use in two types | Explain compile-time constraints and reject unsupported types clearly |
| 10 | Lambdas, algorithms, ranges, non-owning views | Express filtering and aggregation with algorithms and a range pipeline | Explain captures and avoid dangling `string_view`, `span`, and range views |
| 11 | Interfaces, composition, runtime and compile-time polymorphism | Compare two designs for interchangeable report output | Choose the simpler design for present requirements and justify virtual destruction if needed |
| 12 | Files, filesystem, persistence, resource safety | Save and load inventory data in a documented simple format | Test missing files, malformed records, and round-trip persistence without corrupting state |
| 13 | Profiling, measurement, complexity, allocation costs | Measure one real bottleneck in the analyzer and compare alternatives | Provide a reproducible benchmark and explain correctness and measurement limitations |
| 14 | Concurrency basics, data races, mutexes, `jthread` | Process independent inputs concurrently and compare with the sequential result | Explain shared state, synchronization, joining, and why speedup is not guaranteed |
| 15 | Final project: requirements and incremental implementation | Design a local inventory CLI; implement its first complete user flow | Validate the specification before coding; deliver a tested vertical slice |
| 16 | Final project hardening and independent assessment | Finish persistence, errors, tests, usage documentation, and review | Demonstrate a fresh build, meaningful tests, a clean supported sanitizer run, and explain design decisions |

## Exercise workflow

Every exercise, including each coding variation, has its own conception study before implementation. Read the [UML-first learning method](architecture/learning-method.md).

1. Understand the problem, prerequisites, requirements, and acceptance criteria.
2. Study the UML diagrams, contracts, algorithms, and error scenarios.
3. Review and explicitly validate the conception before coding.
4. Implement the accepted design using the specified names, signatures, relationships, and behavior.
5. Test the requirements and audit code-to-model correspondence.
6. Explain your choices, record difficulties, and revisit them when useful.

Testing starts with the first exercise. Stage 8 deepens the tools and build model. Keep deliberately unsafe demonstrations isolated; their diagrams must explicitly show the lifetime violation being studied.

The first study is available for the statistics exercise. Later studies will be prepared and validated as each exercise is introduced; the roadmap does not imply that those studies already exist. Progressive variants receive an updated, validated model before their code changes.

## Module completion rule

A module is complete when you can explain its central idea without notes, solve a small variation independently, demonstrate relevant tests, and justify the resulting design. Track concrete evidence rather than hours spent or videos watched. Revisit weak concepts before advancing to material that depends on them.

## Final project scope

Build a local inventory command-line application with add, list, update-quantity, and remove operations, plus save/load support. Specify identifiers, valid quantities, duplicate handling, persistence format, and error behavior before implementation. Keep computation separate from file and terminal interactions so domain tests do not require subprocesses or disk access.

Acceptance criteria: a documented build; predictable invalid-input behavior; round-trip persistence; tests for normal, invalid, and boundary cases; no unresolved compiler warnings under the agreed flags; no reported sanitizer failures in supported runs; a short explanation of ownership and complexity. Exclude GUI, networking, accounts, and databases from this first project.

## Extensions after the core path

Choose one direction based on your actual goal: embedded constraints and hardware interfaces; native application development; performance-oriented systems; or library design. Explore selected C++23 facilities, allocators, coroutines, modules, or deeper concurrency only when a project creates a concrete need and the toolchain supports the feature.

## Design rationale

C++20 provides a coherent baseline for concepts, ranges, and modern resource-management habits. Starting with standard containers and RAII keeps attention on lifetimes and ownership without making manual allocation the default. The C++ Core Guidelines support these priorities; this progression and its exercise choices are pedagogical recommendations rather than requirements of the language standard.

References: [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines), [CMake tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html), [CTest](https://cmake.org/cmake/help/latest/manual/ctest.1.html).
