# Concept index

Use this index to return directly to a concept. Stable IDs never change when modules are reordered; new modules receive new IDs. Follow direct prerequisites if an explanation relies on an unfamiliar concept.

These are proposed module outlines. Detailed lessons, exercises, and UML studies are prepared progressively and validated before code. Integration checkpoints combine previously learned concepts; they are not single-concept lessons. No dates or completion deadlines apply.

[Learning plan](../learning-plan.md) · [Module template](module-template.md) · [Progress](../progress.md)

## UML reading

| Module | Concept |
| --- | --- |
| [UML-01](uml.md#uml-01) | Reading a structure diagram |
| [UML-02](uml.md#uml-02) | Reading a sequence diagram |
| [UML-03](uml.md#uml-03) | Reading an activity diagram |
| [UML-04](uml.md#uml-04) | Reading a state diagram |

## Build and investigation tools

| Module | Concept |
| --- | --- |
| [TOOL-01](tools.md#tool-01) | Compilation |
| [TOOL-02](tools.md#tool-02) | Linking |
| [TOOL-03](tools.md#tool-03) | Compiler warnings |
| [TOOL-04](tools.md#tool-04) | Running a test |
| [TOOL-05](tools.md#tool-05) | Debugger breakpoints |
| [TOOL-06](tools.md#tool-06) | Cross-compilation |
| [TOOL-07](tools.md#tool-07) | Flashing firmware |

## Language foundations

| Module | Concept |
| --- | --- |
| [CPP-01](cpp.md#cpp-01) | Variable initialization |
| [CPP-02](cpp.md#cpp-02) | Integer representation |
| [CPP-03](cpp.md#cpp-03) | Numeric conversions |
| [CPP-04](cpp.md#cpp-04) | Boolean expressions |
| [CPP-05](cpp.md#cpp-05) | Conditional branches |
| [CPP-06](cpp.md#cpp-06) | Loops |
| [CPP-07](cpp.md#cpp-07) | Functions |
| [CPP-08](cpp.md#cpp-08) | Lexical scope |
| [CPP-09](cpp.md#cpp-09) | Const objects |
| [CPP-10](cpp.md#cpp-10) | Status return values |
| [CPP-11](cpp.md#cpp-11) | Scoped enumerations |
| [CPP-12](cpp.md#cpp-12) | Bit masks |
| [CPP-13](cpp.md#cpp-13) | Bit shifts |
| [CPP-14](cpp.md#cpp-14) | Floating-point approximation |

## Data access and lifetime

| Module | Concept |
| --- | --- |
| [DATA-01](data.md#data-01) | Built-in arrays |
| [DATA-02](data.md#data-02) | Fixed-size standard arrays |
| [DATA-03](data.md#data-03) | References |
| [DATA-04](data.md#data-04) | Pointers |
| [DATA-05](data.md#data-05) | Null pointers |
| [DATA-06](data.md#data-06) | Const-reference parameters |
| [DATA-07](data.md#data-07) | Structs |
| [DATA-08](data.md#data-08) | Object lifetime |
| [DATA-09](data.md#data-09) | Dangling access |
| [DATA-10](data.md#data-10) | Bounds contracts |

## Objects and value semantics

| Module | Concept |
| --- | --- |
| [OBJ-01](objects.md#obj-01) | Classes |
| [OBJ-02](objects.md#obj-02) | Member visibility |
| [OBJ-03](objects.md#obj-03) | Invariants |
| [OBJ-04](objects.md#obj-04) | Constructors |
| [OBJ-05](objects.md#obj-05) | Destructors |
| [OBJ-06](objects.md#obj-06) | Composition |
| [OBJ-07](objects.md#obj-07) | Copying values |
| [OBJ-08](objects.md#obj-08) | Disabling copying |
| [OBJ-09](objects.md#obj-09) | Move semantics |
| [OBJ-10](objects.md#obj-10) | Rule of Zero |

## Storage and resource ownership

| Module | Concept |
| --- | --- |
| [OWN-01](ownership.md#own-01) | Automatic storage and stack use |
| [OWN-02](ownership.md#own-02) | Static storage duration |
| [OWN-03](ownership.md#own-03) | Dynamic allocation |
| [OWN-04](ownership.md#own-04) | Resource ownership |
| [OWN-05](ownership.md#own-05) | RAII |
| [OWN-06](ownership.md#own-06) | Unique ownership with unique_ptr |
| [OWN-07](ownership.md#own-07) | Non-owning views |
| [OWN-08](ownership.md#own-08) | Buffer capacity policy |

## Board and GPIO foundations

| Module | Concept |
| --- | --- |
| [HW-01](hardware.md#hw-01) | Board identification |
| [HW-02](hardware.md#hw-02) | Logic voltage compatibility |
| [HW-03](hardware.md#hw-03) | GPIO output |
| [HW-04](hardware.md#hw-04) | GPIO input |
| [HW-05](hardware.md#hw-05) | Pull-up and pull-down bias |
| [HW-06](hardware.md#hw-06) | Arduino execution cycle |

## Time and reactive behavior

| Module | Concept |
| --- | --- |
| [TIME-01](reactive.md#time-01) | Elapsed-time comparison |
| [TIME-02](reactive.md#time-02) | Counter wraparound |
| [TIME-03](reactive.md#time-03) | Cooperative scheduling |
| [TIME-04](reactive.md#time-04) | Button debouncing |
| [STATE-01](reactive.md#state-01) | State representation |
| [STATE-02](reactive.md#state-02) | Transition guards |
| [STATE-03](reactive.md#state-03) | Hysteresis |
| [STATE-04](reactive.md#state-04) | Fault recovery states |

## C foundations and interfaces

| Module | Concept |
| --- | --- |
| [CAPI-01](c-interfaces.md#capi-01) | C versus C++ translation |
| [CAPI-02](c-interfaces.md#capi-02) | Array-to-pointer decay |
| [CAPI-03](c-interfaces.md#capi-03) | C language linkage |
| [CAPI-04](c-interfaces.md#capi-04) | Function pointers |
| [CAPI-05](c-interfaces.md#capi-05) | Callback context lifetime |
| [CAPI-06](c-interfaces.md#capi-06) | Opaque driver handles |
| [CAPI-07](c-interfaces.md#capi-07) | Volatile hardware access |

## Protocols and peripherals

| Module | Concept |
| --- | --- |
| [IO-01](peripherals.md#io-01) | UART byte stream |
| [IO-02](peripherals.md#io-02) | Message framing |
| [IO-03](peripherals.md#io-03) | Bounded parser |
| [IO-04](peripherals.md#io-04) | Byte order |
| [IO-05](peripherals.md#io-05) | Explicit serialization |
| [IO-06](peripherals.md#io-06) | I2C transaction |
| [IO-07](peripherals.md#io-07) | SPI transaction |
| [IO-08](peripherals.md#io-08) | ADC sampling |
| [IO-09](peripherals.md#io-09) | Measurement calibration |
| [IO-10](peripherals.md#io-10) | PWM output |

## Interrupts and shared data

| Module | Concept |
| --- | --- |
| [IRQ-01](interrupts.md#irq-01) | Interrupt execution context |
| [IRQ-02](interrupts.md#irq-02) | Deferred interrupt work |
| [IRQ-03](interrupts.md#irq-03) | Atomicity |
| [IRQ-04](interrupts.md#irq-04) | Shared-state synchronization |
| [IRQ-05](interrupts.md#irq-05) | Critical sections |
| [IRQ-06](interrupts.md#irq-06) | Event overflow policy |

## Compile-time techniques

| Module | Concept |
| --- | --- |
| [GEN-01](generic.md#gen-01) | Constexpr evaluation |
| [GEN-02](generic.md#gen-02) | Compile-time assertions |
| [GEN-03](generic.md#gen-03) | Function templates |
| [GEN-04](generic.md#gen-04) | Class templates |
| [GEN-05](generic.md#gen-05) | Capacity as a template parameter |
| [GEN-06](generic.md#gen-06) | Measuring abstraction cost |

## Native ESP-IDF

| Module | Concept |
| --- | --- |
| [IDF-01](esp-idf.md#idf-01) | ESP-IDF components |
| [IDF-02](esp-idf.md#idf-02) | ESP-IDF startup |
| [IDF-03](esp-idf.md#idf-03) | SDK configuration |
| [IDF-04](esp-idf.md#idf-04) | Driver error handling |
| [IDF-05](esp-idf.md#idf-05) | Platform adapter replacement |

## FreeRTOS concepts

| Module | Concept |
| --- | --- |
| [RTOS-01](rtos.md#rtos-01) | Tasks |
| [RTOS-02](rtos.md#rtos-02) | Task stacks |
| [RTOS-03](rtos.md#rtos-03) | Task blocking |
| [RTOS-04](rtos.md#rtos-04) | Task priorities |
| [RTOS-05](rtos.md#rtos-05) | Queues |
| [RTOS-06](rtos.md#rtos-06) | Task notifications |
| [RTOS-07](rtos.md#rtos-07) | Mutexes |

## Verification and robustness

| Module | Concept |
| --- | --- |
| [ROB-01](robustness.md#rob-01) | Firmware memory report |
| [ROB-02](robustness.md#rob-02) | Fault backtraces |
| [ROB-03](robustness.md#rob-03) | Watchdog behavior |
| [ROB-04](robustness.md#rob-04) | Configuration persistence |
| [ROB-05](robustness.md#rob-05) | Interrupted writes |
| [ROB-06](robustness.md#rob-06) | Sleep and wakeup |
| [ROB-07](robustness.md#rob-07) | Timing measurement |
| [ROB-08](robustness.md#rob-08) | Sensor fault injection |

## Integration checkpoints

| Module | Concept |
| --- | --- |
| [INT-01](integration.md#int-01) | Sensor-to-alarm integration |
| [INT-02](integration.md#int-02) | Acknowledgement integration |
| [INT-03](integration.md#int-03) | Serial control integration |
| [INT-04](integration.md#int-04) | Restart recovery integration |
| [INT-05](integration.md#int-05) | Independent final variation |

## Common return paths

- An object exists but its name is inaccessible: [scope](cpp.md#cpp-08) and [lifetime](data.md#data-08).
- A pointer becomes invalid: [pointers](data.md#data-04), [lifetime](data.md#data-08), [dangling access](data.md#data-09).
- Cleanup is unclear: [destructors](objects.md#obj-05), [ownership](ownership.md#own-04), [RAII](ownership.md#own-05).
- Copying duplicates a resource incorrectly: [copying](objects.md#obj-07), [disabling copying](objects.md#obj-08), [move semantics](objects.md#obj-09).
- Button presses are missed: [cooperative scheduling](reactive.md#time-03), [debouncing](reactive.md#time-04).
- Timing fails near rollover: [elapsed-time comparison](reactive.md#time-01), [counter wraparound](reactive.md#time-02).
- Shared data behaves inconsistently: [atomicity](interrupts.md#irq-03), [synchronization](interrupts.md#irq-04).
