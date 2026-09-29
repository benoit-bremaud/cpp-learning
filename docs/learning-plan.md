# Progressive embedded C++ learning plan

## Goal and progression

Learn to design, implement, test, and debug C++ firmware for microcontrollers, especially ESP32 and Arduino-compatible boards. Understand the C mechanisms used by hardware interfaces without treating C as a mandatory full course before C++.

The stages are ordered by prerequisites, with no dates, durations, or deadlines. Work when available, revisit gaps, and advance by demonstrated understanding. Every coding exercise and variation requires an approved UML conception study before implementation.

## Target strategy

The provisional recommendation is ESP32 using the Arduino framework for initial peripheral exercises, followed by native ESP-IDF for drivers, task scheduling, and deeper platform control. Hardware selection remains pending. Arduino is an ecosystem and programming framework, not one processor architecture; an ESP32 can run Arduino-based firmware. An AVR-based Uno R3 has a substantially different resource profile from an ESP32 or other Arduino boards.

Start hardware-independent exercises on the PC. Select exact board, SoC, core/SDK release, compiler, language standard, and library capabilities before each board exercise. Do not prescribe C++20 universally: use it for supported host exercises and select a supported standard explicitly for each embedded target. Confirm features on the actual toolchain rather than inferring library support from a language-version flag.

See [platform choices and official references](embedded-platforms.md).

## Progressive stages

The practical work below is a roadmap. Its UML column defines the views to prepare, not a claim that the study already exists. Add other views whenever requirements justify them.

| Stage | C++ and embedded focus | Practical exercise | Required conception focus | Exit criterion |
| --- | --- | --- | --- | --- |
| 1 | Compilation, linking, host versus target, firmware startup | Explain a small program's build and trace its execution | Artifacts/components and execution sequence | Distinguish host tests, cross-compilation, linking, flashing, and reset |
| 2 | Integer types, signedness, conversions, bits, enums, constants | Encode/decode a simulated device status byte | Data representation and activity | Explain masks, promotions, shift bounds, and overflow rules |
| 3 | Pointers, references, arrays, structs, lifetimes, const | Process a bounded sequence of simulated sensor readings | Structure, ownership, algorithm, error paths | Define capacity and lifetime without out-of-bounds access |
| 4 | Memory layout, stack, heap, static storage, RAII, Rule of Zero | Design a fixed-capacity sample buffer | Class, lifetime sequence, full/empty transitions | Specify overflow policy and account for memory use |
| 5 | Board bring-up, GPIO, electrical levels, resource ownership | Drive an LED and read a button | Hardware boundary, component, sequence, pin mapping | Explain pull-ups, active levels, and selected pins from board documentation |
| 6 | Cooperative execution, elapsed time, counter wraparound | Blink independently while debouncing a button | State and timing/sequence views with guards | Remain responsive and handle timer rollover using bounded elapsed-time comparisons |
| 7 | Functions, classes, invariants, composition, `constexpr` | Build a threshold alarm with hysteresis | Class and state diagrams | Prevent threshold chatter and justify each state transition |
| 8 | C interfaces, callbacks, opaque handles, C++ wrappers | Wrap a small C-style driver API | Component, public signatures, resource lifecycle | Explain `extern "C"`, callback lifetime, and deterministic cleanup |
| 9 | UART, byte streams, bounded parsing, protocol design | Parse framed commands through a serial console | Frame structure, parser state, success/error sequences | Recover after malformed/oversized input without unbounded allocation |
| 10 | I2C/SPI, ADC/PWM, datasheets, units and calibration | Read a chosen sensor and report validated values | Driver boundary, transaction sequence, data conversions | Handle timeout/device absence and distinguish raw counts from physical units |
| 11 | Interrupts, atomicity, shared state, deferred work | Capture events and process them outside the ISR | ISR/task sequences, ownership and event-loss policy | Keep ISR work bounded and explain why `volatile` is not synchronization |
| 12 | Templates, fixed capacities, spans/views when supported, costs | Generalize a bounded buffer for two real data types | Template structure and lifetime contracts | Justify compile-time configuration and measure RAM/flash effects |
| 13 | Native ESP-IDF: components, configuration, C drivers, errors | Port one existing peripheral exercise from Arduino | Two concrete adapter mappings and startup sequence | Reuse tested logic while making platform-dependent behavior explicit |
| 14 | FreeRTOS tasks, queues, notifications, priorities, mutexes | Separate acquisition from reporting | Task interactions, queue capacity, timing and ownership | Explain task stacks, blocking, backpressure, race prevention, and applicable core behavior |
| 15 | Debugging, watchdogs, memory budgets, profiling | Diagnose a planted fault and inspect firmware resource use | Failure/recovery sequence and measured constraints | Use logs/backtraces/debugger as supported and explain reset cause and memory report |
| 16 | Flash persistence, configuration, power loss, low-power modes | Store configuration and resume after reset or sleep | State, serialization, persistence/recovery sequence | Define defaults, validation, write policy, and applicable wakeup behavior |
| 17 | Integrated firmware conception and incremental implementation | Build a sensor-monitoring device with a local alarm | Full requirement-to-UML-to-code-to-test mapping | Validate the complete study and deliver one tested end-to-end behavior |
| 18 | On-device verification and consolidation | Inject sensor, timing, input, and restart faults into the final project | Validated model updates and verification evidence | Demonstrate recovery, bounded resources, and exact modeled behavior on the chosen target |

