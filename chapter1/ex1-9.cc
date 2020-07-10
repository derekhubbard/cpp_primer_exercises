#include <iostream>

int main() {
    int num = 50, end = 100;
    int result = 0;;
    while (num <= end) {
        result += num;
        ++num;
    }

    std::cout << "The sum is " << result << std::endl;
}
