# Course website proposal

Status: accepted for the first local reader implementation. The owner selected Starlight, a physically independent website repository, and one practice repository with independent module/project folders. Teaching content is French. The owner explicitly approved a default export only in `astro.config.mjs`. Deployment remains pending.

## Need and requirements

- WEB-01: find a single concept directly, without reading an entire chapter.
- WEB-02: follow a suggested progression or revisit a prerequisite through stable module links.
- WEB-03: show each available lesson's objective, explanation, UML conception, illustrative code, and review aid.
- WEB-04: direct all hands-on practice to dedicated GitHub repositories, with clone instructions, matching directory/file links, and accepted revisions. Practice takes place exclusively in a local IDE, never inside the course website.
- WEB-05: distinguish planned modules, published lessons, and runnable exercises; never imply an outline is a finished course.
- WEB-06: provide readable desktop/mobile navigation and keyword search, including code terms such as `const`, `RAII`, and `volatile`.
- WEB-07: retain the no-deadline learning method and UML-before-code contract.

Accepted language decision: teaching pages and the course interface are in French; code, code comments, and engineering documents remain in English. The owner explicitly approved this exception to the repository documentation-language rule.

## Accepted implementation

Starlight 0.42.4 with Astro 7.3.5 produces static pages and a local Pagefind search index. The [comparison](../decisions/website-tool-comparison.md) explains the choice. Use the standard content loader and docs schema; no custom application layer. No browser compiler, quizzes, exercise execution, or backend is in scope.

The initial reader includes the progression, UML method, practice instructions, and three theoretical introductions. It explicitly distinguishes these from complete lessons with accepted exercise studies. The detailed 121-module curriculum still requires joint review.

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

The public website repository is `benoit-bremaud/cpp-learning-course`, with its own local directory `/home/vev/ChatGPT/cpp-learning-course`. The public practice repository is `benoit-bremaud/cpp-learning`, locally `/home/vev/ChatGPT/C++`. Neither repository is nested inside the other. There is no submodule or shared runtime dependency.

Keep each practice specification, approved UML revision, examples, starter code, tests, and local build/run instructions together in its designated practice repository. Cross-link the course page to that exact repository and revision. The learner uses VS Code or another IDE after cloning.

Retain stable module IDs in directory names and page metadata. Link teaching examples to their GitHub source and exercises to the exact starting directory. Pin reproducible teaching references to the accepted commit; a separate repository link can expose the current branch. Exercise solutions, when written, are explicitly labeled so readers do not mistake them for the starting exercise.

At present, most local content is unpublished and the remote contains only the bootstrap README. Do not create public exercise links for local-only paths. Validate the chosen branch/commit and target file before enabling each link.

## Implementation files and boundaries

- Website `package.json` and lockfile pin the framework and validation tooling.
- `astro.config.mjs` configures French navigation, Starlight, and the anticipated GitHub Pages project base. Its default export is the sole approved exception.
- `src/content.config.ts` declares the docs collection with named exports.
- `src/content/docs/` owns French reader content and stable concept URLs.
- `src/styles/custom.css` holds restrained reading tokens and preserves framework navigation behavior.
- `tests/reader.test.mjs` validates generated local links, anchors, assets and search artifacts.
- Practice specifications, UML sources, starter code and tests stay in the independent practice repository. New exercise implementations still require accepted exercise studies.
- CI workflows and deployment remain a subsequent, explicitly approved step.

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

Requirements: WEB-01–WEB-07 map directly to the reader flow, navigation, content contract, and validation checks above. Dependencies: content and approved diagrams feed the static site; examples remain separately executable and do not depend on Starlight. Simplicity: a documentation theme and local search satisfy the present need. Patterns: no application framework layers, API service, or custom content database are justified.

Pending decisions: joint review of the full pedagogical catalog, exact hardware, and publication workflow. Framework, repository separation, language and the narrow configuration exception are accepted.

## UML views

- [Static site components](../diagrams/course-website/03-component.md).
- [Find a module and open its exercise](../diagrams/course-website/02-sequence-open-exercise.md).

No domain class hierarchy or persistent application state is required for this static course reader. Practice runs only from a cloned repository in the learner's IDE. The use case is a learner locating a concept, reading its lesson and conception, and opening an available exercise at the specified GitHub revision. If no lesson or exercise exists, show its planned status and omit the nonexistent target link.
