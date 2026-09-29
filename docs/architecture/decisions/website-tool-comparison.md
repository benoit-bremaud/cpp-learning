# Course website tool comparison

Status: researched comparison for the clarified read-only course scenario; scores and weights remain reviewable analyst judgments. The remembered tool is confirmed as VitePress; it is a candidate, not a preselected winner. No implementation has started.

## Accepted needs and assumptions

Accepted: French teaching/interface, English code, very small revisitable modules, complete UML studies, and no learning deadlines. The website contains course material only. All practice is done by cloning dedicated repositories and working in VS Code or another local IDE. No browser exercises, quizzes, compiler, or execution sandbox are in scope.

Scoring scenario: a public, primarily personal reading site with technical lessons, strong concept lookup, static hosting, and links to practice repositories. No learner account requirement has been established. Dedicated practice-repository granularity remains pending; it does not materially distinguish the site generators. Proposed weights and scores are analyst judgments, not benchmarks or publisher ratings. No comparative browser performance/accessibility test has been run.

## Method

Rate each criterion from 0 to 10: 10 means an excellent fit for this scenario with minimal integration friction; 5 means feasible with substantial extra work or lifecycle uncertainty. Score out of 100 = sum(weight percentage × criterion score) / 10. Do not count a plugin or custom implementation as a native feature.

| Criterion | Weight | Starlight (Astro) | VitePress | Material for MkDocs | Zensical | Docusaurus |
| --- | --- | --- | --- | --- | --- | --- |
| Lesson presentation and small-module navigation | 25% | 10 | 9 | 9 | 8 | 9 |
| Search without a required external service | 20% | 10 | 9 | 9 | 9 | 7 |
| Authoring/configuration simplicity for this course | 35% | 8 | 9 | 8 | 8 | 7 |
| Maintenance outlook and extension confidence | 10% | 9 | 9 | 4 | 6 | 9 |
| Static delivery, code links, and generated UML integration | 10% | 10 | 10 | 10 | 10 | 10 |
| **Weighted total / 100** | **100%** | **92.0** | **91.0** | **82.5** | **82.0** | **80.0** |

The earlier provisional interaction criterion is removed because the learner explicitly places all practice in a cloned repository/local IDE. Its 15% weight is assigned to authoring simplicity. No framework earns points for browser exercises, a compiler, quizzes, or accounts that are outside this scope.

## Verified capabilities and interpretation

### Starlight with Astro

Includes Pagefind search without additional setup and documentation-oriented components such as steps, tabs, cards, and asides. Supports MDX/Markdoc components and integrations with several UI frameworks. These directly support lesson structure without requiring custom instructional layout code. Its two configuration layers (Astro and Starlight), content conventions, and optional component syntax add authoring concepts compared with a plain VitePress Markdown setup.

Sources: [search](https://starlight.astro.build/guides/site-search/), [components](https://starlight.astro.build/components/using-components/), [steps](https://starlight.astro.build/components/steps/), [content authoring](https://starlight.astro.build/guides/authoring-content/).

The 10 for lesson presentation is an assessment of the ready-made teaching primitives, not a claim of perfect usability. The search advantage reflects default setup and integration, not measured French or C++ retrieval accuracy.

### VitePress

Generates documentation from Markdown, provides configurable sidebar navigation, offers local search when enabled, and allows Vue components within Markdown. This is a close fit with the presentation the learner already likes. Its higher simplicity score reflects a relatively direct Markdown/Vue workflow; the lower lesson-presentation score reflects additional assembly for the desired teaching-page components.

Sources: [overview](https://vitepress.dev/guide/what-is-vitepress), [sidebar](https://vitepress.dev/reference/default-theme-sidebar), [search](https://vitepress.dev/reference/default-theme-search), [Vue components](https://vitepress.dev/guide/using-vue).

The learner's familiarity is a tie-break consideration, not secretly added to the numeric score.

### Docusaurus

Supports React components in MDX and documentation versioning. Search has official Algolia support; local search is provided through community plugins. Its lower score reflects extra integration for the selected self-contained search scenario and configuration/features not currently needed by a reading-focused course. It is not inherently unsuitable for teaching or static hosting.

Sources: [MDX/React](https://docusaurus.io/docs/markdown-features/react), [search](https://docusaurus.io/docs/search), [versioning](https://docusaurus.io/docs/versioning).

React/MDX extensibility does not earn extra points here because practice is explicitly outside the website. Reassess if maintained parallel course versions become a requirement.

### Material for MkDocs

Offers technical Markdown presentation, configurable code blocks, local search, and diagram support. Its maintainers announced maintenance mode and a shift of new development to Zensical. The low maintenance score penalizes starting a new growing course on that trajectory; it does not mean existing sites stop working or have no fixes.

Sources: [search](https://squidfunk.github.io/mkdocs-material/setup/setting-up-site-search/), [code blocks](https://squidfunk.github.io/mkdocs-material/reference/code-blocks/), [maintenance announcement](https://squidfunk.github.io/mkdocs-material/changelog/).

### Zensical

The successor developed by the Material team uses Rust/Python tooling and supports familiar documentation authoring. It supports substantial MkDocs/Material configuration compatibility while plugin replacements and extension APIs continue evolving. The uncertainty discount concerns extension planning for this new course; planned roadmap capabilities are not treated as delivered.

Sources: [getting started](https://zensical.org/docs/get-started/), [compatibility](https://zensical.org/docs/compatibility/mkdocs/), [roadmap](https://zensical.org/roadmap/).

## Features that do not distinguish the candidates strongly

All candidates can link to GitHub source and display generated PlantUML SVG files. The UML contract therefore remains independent of the site framework. Mermaid convenience is not a substitute for formal UML correctness.

Browser quizzes, code execution, IDE integration, and synchronized learner accounts are outside this site's confirmed reading-only scope. Practice repositories must provide local build/run/test instructions and the matching approved design. This separation is independent of the documentation framework.

French pages with English code do not require maintaining two language versions of the course. Translate the interface and teach in French; keep identifiers/code in English.

## Sensitivity and recommendation

For the clarified scenario, **Starlight ranks first at 92/100**, with **VitePress close at 91/100**. The one-point gap is smaller than uncertainty in subjective scoring; it is not a measured quality difference. Under the owner's rule of selecting the highest-scoring suitable candidate, Starlight is the recommended choice for review.

Transferring 5 percentage points from search to authoring simplicity yields a 91/100 tie. Transferring 10 points yields VitePress 91 and Starlight 90. The winner depends on how strongly the owner values ready-made navigation/search/presentation versus a minimal familiar authoring setup. Do not adjust weights retrospectively to force a favorite.

Before implementation, review these priorities and the resulting framework conception. A representative reading page should then verify UML readability, C++ code presentation, concept search, and links to local-practice repositories. The repository organization decision does not need to change this framework scoring.
