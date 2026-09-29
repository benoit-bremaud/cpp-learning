# Embedded C++ initial diagnostic

Work at your own pace without generated solutions. Explain ideas rather than writing firmware. Record where documentation or help was needed. Any derived coding exercise requires its own approved UML study.

## Questions

1. Distinguish compiling, linking, cross-compiling, flashing, and resetting a microcontroller. Which steps run on the PC?
2. Explain the role of integer width and signedness. Describe a bit mask and distinguish signed overflow from unsigned wraparound.
3. Contrast pointers, references, and array-plus-length parameters. Explain why returning a reference to a local variable is invalid.
4. Contrast stack, heap, and static storage. Explain the capacity and overflow policy of a fixed-size sample buffer.
5. Explain constructors, destructors, RAII, and ownership. Can deterministic cleanup be useful when exceptions are disabled?
6. Describe how to blink an LED while reading a button without blocking, including switch bounce and elapsed-time counter rollover.
7. Explain what an interrupt handler should do and what should be deferred. Does `volatile` make a multi-byte access atomic or shared state race-free?
8. Explain how C++ can call a C driver API, including C linkage, callback/context pointers, and handle lifetime.
9. Distinguish UART, I2C, and SPI at a high level. Identify what a datasheet and board schematic are needed to establish before wiring a sensor.
10. Describe an alarm state machine with hysteresis and a disconnected-sensor state. Explain how UML states, C++ behavior, and tests would correspond.

## Placement

For each answer record: independent explanation, explanation with help, or topic to learn. Do not use a combined score to skip a safety-critical or foundational topic.

- Build uncertainty: [compilation](modules/tools.md#tool-01), [linking](modules/tools.md#tool-02), [cross-compilation](modules/tools.md#tool-06).
- Numeric uncertainty: [integer representation](modules/cpp.md#cpp-02), [conversions](modules/cpp.md#cpp-03), [bit masks](modules/cpp.md#cpp-12).
- Pointer/lifetime uncertainty: [references](modules/data.md#data-03), [pointers](modules/data.md#data-04), [lifetime](modules/data.md#data-08), [dangling access](modules/data.md#data-09).
- Resource uncertainty: [destructors](modules/objects.md#obj-05), [ownership](modules/ownership.md#own-04), [RAII](modules/ownership.md#own-05).
- Timing uncertainty: [elapsed time](modules/reactive.md#time-01), [rollover](modules/reactive.md#time-02), [debouncing](modules/reactive.md#time-04).
- Interrupt uncertainty: [execution context](modules/interrupts.md#irq-01), [atomicity](modules/interrupts.md#irq-03), [synchronization](modules/interrupts.md#irq-04).
- C boundary uncertainty: [C linkage](modules/c-interfaces.md#capi-03), [callbacks](modules/c-interfaces.md#capi-04), [context lifetime](modules/c-interfaces.md#capi-05).
- Peripheral uncertainty: [board identification](modules/hardware.md#hw-01) and the [peripheral family](modules/peripherals.md).
- Modeling uncertainty: [UML reading](modules/uml.md), then [state representation](modules/reactive.md#state-01).

Unknown concepts are expected. Revisit the relevant stage, then explain a fresh example independently before advancing.
