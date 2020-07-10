#include <iostream>

int main() {
    int num = 10, end = 0;
    int result = 0;
    while (num >= end) {
        result+= num;
        num--;
    }

    std::cout << "The result is " << result << std::endl;
}
