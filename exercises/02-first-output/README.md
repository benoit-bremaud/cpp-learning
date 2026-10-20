# Laboratory 02 — first output

## Objective and prerequisites

Build and run one complete C++ program, then relate each runtime action to its UML activity.

Prerequisites: recognize the role of `main`, a C++ instruction, `std::cout`, a newline, and the return status. Review the course lessons “Un premier programme C++ complet” and “Plusieurs affichages, un seul ordre” if any of those terms are unfamiliar.

This is a host-only laboratory. It does not build firmware or access a microcontroller.

## Need and expected behavior

The program writes two lines in this exact order, then terminates successfully:

```text
Course ready
First program complete
```

The return status is 0. It is observed by the operating system and the test; it is not a third printed line.

## UML conception

Read the authoritative [activity diagram](../../docs/architecture/diagrams/foundation-practice-pack/01-activity-first-output.md) before the source. Its two write actions map to the two `std::cout` instructions in `src/main.cpp`. Its final action maps to `return 0;`.

## Build and verify

Run these commands from the repository root:

```sh
cmake -S exercises/02-first-output -B /tmp/cpp-first-output-debug -DCMAKE_BUILD_TYPE=Debug
cmake --build /tmp/cpp-first-output-debug
ctest --test-dir /tmp/cpp-first-output-debug --output-on-failure
```

Run the executable directly to observe its output:

```sh
/tmp/cpp-first-output-debug/first_output
```

The paths above suit Linux and macOS. On Windows, choose a local build directory. With a multi-configuration generator, also select `--config Debug` for the build and `-C Debug` for CTest.

## Practice on your own branch

Predict the result before each change, then build and run the program:

1. Change only `Course ready` to `Workshop ready`. Which UML action must change with the requirement?
2. Exchange the two output instructions. Does the program still contain both messages, and does it still satisfy the required order?
3. Remove the newline from the first message. What becomes observable in the terminal?
4. Restore the reference source and rerun CTest.

The committed test describes the accepted baseline. It is expected to fail while a variation deliberately changes that contract. Work on a local Git branch so the reference is easy to restore.

## Check your understanding

- Which instruction produces the first visible line?
- Does `return 0;` print the number zero?
- Why can a program compile successfully and still fail the output test?

The answers should mention instruction order, the process status, and the difference between valid C++ and the required behavior.

## Scope limit

No input, function decomposition, loop, test framework, or hardware API is introduced. The test launches the real executable and compares its complete observable output; it does not prove that a learner understands the program.
