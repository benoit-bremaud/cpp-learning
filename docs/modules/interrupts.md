# Interrupts and shared data

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Selected target. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="irq-01"></a>
## IRQ-01 — Interrupt execution context

- Direct prerequisites: [CAPI-04](c-interfaces.md#capi-04), [HW-06](hardware.md#hw-06), [UML-02](uml.md#uml-02)
- Mastery evidence: Explain how an ISR differs from main-loop execution on the selected target.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="irq-02"></a>
## IRQ-02 — Deferred interrupt work

- Direct prerequisites: [IRQ-01](interrupts.md#irq-01), [TIME-03](reactive.md#time-03)
- Mastery evidence: Capture minimal event information and process it outside the ISR.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="irq-03"></a>
## IRQ-03 — Atomicity

- Direct prerequisites: [IRQ-01](interrupts.md#irq-01), [CPP-02](cpp.md#cpp-02)
- Mastery evidence: Distinguish an indivisible operation from an operation that can be interrupted.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="irq-04"></a>
## IRQ-04 — Shared-state synchronization

- Direct prerequisites: [IRQ-03](interrupts.md#irq-03), [CAPI-07](c-interfaces.md#capi-07)
- Mastery evidence: Explain why volatile does not establish safe communication between execution contexts.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="irq-05"></a>
## IRQ-05 — Critical sections

- Direct prerequisites: [IRQ-04](interrupts.md#irq-04)
- Mastery evidence: Protect one shared update using a documented target mechanism and bounded protected work.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="irq-06"></a>
## IRQ-06 — Event overflow policy

- Direct prerequisites: [IRQ-02](interrupts.md#irq-02), [OWN-08](ownership.md#own-08), [IRQ-05](interrupts.md#irq-05)
- Mastery evidence: Specify what happens when events arrive faster than they are processed.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
