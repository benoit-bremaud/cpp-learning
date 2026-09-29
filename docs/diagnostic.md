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

- Questions 1–4 identify foundations for stages 1–4.
- Question 5 identifies resource-management gaps for stages 4 and 8.
- Questions 6 and 9 identify peripheral and timing gaps for stages 5–10.
- Questions 7 and 8 identify preparation for stages 8 and 11–14.
- Question 10 checks the UML-to-code method used throughout the path.

Unknown concepts are expected. Revisit the relevant stage, then explain a fresh example independently before advancing.
