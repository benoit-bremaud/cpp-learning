#include "threshold_indicator.hpp"

namespace learning {

bool should_light_indicator(int temperature_celsius) noexcept {
    const int threshold_celsius = 30;

    // Keep both branches explicit to match the introductory UML activity.
    if (temperature_celsius > threshold_celsius) {
        return true;
    } else {
        return false;
    }
}

} // namespace learning
