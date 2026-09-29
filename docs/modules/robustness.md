# Verification and robustness

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Target-dependent; some logic on host. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="rob-01"></a>
## ROB-01 — Firmware memory report

- Direct prerequisites: [TOOL-06](tools.md#tool-06), [OWN-01](ownership.md#own-01), [OWN-02](ownership.md#own-02), [OWN-03](ownership.md#own-03)
- Mastery evidence: Interpret code/static-memory sizes and distinguish them from runtime peak usage.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rob-02"></a>
## ROB-02 — Fault backtraces

- Direct prerequisites: [TOOL-05](tools.md#tool-05), [IDF-02](esp-idf.md#idf-02)
- Mastery evidence: Resolve one controlled failure to its relevant source location using supported tooling.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rob-03"></a>
## ROB-03 — Watchdog behavior

- Direct prerequisites: [TIME-03](reactive.md#time-03), [IDF-03](esp-idf.md#idf-03)
- Mastery evidence: Explain a configured watchdog's monitored condition and investigate a controlled reset.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rob-04"></a>
## ROB-04 — Configuration persistence

- Direct prerequisites: [IO-05](peripherals.md#io-05), [IDF-04](esp-idf.md#idf-04)
- Mastery evidence: Specify defaults, validation, and a write policy for one persisted configuration.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rob-05"></a>
## ROB-05 — Interrupted writes

- Direct prerequisites: [ROB-04](robustness.md#rob-04), [STATE-04](reactive.md#state-04)
- Mastery evidence: Define and test recovery after a simulated or controlled interrupted update.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rob-06"></a>
## ROB-06 — Sleep and wakeup

- Direct prerequisites: [HW-01](hardware.md#hw-01), [IDF-03](esp-idf.md#idf-03), [STATE-04](reactive.md#state-04)
- Mastery evidence: Explain retained/lost state and a supported wakeup source for the chosen mode.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rob-07"></a>
## ROB-07 — Timing measurement

- Direct prerequisites: [TIME-03](reactive.md#time-03), [TOOL-05](tools.md#tool-05)
- Mastery evidence: Measure an observed execution interval and distinguish measurement from a worst-case guarantee.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rob-08"></a>
## ROB-08 — Sensor fault injection

- Direct prerequisites: [IO-06](peripherals.md#io-06), [STATE-04](reactive.md#state-04)
- Mastery evidence: Demonstrate specified behavior for a disconnected or failing sensor.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
