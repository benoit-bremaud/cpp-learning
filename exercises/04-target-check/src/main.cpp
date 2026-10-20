#include <iostream>

int main() {
    const int measurement_target = 3;
    int measurement_count = 3;
    bool target_matched = measurement_count == measurement_target;

    if (target_matched) {
        std::cout << "Target matched\n";
    }
    std::cout << "Check finished\n";
    return 0;
}
