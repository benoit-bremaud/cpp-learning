# Course website decision

[Authoritative conception](architecture/specs/course-website.md) · [Weighted comparison](architecture/decisions/website-tool-comparison.md)

The owner accepted Starlight and separate, physically independent website and practice repositories. Website: `benoit-bremaud/cpp-learning-course`. Practice: `benoit-bremaud/cpp-learning`, with module/project folders. Teaching pages and UI are French; code and engineering documents are English. A default export is allowed only in the website's `astro.config.mjs`.

The first local reader contains the proposed progression, UML method, practice instructions and three theoretical introductions. It does not claim that the 121 planned modules or runnable exercises are complete. Publication and CI approval remain separate from local implementation.
