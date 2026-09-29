# Threshold indicator — worked reference example

This is the complete, commented reference implementation, not an unsolved starter.
The owner approved the [conception](../../docs/architecture/specs/threshold-indicator.md) before implementation. Read the [UML activity](../../docs/architecture/diagrams/threshold-indicator/01-activity-decision.md) alongside the source.

## Availability

Implemented locally on `codex/learning-plan`; not yet pushed to GitHub. A fresh remote clone currently does not contain this example. Once this branch is published:

```sh
git clone --branch codex/learning-plan https://github.com/benoit-bremaud/cpp-learning.git
cd cpp-learning
```

For the existing local checkout, open this repository in VS Code or another IDE. Run the commands below from the repository root. No microcontroller, SDK or network download is needed to build.

## Build and test

Requirements: CMake >=3.16, a C++17 compiler, and a supported build tool such as Make or Ninja.

```sh
cmake -S exercises/threshold-indicator -B /tmp/cpp-threshold-debug -DCMAKE_BUILD_TYPE=Debug
cmake --build /tmp/cpp-threshold-debug
ctest --test-dir /tmp/cpp-threshold-debug --output-on-failure
```

These build paths are for Linux/macOS; use an appropriate local directory on Windows. With a multi-configuration generator, also select `--config Debug` for the build and `-C Debug` for CTest. CTest exits nonzero on failure. Use `ctest --test-dir /tmp/cpp-threshold-debug -V` to see passing program output.

Compilation and passing tests are different observations. Ten decisions are checked, including exactly 30 and both integer limits; this does not establish all imaginable properties of future hardware software.

## Read the implementation

1. `include/threshold_indicator.hpp` declares the contract. `bool` is a true/false result, `int` is the whole-degree input, and `noexcept` promises that exceptions do not escape the function.
2. `src/threshold_indicator.cpp` defines the behavior. `threshold_celsius` names the fixed threshold so its meaning is visible. The strict comparison `>` matches the UML decision; equality follows the false branch.
3. The two returns correspond to the two terminal paths in the activity. A returned `true` requests an on state; it does not switch any GPIO.
4. `tests/threshold_indicator_test.cpp` supplies values and compares the result to independently written expectations. Its `main` is a test entry point, not production device logic.

The namespace `learning` groups the function's name. Include guards prevent repeated header declarations within one translation unit. These support details are supplied; understanding them is not required to follow the threshold decision.

## A controlled incorrect variation

After studying the correct version, change only `>` to `>=` in a disposable copy. Compilation should still succeed, but the 30-degree test must fail: expected false, obtained true. Restore `>` and verify the tests pass. This deliberately incorrect variant demonstrates a contract violation; it is not an alternative accepted design.

No design pattern is needed. A pure function keeps the example independent of sensors and makes its behavior directly testable. Decimal temperatures, sensor failures, hysteresis and physical LED control are outside this example.
