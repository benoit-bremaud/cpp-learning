# Build and investigation tools

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Host unless specified. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="tool-01"></a>
## TOOL-01 — Compilation

- Direct prerequisites: None; start here when this concept is unfamiliar.
- Mastery evidence: Explain how one source file becomes an object file; recognize a compiler error.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="tool-02"></a>
## TOOL-02 — Linking

- Direct prerequisites: [TOOL-01](tools.md#tool-01)
- Mastery evidence: Explain how object files form a program; recognize an unresolved definition.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="tool-03"></a>
## TOOL-03 — Compiler warnings

- Direct prerequisites: [TOOL-01](tools.md#tool-01)
- Mastery evidence: Explain and correct one warning rather than suppressing it blindly.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="tool-04"></a>
## TOOL-04 — Running a test

- Direct prerequisites: [CPP-07](cpp.md#cpp-07), [TOOL-02](tools.md#tool-02), [UML-02](uml.md#uml-02)
- Mastery evidence: Run a supplied focused test and explain its expected versus observed result.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="tool-05"></a>
## TOOL-05 — Debugger breakpoints

- Direct prerequisites: [CPP-07](cpp.md#cpp-07), [TOOL-02](tools.md#tool-02)
- Mastery evidence: Stop a small program and inspect a variable before and after one operation.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="tool-06"></a>
## TOOL-06 — Cross-compilation

- Direct prerequisites: [TOOL-02](tools.md#tool-02)
- Mastery evidence: Distinguish host and target binaries and identify the selected target compiler.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="tool-07"></a>
## TOOL-07 — Flashing firmware

- Direct prerequisites: [TOOL-06](tools.md#tool-06), [HW-01](hardware.md#hw-01)
- Mastery evidence: Explain the selected board's flash procedure and verify the expected firmware starts.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
