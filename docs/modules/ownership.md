# Storage and resource ownership

[Concept index](index.md) · [Learning plan](../learning-plan.md) · [Progress](../progress.md)

Target: Host. Status: proposed module outlines, not completed lessons or approved exercise studies.

Each module introduces one main concept. Listed prerequisites are direct requirements; follow their links recursively when needed. Grouping and numeric order are navigation aids, not an instruction to complete an entire family before another. Hardware modules require the exact board and wiring review; ESP-IDF/RTOS modules apply only to a supported selected target.

<a id="own-01"></a>
## OWN-01 — Automatic storage and stack use

- Direct prerequisites: [DATA-08](data.md#data-08)
- Mastery evidence: Explain automatic lifetime and inspect stack use without assuming every local is physically stored on a stack.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="own-02"></a>
## OWN-02 — Static storage duration

- Direct prerequisites: [DATA-08](data.md#data-08)
- Mastery evidence: Distinguish static storage duration from scope and object ownership.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="own-03"></a>
## OWN-03 — Dynamic allocation

- Direct prerequisites: [DATA-04](data.md#data-04), [DATA-08](data.md#data-08)
- Mastery evidence: Explain allocation/deallocation pairing, allocation failure, and why dynamic allocation is not the default for bounded paths.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="own-04"></a>
## OWN-04 — Resource ownership

- Direct prerequisites: [OBJ-05](objects.md#obj-05), [OBJ-08](objects.md#obj-08)
- Mastery evidence: Identify who acquires, borrows, and releases a simulated resource and reject double ownership.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="own-05"></a>
## OWN-05 — RAII

- Direct prerequisites: [OWN-04](ownership.md#own-04), [OBJ-06](objects.md#obj-06)
- Mastery evidence: Tie a resource's release to the owner's destructor in the accepted lifetime sequence.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="own-06"></a>
## OWN-06 — Unique ownership with unique_ptr

- Direct prerequisites: [OWN-05](ownership.md#own-05), [OBJ-09](objects.md#obj-09), [OWN-03](ownership.md#own-03)
- Mastery evidence: Explain unique ownership transfer where the target library supports it.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="own-07"></a>
## OWN-07 — Non-owning views

- Direct prerequisites: [DATA-09](data.md#data-09), [DATA-10](data.md#data-10)
- Mastery evidence: Describe a view's bounds and required backing-object lifetime; use span only where supported.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).

<a id="own-08"></a>
## OWN-08 — Buffer capacity policy

- Direct prerequisites: [DATA-02](data.md#data-02), [OBJ-03](objects.md#obj-03), [CPP-10](cpp.md#cpp-10)
- Mastery evidence: Define and test full/empty behavior for a bounded sample buffer.
- Lesson/exercise status: outline only. Before coding, prepare the focused exercise contract, UML study, C++ mapping, and test cases using the [module template](module-template.md).
