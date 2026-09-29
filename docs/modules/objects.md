# Objects and value semantics

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Host. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="obj-01"></a>
## OBJ-01 — Classes

- Direct prerequisites: [DATA-07](data.md#data-07)
- Mastery evidence: Map a modeled type to a C++ class with data and operations.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="obj-02"></a>
## OBJ-02 — Member visibility

- Direct prerequisites: [OBJ-01](objects.md#obj-01)
- Mastery evidence: Choose public and private boundaries according to the accepted contract.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="obj-03"></a>
## OBJ-03 — Invariants

- Direct prerequisites: [OBJ-02](objects.md#obj-02), [CPP-10](cpp.md#cpp-10)
- Mastery evidence: State which conditions must hold for every externally observable valid object state.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="obj-04"></a>
## OBJ-04 — Constructors

- Direct prerequisites: [OBJ-03](objects.md#obj-03), [DATA-08](data.md#data-08)
- Mastery evidence: Explain member initialization and construct an object in a defined valid state.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="obj-05"></a>
## OBJ-05 — Destructors

- Direct prerequisites: [OBJ-04](objects.md#obj-04), [DATA-08](data.md#data-08), [UML-02](uml.md#uml-02)
- Mastery evidence: Predict the destruction order of automatic objects in one modeled scope.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="obj-06"></a>
## OBJ-06 — Composition

- Direct prerequisites: [OBJ-05](objects.md#obj-05)
- Mastery evidence: Explain member construction/destruction order and whole/member lifetime.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="obj-07"></a>
## OBJ-07 — Copying values

- Direct prerequisites: [OBJ-04](objects.md#obj-04)
- Mastery evidence: Explain what copying a value object duplicates and demonstrate independent value state.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="obj-08"></a>
## OBJ-08 — Disabling copying

- Direct prerequisites: [OBJ-07](objects.md#obj-07)
- Mastery evidence: Reject copying when the accepted ownership contract forbids duplication.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="obj-09"></a>
## OBJ-09 — Move semantics

- Direct prerequisites: [OBJ-07](objects.md#obj-07), [DATA-03](data.md#data-03)
- Mastery evidence: Explain std::move as enabling move selection, a modeled transfer, and the specified moved-from state.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="obj-10"></a>
## OBJ-10 — Rule of Zero

- Direct prerequisites: [OBJ-06](objects.md#obj-06), [OBJ-09](objects.md#obj-09), [OWN-04](ownership.md#own-04)
- Mastery evidence: Explain why members can provide correct special-member behavior without handwritten resource management.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
