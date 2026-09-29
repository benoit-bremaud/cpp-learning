# Embedded platforms and references

## Provisional choice

Hardware: not yet specified by the learner. Proposed route: ESP32 with Arduino for accessible peripheral experiments, then ESP-IDF for deeper firmware work. This is a learning recommendation, not a purchase requirement. Existing hardware should guide the first target.

| Route | Learning value | Constraint |
| --- | --- | --- |
| PC first | Fast tests for algorithms, state transitions, and bounded buffers without hardware | Does not prove electrical or device timing behavior |
| ESP32 with Arduino | Familiar GPIO/serial APIs and accessible libraries | Board/core version and library behavior must be recorded |
| ESP32 with ESP-IDF | Direct platform configuration, drivers, and FreeRTOS integration | More build/runtime concepts to learn |
| AVR Uno R3 / classic AVR Nano | Makes tight memory budgets and simple cooperative execution concrete | Different compiler/library and hardware limits; no assumption of ESP32 feature parity |

Arduino-based and ESP-IDF-based development are related paths: Espressif documents using Arduino as an ESP-IDF component. This does not mean arbitrary Arduino/IDF versions can be combined; use a documented compatible pair. [Espressif integration guide](https://docs.espressif.com/projects/arduino-esp32/en/latest/esp-idf_component.html).

The Uno R3 is an ATmega328P board with 2 KB SRAM. Do not apply its limits to every Arduino-branded board. [Official Uno R3 documentation](https://docs.arduino.cc/hardware/uno-rev3/).

## C++ policy

ESP-IDF supports C++ while primarily exposing C APIs. Its documented defaults disable C++ exceptions and RTTI; individual project and framework configuration must be checked. This makes C linkage, return-code handling, resource lifetime, and C++ wrappers useful learning topics. Select the language standard and runtime features explicitly for the chosen SDK and target. [ESP-IDF C++ guide](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-guides/cplusplus.html).

ESP-IDF's FreeRTOS behavior includes platform-specific scheduling and synchronization details. Study the manual for the selected SoC and release; do not assume all chips have two cores. [ESP-IDF FreeRTOS guide](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-reference/system/freertos_idf.html).

## Board exercise prerequisite record

Before implementation, identify the exact board and SoC, framework/SDK version, compiler and C++ standard, connected peripherals and their datasheets, pin mapping, logic voltages, resource conflicts, flashing method, and supported debugging method. Define memory, timing, and failure constraints for that exercise; do not invent numerical budgets without requirements or measurement.

The linked `stable`/`latest` documentation can change. Pin implementation dependencies and use matching versioned documentation when a board exercise is introduced.
