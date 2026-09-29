# Protocols and peripherals

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Selected board; parser logic also on host. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="io-01"></a>
## IO-01 — UART byte stream

- Direct prerequisites: [HW-06](hardware.md#hw-06)
- Mastery evidence: Explain byte arrival independently of application message boundaries.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="io-02"></a>
## IO-02 — Message framing

- Direct prerequisites: [IO-01](peripherals.md#io-01), [UML-04](uml.md#uml-04)
- Mastery evidence: Identify complete/incomplete frames according to a documented protocol.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="io-03"></a>
## IO-03 — Bounded parser

- Direct prerequisites: [IO-02](peripherals.md#io-02), [OWN-08](ownership.md#own-08), [STATE-04](reactive.md#state-04)
- Mastery evidence: Recover from malformed/oversized frames without exceeding capacity.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="io-04"></a>
## IO-04 — Byte order

- Direct prerequisites: [CPP-13](cpp.md#cpp-13), [DATA-01](data.md#data-01)
- Mastery evidence: Encode and decode a multibyte field in one specified byte order.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="io-05"></a>
## IO-05 — Explicit serialization

- Direct prerequisites: [IO-04](peripherals.md#io-04), [DATA-07](data.md#data-07)
- Mastery evidence: Serialize defined fields without depending on struct padding or memory layout.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="io-06"></a>
## IO-06 — I2C transaction

- Direct prerequisites: [HW-02](hardware.md#hw-02), [CPP-10](cpp.md#cpp-10)
- Mastery evidence: Trace one documented sensor transaction and handle missing-device/timeout outcomes.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="io-07"></a>
## IO-07 — SPI transaction

- Direct prerequisites: [HW-02](hardware.md#hw-02), [CPP-10](cpp.md#cpp-10)
- Mastery evidence: Explain selected device, mode, and transfer boundaries for one documented peripheral.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="io-08"></a>
## IO-08 — ADC sampling

- Direct prerequisites: [HW-02](hardware.md#hw-02), [CPP-03](cpp.md#cpp-03)
- Mastery evidence: Distinguish an ADC code from a physical voltage on the selected target.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="io-09"></a>
## IO-09 — Measurement calibration

- Direct prerequisites: [IO-08](peripherals.md#io-08), [CPP-14](cpp.md#cpp-14)
- Mastery evidence: Apply a stated calibration model and identify its uncertainty/limits.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="io-10"></a>
## IO-10 — PWM output

- Direct prerequisites: [HW-03](hardware.md#hw-03)
- Mastery evidence: Explain duty cycle independently of frequency and verify the configured output.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
