#ifndef LEARNING_THRESHOLD_INDICATOR_HPP
#define LEARNING_THRESHOLD_INDICATOR_HPP

namespace learning {

/// Return whether the indicator should be on for a whole-degree Celsius input.
/// The threshold is exclusive: exactly 30 returns false. Accepts every int value.
/// This decision has no hardware effects or memory of earlier calls.
bool should_light_indicator(int temperature_celsius) noexcept;

} // namespace learning

#endif
