# Progressive embedded C++ learning plan

## Goal and current validation

Learn to design, implement, test, and debug C++ firmware for microcontrollers, especially ESP32 and Arduino-compatible boards. Revisit C where it explains hardware interfaces and language mechanisms.

Accepted direction: no schedule or deadlines; very small, directly revisitable modules; one main concept per teaching module; a complete UML conception before every coding exercise. The detailed catalog, teaching approach, hardware route, and website design remain proposals for joint validation. A new delivery format does not mean the full pedagogical plan has been approved.

## Navigate by concept

The [concept index](modules/index.md) contains 121 proposed module outlines across 16 families, including five integration checkpoints. These are navigation units, not 121 completed lessons or required equal-sized assignments. Mastered concepts can be checked quickly; unfamiliar ones can be revisited independently.

Each ID is stable, such as `DATA-08` for object lifetime or `OWN-05` for RAII. Each outline links to its direct prerequisites and states concrete mastery evidence. Follow dependencies rather than treating family order as a rigid linear schedule. Find a concept in the index, check the prerequisite links, and record the precise difficulty in [progress](progress.md).

| Family | Direct access |
| --- | --- |
| UML reading | [Structure, sequence, activity, state](modules/uml.md) |
| Build and investigation tools | [Compilation, linking, warnings, tests, debugger, target build](modules/tools.md) |
| C++ foundations | [Initialization, integers, conditions, functions, scope, bits](modules/cpp.md) |
| Data access and lifetime | [Arrays, references, pointers, structs, bounds, dangling access](modules/data.md) |
| Objects and value semantics | [Classes, invariants, constructors, destructors, copy, move](modules/objects.md) |
| Storage and ownership | [Automatic/static/dynamic storage, ownership, RAII, bounded buffers](modules/ownership.md) |
| Board and GPIO | [Board identity, voltage compatibility, input/output, bias](modules/hardware.md) |
| Time and reactive behavior | [Elapsed time, rollover, debouncing, states, hysteresis](modules/reactive.md) |
| C interfaces | [Translation, array decay, linkage, callbacks, handles, volatile](modules/c-interfaces.md) |
| Peripherals | [UART, framing, parsing, I2C, SPI, ADC, calibration, PWM](modules/peripherals.md) |
| Interrupts | [Context, deferred work, atomicity, synchronization, critical sections](modules/interrupts.md) |
| Compile-time techniques | [Constexpr, static assertions, templates, fixed capacity](modules/generic.md) |
| ESP-IDF | [Components, startup, configuration, errors, adapters](modules/esp-idf.md) |
| FreeRTOS | [Tasks, stacks, blocking, priorities, queues, notifications, mutexes](modules/rtos.md) |
| Robustness | [Memory reports, backtraces, watchdogs, persistence, sleep, measurements](modules/robustness.md) |
| Integration | [Sensor alarm, acknowledgement, serial control, restart, final variation](modules/integration.md) |

## Suggested entry path

Begin with the [diagnostic](diagnostic.md), then select unfamiliar concepts. For a foundation-first entry, pair compilation and linking with initialization, integers, conditions, and functions. Introduce UML structure/sequence reading before the first coded exercise, and activity/state notation before an exercise uses it. Running a test and inspecting a variable enter as soon as a small function can be studied.

Move from data and lifetimes to constructors/destructors, then ownership and RAII. Copying, disabling copying, and moving are separate concepts. The dependency links make the necessary crossings between families explicit.

Board work can begin once its prerequisites and the selected board are ready; completing every advanced C++ module first is not required. Integration checkpoints assemble accepted pieces progressively. They are distinguished from single-concept lessons.

## Target strategy

The provisional recommendation is ESP32 with Arduino for initial peripheral work, then native ESP-IDF. Hardware selection remains pending. Arduino is an ecosystem/framework rather than one CPU architecture; do not assume AVR and ESP32 share resource limits or libraries.

Use host exercises where hardware is irrelevant. Pin the board, SDK/core, compiler, and supported C++ standard for each target exercise. C++20 may be used on the host without imposing it on every firmware target. ESP-IDF and FreeRTOS modules are conditional on a suitable selected target. See [platform choices](embedded-platforms.md).

## Module contract and UML

Use the [module template](modules/module-template.md): one objective, linked prerequisites, explanation, complete exercise conception, practice, verification, and a focused revisit aid. The template is a content contract, not a claim that the lessons are already written.

Every exercise has requirements, real UML diagrams, exact code mapping, and tests. The learner validates the conception before implementation. A revisit reuses the accepted study; a change to modeled behavior requires an updated, validated study. Keep fixtures self-contained so one module can be replayed without completing an entire firmware project.

Host logic tests, target compilation, and on-device checks provide different evidence. Use only applicable checks, and document their limitations. Wiring and pin tables complement UML. Firmware timeout values describe device behavior, never learning deadlines.

## C detours

Use the dedicated C-interface modules when needed. Treat C and C++ as distinct languages. Understand pointer-plus-length contracts, callback lifetime, explicit serialization, and resource handles. Study manual allocation without making it the default. Evaluate library features, dynamic allocation, exceptions, and virtual dispatch against real target support and constraints rather than blanket bans.

## Integrated project

Progressively build a sensor-monitoring device with a bounded reading history, hysteresis alarm, button acknowledgement, serial control, and persisted configuration. Each integration checkpoint has its own approved UML study. Begin with cooperative execution; add a FreeRTOS variant only for a stated need. Verify normal operation and failures, including sensor loss and restart, with measured resource use.

The final independent variation tests whether the learner can change requirements, update UML, implement, and verify the resulting behavior. Connectivity, OTA, DMA, and other families are optional later extensions with their own scopes.

## Delivery and existing material

A [course website proposal](course-website-proposal.md) describes the requested website and links to GitHub examples/exercises. It is not implemented or approved yet.

The [statistics exercise](../exercises/01-statistics/README.md) remains optional host-only practice with a proposed UML study. Its streams, dynamic storage, and exceptions are not a firmware template. All new catalog entries are outlines; detailed studies will be prepared and validated before coding.
