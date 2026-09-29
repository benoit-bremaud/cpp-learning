# Progressive C++ learning plan

## Goal and pace

Build the ability to design, implement, debug, test, and explain a small modern C++ application independently. This plan assumes general programming knowledge but does not assume fluency in C++. Start with the diagnostic; compress only the modules whose exit criteria you can already demonstrate.

Estimated pace: 16 weeks at 4–6 hours per week (64–96 hours). This is a foundation and consolidation path, not a promise of mastery. Spend longer on lifetime and ownership if necessary.

## Sequence

| Week | Focus | Practical work | Exit criterion |
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

## Weekly routine

- 45–60 minutes: read a focused reference and explain the concept in your own words.
- 2–3 hours: implement one exercise, initially without generated solutions.
- 45–60 minutes: test normal, invalid, and boundary cases; debug observed failures.
- 30–60 minutes: review, simplify, write a short retrospective, and solve a variation.

Testing starts with the first exercise. Week 8 deepens the tools and build model; it is not the first time tests appear. Keep deliberately unsafe demonstrations isolated and never use them as production patterns.

## Module completion rule

A module is complete when you can explain its central idea without notes, solve a small variation independently, demonstrate relevant tests, and justify the resulting design. Track concrete evidence rather than hours spent or videos watched. Revisit weak concepts one week later.

## Final project scope

Build a local inventory command-line application with add, list, update-quantity, and remove operations, plus save/load support. Specify identifiers, valid quantities, duplicate handling, persistence format, and error behavior before implementation. Keep computation separate from file and terminal interactions so domain tests do not require subprocesses or disk access.

Acceptance criteria: a documented build; predictable invalid-input behavior; round-trip persistence; tests for normal, invalid, and boundary cases; no unresolved compiler warnings under the agreed flags; no reported sanitizer failures in supported runs; a short explanation of ownership and complexity. Exclude GUI, networking, accounts, and databases from this first project.

## Extensions after the core path

Choose one direction based on your actual goal: embedded constraints and hardware interfaces; native application development; performance-oriented systems; or library design. Explore selected C++23 facilities, allocators, coroutines, modules, or deeper concurrency only when a project creates a concrete need and the toolchain supports the feature.

## Design rationale

C++20 provides a coherent baseline for concepts, ranges, and modern resource-management habits. Starting with standard containers and RAII keeps attention on lifetimes and ownership without making manual allocation the default. The C++ Core Guidelines support these priorities; this schedule and its exercise choices are pedagogical recommendations rather than requirements of the language standard.

References: [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines), [CMake tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html), [CTest](https://cmake.org/cmake/help/latest/manual/ctest.1.html).
