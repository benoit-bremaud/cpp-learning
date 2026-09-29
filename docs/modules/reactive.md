# Time and reactive behavior

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Host logic, then board. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="time-01"></a>
## TIME-01 — Elapsed-time comparison

- Direct prerequisites: [CPP-02](cpp.md#cpp-02), [CPP-05](cpp.md#cpp-05), [HW-06](hardware.md#hw-06)
- Mastery evidence: Trigger a periodic action without blocking the main loop.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="time-02"></a>
## TIME-02 — Counter wraparound

- Direct prerequisites: [TIME-01](reactive.md#time-01), [CPP-03](cpp.md#cpp-03)
- Mastery evidence: Explain the unsigned elapsed-time method and its interval/sampling assumptions.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="time-03"></a>
## TIME-03 — Cooperative scheduling

- Direct prerequisites: [TIME-01](reactive.md#time-01)
- Mastery evidence: Run two bounded activities without making either wait in a blocking delay.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="time-04"></a>
## TIME-04 — Button debouncing

- Direct prerequisites: [TIME-02](reactive.md#time-02), [HW-05](hardware.md#hw-05), [UML-04](uml.md#uml-04)
- Mastery evidence: Produce one stable transition from a modeled bounce sequence.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="state-01"></a>
## STATE-01 — State representation

- Direct prerequisites: [CPP-11](cpp.md#cpp-11), [UML-04](uml.md#uml-04)
- Mastery evidence: Represent exactly the states in the accepted model.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="state-02"></a>
## STATE-02 — Transition guards

- Direct prerequisites: [STATE-01](reactive.md#state-01), [CPP-05](cpp.md#cpp-05)
- Mastery evidence: Evaluate an event and guard without taking an unmodeled transition.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="state-03"></a>
## STATE-03 — Hysteresis

- Direct prerequisites: [STATE-02](reactive.md#state-02), [CPP-14](cpp.md#cpp-14)
- Mastery evidence: Use separate entry/exit thresholds and demonstrate behavior at boundaries.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="state-04"></a>
## STATE-04 — Fault recovery states

- Direct prerequisites: [STATE-02](reactive.md#state-02), [CPP-10](cpp.md#cpp-10)
- Mastery evidence: Define and test entry, recovery, and acknowledgement behavior for one modeled fault.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
