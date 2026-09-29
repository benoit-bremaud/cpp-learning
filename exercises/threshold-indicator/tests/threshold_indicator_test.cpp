#include "threshold_indicator.hpp"

#include <iostream>
#include <limits>

int main() {
    struct TestCase {
        int temperature_celsius;
        bool expected;
    };

    const TestCase cases[] = {
        {29, false},
        {30, false},
        {31, true},
        {0, false},
        {-10, false},
        {std::numeric_limits<int>::min(), false},
        {std::numeric_limits<int>::max(), true},
        // Consecutive calls must not latch a previous decision.
        {31, true},
        {29, false},
        {31, true},
    };

    int failures = 0;
    for (const auto& test_case : cases) {
        const bool actual = learning::should_light_indicator(test_case.temperature_celsius);
        if (actual != test_case.expected) {
            ++failures;
            std::cerr << "FAIL: temperature=" << test_case.temperature_celsius
                      << ", expected=" << std::boolalpha << test_case.expected
                      << ", actual=" << actual << '\n';
        }
    }

    // Explicit checks remain active in Release builds with NDEBUG defined.
    if (failures != 0) {
        return 1;
    }
    std::cout << "PASS: all 10 decisions match the contract.\n";
    return 0;
}
