# Compile-time techniques

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Host; verify target support. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="gen-01"></a>
## GEN-01 — Constexpr evaluation

- Direct prerequisites: [CPP-07](cpp.md#cpp-07), [CPP-09](cpp.md#cpp-09)
- Mastery evidence: Distinguish a constant-expression-capable function from a guarantee of compile-time execution.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="gen-02"></a>
## GEN-02 — Compile-time assertions

- Direct prerequisites: [GEN-01](generic.md#gen-01)
- Mastery evidence: Reject a stated configuration constraint using static_assert.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="gen-03"></a>
## GEN-03 — Function templates

- Direct prerequisites: [CPP-07](cpp.md#cpp-07)
- Mastery evidence: Instantiate one justified operation for two supported types.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="gen-04"></a>
## GEN-04 — Class templates

- Direct prerequisites: [OBJ-06](objects.md#obj-06), [GEN-03](generic.md#gen-03)
- Mastery evidence: Describe which part of a value type varies by template argument.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="gen-05"></a>
## GEN-05 — Capacity as a template parameter

- Direct prerequisites: [GEN-04](generic.md#gen-04), [OWN-08](ownership.md#own-08), [GEN-02](generic.md#gen-02)
- Mastery evidence: Reject invalid capacities and explain storage for a bounded buffer instance.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="gen-06"></a>
## GEN-06 — Measuring abstraction cost

- Direct prerequisites: [GEN-05](generic.md#gen-05), [TOOL-06](tools.md#tool-06)
- Mastery evidence: Compare generated size/resource use rather than assuming a template is free or expensive.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
