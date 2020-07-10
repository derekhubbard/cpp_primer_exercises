#include <iostream>

int main() {
    int sum = 0;
    for (int value = 50; value <= 100; ++value) {
        sum += value;
    }
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}
