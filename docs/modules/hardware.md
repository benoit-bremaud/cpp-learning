# Board and GPIO foundations

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Board selected before wiring. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="hw-01"></a>
## HW-01 — Board identification

- Direct prerequisites: [TOOL-06](tools.md#tool-06)
- Mastery evidence: Locate the exact board/SoC documentation and distinguish board pins from peripheral capabilities.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="hw-02"></a>
## HW-02 — Logic voltage compatibility

- Direct prerequisites: [HW-01](hardware.md#hw-01)
- Mastery evidence: Check the documented electrical compatibility of the selected signal connection.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="hw-03"></a>
## HW-03 — GPIO output

- Direct prerequisites: [HW-02](hardware.md#hw-02), [TOOL-07](tools.md#tool-07), [CPP-07](cpp.md#cpp-07)
- Mastery evidence: Drive one LED using the documented pin and circuit, with known active level.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="hw-04"></a>
## HW-04 — GPIO input

- Direct prerequisites: [HW-02](hardware.md#hw-02), [TOOL-07](tools.md#tool-07), [CPP-05](cpp.md#cpp-05)
- Mastery evidence: Read a digital input and explain floating versus defined input level.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="hw-05"></a>
## HW-05 — Pull-up and pull-down bias

- Direct prerequisites: [HW-04](hardware.md#hw-04)
- Mastery evidence: Explain the selected button circuit's idle and pressed values.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="hw-06"></a>
## HW-06 — Arduino execution cycle

- Direct prerequisites: [HW-03](hardware.md#hw-03), [UML-02](uml.md#uml-02)
- Mastery evidence: Trace setup and repeated loop calls for the selected Arduino core.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
