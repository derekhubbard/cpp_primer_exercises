#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;

    int begin, end;
    if (num1 < num2) {
        begin = num1;
        end = num2;
    }
    else {
        begin = num2;
        end = num1;
    }
    
    while (begin <= end) {
        std::cout << begin << std::endl;
        begin++;
    }

    return 0;
}
