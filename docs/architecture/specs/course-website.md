# Course website proposal

Status: proposed, awaiting owner validation. No website code, dependencies, hosting configuration, or deployment workflow has been created. The requested direction is a navigable course with direct GitHub links to exercises/examples; the remembered framework is confirmed as VitePress. The owner requested a scored comparison before choosing the implementation tool.

## Need and requirements

- WEB-01: find a single concept directly, without reading an entire chapter.
- WEB-02: follow a suggested progression or revisit a prerequisite through stable module links.
- WEB-03: show each available lesson's objective, explanation, UML conception, illustrative code, and review aid.
- WEB-04: direct all hands-on practice to dedicated GitHub repositories, with clone instructions, matching directory/file links, and accepted revisions. Practice takes place exclusively in a local IDE, never inside the course website.
- WEB-05: distinguish planned modules, published lessons, and runnable exercises; never imply an outline is a finished course.
- WEB-06: provide readable desktop/mobile navigation and keyword search, including code terms such as `const`, `RAII`, and `volatile`.
- WEB-07: retain the no-deadline learning method and UML-before-code contract.

Accepted language decision: teaching pages and the course interface are in French; code, code comments, and engineering documents remain in English. The owner explicitly approved this exception to the repository documentation-language rule.

## Candidate implementation pending comparison

VitePress was the initial candidate. Read the [scored tool comparison](../decisions/website-tool-comparison.md) before selecting a framework; Starlight currently leads under provisional weights. The remaining VitePress-specific paths below are a candidate design and must be revised if another tool is selected. Use a pinned stable release of the selected documentation framework. The framework produces a static website from Markdown, supports a sidebar, page outline, syntax-highlighted code, and local search. Keep customization limited to course navigation, typography, and accessible UML presentation. The learner confirmed a reading-only website and exclusively local practice from cloned repositories. No browser compiler, quizzes, exercise execution, or backend is in scope.

Official references: [VitePress overview](https://vitepress.dev/guide/what-is-vitepress), [local search](https://vitepress.dev/reference/default-theme-search), [deployment guide](https://vitepress.dev/guide/deploy).

## Reader experience

The landing page opens onto the course map and available lessons. The sidebar groups small modules by subject; a concept index and search give direct access. Each module has a permanent ID and page URL. The page outline links to explanation, conception, practice, and verification.

A module page presents:

1. One objective and prerequisite links.
2. A concise explanation and a concrete situation.
3. The complete approved exercise conception, with readable rendered UML and source links.
4. Illustrative code and links to dedicated practice repositories; clone/build/exercise instructions live with the practice code. Direct links appear only when their targets exist publicly.
5. Expected checks, common misconceptions, and a small retry task.
6. Related/next modules, with an explicit available/planned status.

Proposed navigation groups: Course map, Modules, UML method, Hardware setup, Examples and exercises, Glossary. Planned modules can remain visible in the map without empty pages masquerading as lessons. A local draft preview may show work in progress with a clear label.

## Repository and link policy

The existing `benoit-bremaud/cpp-learning` repository is available for the learning project. The user now explicitly requests dedicated repositories to clone for practice. Decide whether practice uses one repository with module/project folders or multiple project/module repositories before creating additional remotes. The site repository and practice repository mapping must be explicit and must not be inferred from a generic GitHub link.

Keep each practice specification, approved UML revision, examples, starter code, tests, and local build/run instructions together in its designated practice repository. Cross-link the course page to that exact repository and revision. The learner uses VS Code or another IDE after cloning.

Retain stable module IDs in directory names and page metadata. Link teaching examples to their GitHub source and exercises to the exact starting directory. Pin reproducible teaching references to the accepted commit; a separate repository link can expose the current branch. Exercise solutions, when written, are explicitly labeled so readers do not mistake them for the starting exercise.

At present, most local content is unpublished and the remote contains only the bootstrap README. Do not create public exercise links for local-only paths. Validate the chosen branch/commit and target file before enabling each link.

## Planned files and boundaries

- `package.json` and a lockfile: documentation commands and pinned VitePress dependency.
- `course/.vitepress/`: site configuration and only necessary theme adjustments.
- `course/index.md`: reader-facing course map.
- `course/modules/<stable-module-id>.md`: one published lesson per concept; migrate the relevant outline when a lesson is authored rather than maintain duplicate authoritative lesson text.
- `docs/modules/`: current planning catalog until migration; indexes must explicitly link to a published lesson when it exists.
- `docs/architecture/`: authoritative engineering studies and PlantUML sources; generated SVGs are embedded by the site without maintaining a second diagram source.
- In each designated practice repository, `examples/<stable-module-id>/` and `exercises/<stable-module-id>/`: approved C++/C examples and learner exercises, created progressively; do not assume these are inside the site repository.
- Tests beside the relevant implementation or in its documented test directory.
- A GitHub Pages workflow and Pages settings are a later deployment step requiring explicit approval under the project rules.

VitePress's conventional configuration uses a default export. The current project rule forbids default exports. Before configuration code is written, validate a narrowly scoped framework-configuration exception with the owner or select a documented compatible configuration mechanism that satisfies the rule; do not silently relax it for application code.

## Hosting proposal

GitHub Pages is a candidate for the static public course. Determine the site repository and Pages settings before fixing the base path or announcing a live URL; do not assume practice repositories determine the site URL. This is a hosting proposal, not an existing deployment.

First implement and verify a local preview after design approval. Then prepare publication for review. The owner performs pushes under current global rules; creating or modifying CI workflows requires explicit approval. No PR is created automatically.

## Validation plan

- Production build succeeds with broken internal links treated as failures.
- Stable module URLs, sidebar navigation, prerequisite links, and search work.
- UML SVGs render legibly on desktop and mobile; source links are accessible.
- Keyboard navigation and enlarged text remain usable.
- Each enabled GitHub link resolves to a public file/directory at the intended revision.
- Planned versus available status matches the actual content and executable artifacts.
- Firmware checks remain separate from website checks.

## Design review

Requirements: WEB-01–WEB-07 map directly to the reader flow, navigation, content contract, and validation checks above. Dependencies: content and approved diagrams feed the static site; examples remain separately executable and do not depend on VitePress. Simplicity: a documentation theme and local search satisfy the present need. Patterns: no application framework layers, API service, or custom content database are justified.

Pending decisions: review the clarified reading-only comparison (Starlight 92, VitePress 91); confirm practice-repository granularity, site/practice mapping, and initial local-preview scope. Course language is accepted. The full pedagogical catalog still requires joint review independently of website implementation.

## UML views

- [Static site components](../diagrams/course-website/03-component.md).
- [Find a module and open its exercise](../diagrams/course-website/02-sequence-open-exercise.md).

No domain class hierarchy or persistent application state is required for this static course reader. Practice runs only from a cloned repository in the learner's IDE. The use case is a learner locating a concept, reading its lesson and conception, and opening an available exercise at the specified GitHub revision. If no lesson or exercise exists, show its planned status and omit the nonexistent target link.
