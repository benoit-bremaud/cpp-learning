# C foundations and interfaces

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Host, then selected driver. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="capi-01"></a>
## CAPI-01 — C versus C++ translation

- Direct prerequisites: [TOOL-02](tools.md#tool-02), [CPP-07](cpp.md#cpp-07)
- Mastery evidence: Explain why a .c file and a .cpp file may follow different language rules.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="capi-02"></a>
## CAPI-02 — Array-to-pointer decay

- Direct prerequisites: [CAPI-01](c-interfaces.md#capi-01), [DATA-10](data.md#data-10)
- Mastery evidence: Explain where array extent is lost at a C-style function boundary.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="capi-03"></a>
## CAPI-03 — C language linkage

- Direct prerequisites: [CAPI-01](c-interfaces.md#capi-01)
- Mastery evidence: Explain declaration/definition linkage and what extern "C" does not do.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="capi-04"></a>
## CAPI-04 — Function pointers

- Direct prerequisites: [DATA-04](data.md#data-04), [CPP-07](cpp.md#cpp-07)
- Mastery evidence: Invoke a callback with a matching function signature.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="capi-05"></a>
## CAPI-05 — Callback context lifetime

- Direct prerequisites: [CAPI-04](c-interfaces.md#capi-04), [DATA-09](data.md#data-09), [DATA-07](data.md#data-07)
- Mastery evidence: Keep callback state alive for the complete registration lifetime.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="capi-06"></a>
## CAPI-06 — Opaque driver handles

- Direct prerequisites: [OWN-05](ownership.md#own-05), [CAPI-03](c-interfaces.md#capi-03), [CPP-10](cpp.md#cpp-10)
- Mastery evidence: Wrap a simulated C handle with explicit ownership and failure behavior.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="capi-07"></a>
## CAPI-07 — Volatile hardware access

- Direct prerequisites: [DATA-04](data.md#data-04), [HW-01](hardware.md#hw-01)
- Mastery evidence: Explain volatile for documented hardware access without claiming atomicity or synchronization.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
