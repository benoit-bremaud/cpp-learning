# UML-first learning method

## Learning agreement

Conversation and explanations are in French. Repository documentation, code, and commits remain in English. The progression has no calendar, estimated durations, or deadlines.

Every exercise has an authoritative conception study before implementation, including small exercises and variations. UML is part of learning to design, not a retrospective illustration. The owner validates the conception before coding; an assistant can explain the model and provide hints without supplying a completed implementation.

## Required conception deliverables

- Need, prerequisites, scope, numbered requirements, and acceptance criteria.
- Textual use cases with preconditions, success guarantees, and error extensions.
- Actual UML diagrams explaining the exercise's structure and behavior. Use a structural view to define types, public operations, and dependencies, and a behavioral view to define relevant scenarios or algorithms. Add use-case, state, activity, component, or sequence views according to the questions involved.
- C++ mapping: exact names, namespaces, types, signatures, visibility, constness, ownership, lifetimes, invariants, errors, and planned files where applicable.
- Requirement → UML element → planned code symbol → test-case traceability.
- Four-pass review: requirement coverage; dependency direction and SOLID; KISS/YAGNI/DRY; justified patterns and anti-patterns.
- Explicit validation status and an identified accepted revision before implementation.

PlantUML source is authoritative for the formal diagrams, with generated SVG previews and Markdown context. Keep these under `docs/architecture/diagrams/<exercise>/`; contracts belong in `docs/architecture/specs/<exercise>.md`. A diagram is not a reason to invent classes: model free functions and artifacts honestly.

## Meaning of exact correspondence

The accepted specification and UML form one design contract. Public names and signatures, responsibilities, dependency directions, ownership, lifetimes, modeled algorithm order, errors, and observable scenarios must match the implementation. Document the correspondence explicitly and check it during review.

UML does not specify every C++ statement. Local variable names and equivalent expressions remain implementation choices unless constrained by the model. New responsibilities, public helpers, types, dependencies, or observable behavior require a conception update and renewed validation. Code must not silently redefine the design.

## Completion gate

An exercise is complete when requirements pass their tests, UML renders successfully, the correspondence review has no unresolved divergence, and the learner can explain and modify the accepted design independently. Passing tests alone cannot establish architectural correspondence. Variations repeat the conception gate before implementation.

Future exercises receive their full study when introduced. Listing an exercise in the progression does not claim its study or implementation already exists.

## Diagram regeneration

From the repository root, run `JAVA_TOOL_OPTIONS=-Djava.awt.headless=true plantuml -nometadata -tsvg docs/architecture/diagrams/01-statistics/*.puml`. Headless mode avoids a display-server dependency; disabling embedded metadata avoids renderer-generated CRLF source comments in SVG files.
