# Integration checkpoints

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Chosen target; reuse approved concepts. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="int-01"></a>
## INT-01 — Sensor-to-alarm integration

- Direct prerequisites: [IO-06](peripherals.md#io-06), [STATE-03](reactive.md#state-03), [TIME-03](reactive.md#time-03), [TOOL-04](tools.md#tool-04)
- Mastery evidence: Validate the combined UML and demonstrate one sample-to-alarm behavior.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="int-02"></a>
## INT-02 — Acknowledgement integration

- Direct prerequisites: [INT-01](integration.md#int-01), [TIME-04](reactive.md#time-04), [STATE-04](reactive.md#state-04)
- Mastery evidence: Define and verify acknowledgement while a fault persists and after it clears.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="int-03"></a>
## INT-03 — Serial control integration

- Direct prerequisites: [INT-02](integration.md#int-02), [IO-03](peripherals.md#io-03)
- Mastery evidence: Verify complete command-to-state behavior against the accepted model.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="int-04"></a>
## INT-04 — Restart recovery integration

- Direct prerequisites: [INT-03](integration.md#int-03), [ROB-05](robustness.md#rob-05)
- Mastery evidence: Verify configured behavior across restart without silently changing the accepted state model.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="int-05"></a>
## INT-05 — Independent final variation

- Direct prerequisites: [INT-04](integration.md#int-04), [ROB-01](robustness.md#rob-01), [ROB-07](robustness.md#rob-07), [ROB-08](robustness.md#rob-08)
- Mastery evidence: Propose, model, implement, and verify a scoped variation with explicit limitations.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
