# Component diagram — course website

Status: accepted architecture; hosting/deployment pending. Source: [website conception](../../specs/course-website.md).

## Context

Separates course authoring/build, static delivery, and independently executable exercise code. Addresses WEB-03 and WEB-04 without adding a backend.

## Diagram

![Component diagram](03-component.svg)

[PlantUML source](03-component.puml).

## Notes

Starlight is accepted and the first local reader is implemented in the independent `cpp-learning-course` repository. Hosting/deployment remains pending. Content language is French; engineering artifacts and source code remain English.