Stages 13–14 use the ESP32 path. With an AVR board, keep the common stages and use cooperative scheduling; defer ESP-IDF/FreeRTOS work until suitable hardware is available. Do not assume every ESP32 is dual-core or exposes the same peripherals.

## C foundations when useful

Use a short C-focused detour at the point of need, followed by its C++ application:

- Stages 1–3: declarations/definitions, `.c` versus `.cpp`, headers, integer promotions, arrays and pointer decay, pointer-plus-length contracts, object representation and alignment.
- Stages 2 and 5: masks, register access, `volatile` for appropriate hardware access; never invent register addresses or register semantics without the selected device's reference manual.
- Stages 3–4: storage duration, stack/heap, allocation/freeing contracts, and how C++ RAII expresses ownership. C and C++ are distinct languages; validity in one does not guarantee validity in the other.
- Stage 8: C linkage, function pointers, context pointers, error codes, and resource handles; prevent exceptions from crossing C callback boundaries.
- Stages 9–11: byte order, padding, explicit serialization, data races and interrupt-shared state. Do not serialize raw structs as a portable wire protocol or assume `volatile` makes access atomic.

Manual allocation is something to understand, not the default design. Prefer bounded storage for predictable paths. Dynamic allocation, virtual dispatch, exceptions, and standard-library facilities are evaluated against toolchain support and measured constraints rather than universally forbidden.

## Exercise workflow and UML

1. State the need, prerequisites, requirements, target assumptions, and acceptance criteria.
2. Study structure and behavior in UML, including pin/peripheral mapping, object ownership, execution context, event ordering, timeouts, buffer limits, and failure recovery where applicable.
3. Review and explicitly validate the conception before coding.
4. Implement the accepted names, signatures, relationships, states, and behavior.
5. Run host logic tests, compile for the target, then perform relevant on-device checks.
6. Audit UML/code correspondence and explain the result independently.

See the [learning method](architecture/learning-method.md). A hardware wiring diagram and pin table complement UML; UML alone does not specify an electrical circuit. Timing requirements in a firmware contract describe device behavior, not learning deadlines.

## Existing exercise status

The [statistics exercise](../exercises/01-statistics/README.md) and its UML study remain available as optional host-only C++ practice. Its vector, stream, and exception choices are not a firmware template. It is no longer the mandatory first exercise of the embedded path. New embedded exercises receive their own approved studies before implementation; no board-specific exercise is ready to flash yet.

## Final project

Build a sensor-monitoring device that samples a chosen sensor, validates readings, maintains a bounded history, exposes status through a serial interface, and signals an alarm with hysteresis using an LED. A button acknowledges the alarm; configuration can be persisted. Specify interactions between acknowledgement, continuing fault, recovery, and restart before coding.

Begin with one cooperative execution loop. An ESP32/FreeRTOS variant follows only when a concrete scheduling or isolation requirement justifies tasks. Connectivity is optional after reliable local behavior, rather than a prerequisite for the project.

Acceptance criteria: reproducible pinned toolchain; approved UML and traceability; tests for logic and malformed input; target compilation; board verification for peripherals, timing, sensor loss, reset, and persistence; measured memory use; documented remaining limitations. Host tests alone cannot validate electrical behavior, ISR latency, or on-device timing.

## Optional specialization extensions

After the core path, choose according to the actual project: Wi-Fi/BLE and secure provisioning where supported, DMA, deeper low-power design, bootloaders and OTA, custom drivers, hardware debugging, or another microcontroller family. Each extension starts with a scoped study and verified target capabilities.
