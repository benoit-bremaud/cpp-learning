# Native ESP-IDF

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: ESP32 with pinned SDK. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="idf-01"></a>
## IDF-01 — ESP-IDF components

- Direct prerequisites: [TOOL-06](tools.md#tool-06), [CAPI-03](c-interfaces.md#capi-03)
- Mastery evidence: Locate a component's sources/dependencies in a reproducible pinned SDK build.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="idf-02"></a>
## IDF-02 — ESP-IDF startup

- Direct prerequisites: [IDF-01](esp-idf.md#idf-01), [UML-02](uml.md#uml-02)
- Mastery evidence: Explain the C linkage and role of app_main for the selected SDK.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="idf-03"></a>
## IDF-03 — SDK configuration

- Direct prerequisites: [IDF-01](esp-idf.md#idf-01)
- Mastery evidence: Locate an exercised feature's configuration and record its effect on the build.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="idf-04"></a>
## IDF-04 — Driver error handling

- Direct prerequisites: [IDF-02](esp-idf.md#idf-02), [CAPI-06](c-interfaces.md#capi-06), [CPP-10](cpp.md#cpp-10)
- Mastery evidence: Translate a driver failure into the accepted application behavior.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="idf-05"></a>
## IDF-05 — Platform adapter replacement

- Direct prerequisites: [IDF-04](esp-idf.md#idf-04), [IO-06](peripherals.md#io-06)
- Mastery evidence: Replace an Arduino adapter with an IDF adapter while preserving the tested logic contract.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
