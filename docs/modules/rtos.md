# FreeRTOS concepts

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: ESP32 with pinned SDK. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="rtos-01"></a>
## RTOS-01 — Tasks

- Direct prerequisites: [IDF-02](esp-idf.md#idf-02), [TIME-03](reactive.md#time-03)
- Mastery evidence: Explain one task's execution and lifetime without assuming a particular core count.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rtos-02"></a>
## RTOS-02 — Task stacks

- Direct prerequisites: [RTOS-01](rtos.md#rtos-01), [OWN-01](ownership.md#own-01)
- Mastery evidence: Interpret the selected SDK's stack-size units and inspect one task's stack margin.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rtos-03"></a>
## RTOS-03 — Task blocking

- Direct prerequisites: [RTOS-01](rtos.md#rtos-01)
- Mastery evidence: Distinguish waiting on an event from polling or blocking all useful execution.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rtos-04"></a>
## RTOS-04 — Task priorities

- Direct prerequisites: [RTOS-03](rtos.md#rtos-03)
- Mastery evidence: Explain priority effects and a starvation scenario under the selected scheduler.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rtos-05"></a>
## RTOS-05 — Queues

- Direct prerequisites: [RTOS-03](rtos.md#rtos-03), [OWN-08](ownership.md#own-08), [IRQ-04](interrupts.md#irq-04)
- Mastery evidence: Define item ownership, capacity, and behavior when a queue is full.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rtos-06"></a>
## RTOS-06 — Task notifications

- Direct prerequisites: [RTOS-03](rtos.md#rtos-03), [IRQ-02](interrupts.md#irq-02)
- Mastery evidence: Use an appropriate documented notification path and explain information that may be coalesced.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="rtos-07"></a>
## RTOS-07 — Mutexes

- Direct prerequisites: [RTOS-04](rtos.md#rtos-04), [IRQ-04](interrupts.md#irq-04)
- Mastery evidence: Protect task-shared state and explain priority inversion and ISR restrictions.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
