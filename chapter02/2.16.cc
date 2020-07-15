#include <iostream>

int main() {
    int i = 0, &r1 = i; 
    double d = 0, &r2 = d;

    // a.
    r2 = 3.14159; // valid, assigns the value 3.14159 to r2 
    std::cout << r2 << std::endl;

    // b.
    r2 = r1;  // valid, assigns the value 0 to r2
    std::cout << r2 << std::endl;

    // c.
    i = r2; // valid, assigns the value 0 to i
    std::cout << i << std::endl;

    // d.
    r1 = d; // valid, assigns the value 0 to r1
    std::cout << r1 << std::endl;

    return 0;
}
