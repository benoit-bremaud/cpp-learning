# Laboratory 04 — target check

## Objective and prerequisites

Calculate an exact-match answer, use that Boolean to execute or skip one block, and identify the instruction that runs after both paths.

Prerequisites: constant and modifiable integers, equality, Boolean values, `if`, blocks, and console output. Review the course lessons “Égal ou différent” and “Première condition — exécuter ou sauter un bloc avec if” when needed.

This is a host-only laboratory. The measurement is a value written in the source; no sensor is connected.

## Need and expected behavior

The accepted baseline uses a target of 3 and a measurement count of 3. Exact equality is therefore true. The program writes:

```text
Target matched
Check finished
```

For a count of 2 or 4, exact equality is false and the first line is absent:

```text
Check finished
```

Each value describes a separate execution after editing and rebuilding. The program does not wait for a new measurement or repeat automatically.

## UML conception

Read the authoritative [activity diagram](../../docs/architecture/diagrams/foundation-practice-pack/03-activity-target-check.md) before the source.

The decision reads the already calculated `target_matched` value. The true path writes `Target matched`; the false path skips that action. Both paths meet before `Check finished`, which is why the completion line remains visible for every count.

The initial `measurement_count` action intentionally permits the baseline and both learner variations. The specification fixes 3 as the committed baseline.

## Build and verify

Run these commands from the repository root:

```sh
cmake -S exercises/04-target-check -B /tmp/cpp-target-check-debug -DCMAKE_BUILD_TYPE=Debug
cmake --build /tmp/cpp-target-check-debug
ctest --test-dir /tmp/cpp-target-check-debug --output-on-failure
```

Observe the program directly with:

```sh
/tmp/cpp-target-check-debug/target_check
```

The paths above suit Linux and macOS. On Windows, choose a local build directory. With a multi-configuration generator, also select `--config Debug` for the build and `-C Debug` for CTest.

## Practice on your own branch

Predict the complete output before every run:

1. Change `measurement_count` from 3 to 2. Follow the false UML path and verify the missing match line.
2. Change the count to 4. Explain why “greater than the target” still means “not exactly equal”.
3. Move `Check finished` inside the `if` block. With a count of 2, what required behavior disappears?
4. Restore the accepted source with a count of 3 and rerun CTest.

The baseline CTest intentionally fails for the count-2 and count-4 experiments because their output differs from the committed reference. Direct runs let you compare those variations with the UML contract.

## Check your understanding

- When is `target_matched` calculated?
- Does the `if` recalculate `measurement_count == measurement_target`?
- Does a false condition terminate the program?
- Why does `Check finished` run for both paths in the accepted source?
- Which values expose an accidental “below target” interpretation of the false path?

The answers should identify the stored Boolean, the skipped block, the common continuation, and the fact that both 2 and 4 are unequal to 3.

## Scope limit

This laboratory performs one decision during one execution. It introduces no input stream, loop, function decomposition, `else`, automatic measurement, or hardware output. The exact-output test verifies the baseline process behavior; the learner variations provide additional manual observations.
