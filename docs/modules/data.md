# Data access and lifetime

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Host. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="data-01"></a>
## DATA-01 — Built-in arrays

- Direct prerequisites: [CPP-06](cpp.md#cpp-06)
- Mastery evidence: Distinguish element count, valid indices, and storage occupied by an array.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="data-02"></a>
## DATA-02 — Fixed-size standard arrays

- Direct prerequisites: [DATA-01](data.md#data-01)
- Mastery evidence: Use std::array where supported and explain its fixed capacity and value semantics.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="data-03"></a>
## DATA-03 — References

- Direct prerequisites: [CPP-07](cpp.md#cpp-07), [CPP-08](cpp.md#cpp-08)
- Mastery evidence: Explain aliasing and how a reference parameter affects the caller's object.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="data-04"></a>
## DATA-04 — Pointers

- Direct prerequisites: [CPP-07](cpp.md#cpp-07), [DATA-01](data.md#data-01)
- Mastery evidence: Distinguish an address, the pointed-to object, and dereferencing.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="data-05"></a>
## DATA-05 — Null pointers

- Direct prerequisites: [DATA-04](data.md#data-04), [CPP-05](cpp.md#cpp-05)
- Mastery evidence: Handle an absent pointer before any dereference.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="data-06"></a>
## DATA-06 — Const-reference parameters

- Direct prerequisites: [DATA-03](data.md#data-03), [CPP-09](cpp.md#cpp-09)
- Mastery evidence: Explain a borrowed read-only parameter without claiming the underlying object is immutable everywhere.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="data-07"></a>
## DATA-07 — Structs

- Direct prerequisites: [CPP-07](cpp.md#cpp-07), [UML-01](uml.md#uml-01)
- Mastery evidence: Group related data and map each member to the accepted structure diagram.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="data-08"></a>
## DATA-08 — Object lifetime

- Direct prerequisites: [CPP-08](cpp.md#cpp-08), [DATA-07](data.md#data-07)
- Mastery evidence: Distinguish the existence of an object from the visibility of its name.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="data-09"></a>
## DATA-09 — Dangling access

- Direct prerequisites: [DATA-08](data.md#data-08), [DATA-03](data.md#data-03), [DATA-04](data.md#data-04)
- Mastery evidence: Identify a pointer or reference whose target no longer exists and redesign the lifetime relationship.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="data-10"></a>
## DATA-10 — Bounds contracts

- Direct prerequisites: [DATA-01](data.md#data-01), [DATA-04](data.md#data-04), [CPP-10](cpp.md#cpp-10)
- Mastery evidence: Specify pointer-plus-length preconditions and reject or avoid out-of-bounds access.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
