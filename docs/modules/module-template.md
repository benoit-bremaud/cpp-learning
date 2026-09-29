# Focused module template

Status: template, not a completed lesson. One module introduces one main concept; integration checkpoints explicitly combine concepts already studied.

## Identity and scope

- Stable module ID and searchable concept name:
- One learning objective:
- Direct prerequisites with links:
- Host or exact target/toolchain requirements:
- Concepts deliberately outside this module:

## Understand

Start from one concrete situation and a precise question. State the expected result before explaining the mechanism. Include a worked example with step-by-step commentary and a counterexample showing a common misconception; identify illustrative diagnostics as such. Explain the idea in plain language. Define unfamiliar terms. Make any necessary C detour explicit and link to its own module rather than embedding another full lesson. Include a short retrieval question before showing an answer.

## Design before code

State the exercise need, requirements, preconditions, observable behavior, boundaries, and error cases. Provide real UML structure and behavior views at the appropriate level. Model free functions honestly; do not create classes merely to fill a diagram.

Map the accepted design to exact C++ names, signatures, visibility, ownership, and lifetimes as applicable. Link requirements to UML elements, proposed source locations, and tests. The conception is complete and validated before the exercise implementation begins.

## Practice

Give a focused task, its expected behavior, hints separate from the solution, and meaningful normal/boundary/error checks. Provide a minimal self-contained fixture: revisiting a module must not require rebuilding all previous exercises. Prior concepts may be supplied as explained support code once that code's own design is approved.

The course website is for reading only. Link to a dedicated practice repository, its clone instructions, the matching example/exercise directory, and accepted revision. All hands-on work runs in VS Code or another local IDE after cloning. Do not publish links to files that do not exist on GitHub yet. Preserve the exercise specification beside the source.

## Verify understanding

Ask the learner to explain the concept, justify one design choice, and solve a small variation. Validate any changed conception before implementing the variation. Record test and diagram/code correspondence evidence; a passing copy-pasted solution alone does not establish mastery.

## Return later

- Misconception to watch for:
- One retrieval question:
- One small retry exercise:
- Prerequisite to revisit if this still feels unclear:
- Links to related concepts without making them extra requirements:

Record status and evidence in the [progress tracker](../progress.md). Revisit is an ordinary learning state, not a failure.

## Good practices and pattern decisions

Explain clear naming, initial state, responsibilities, error handling and expected behavior from the first applicable example. Teach patterns only when a present problem motivates them. A dedicated pattern module compares the direct solution, a changed requirement, alternatives, the selected pattern and its costs. Include when not to use it. Distinguish C++ idioms such as RAII from design patterns, and state machines from the State pattern. No pattern is required merely to populate UML views.
