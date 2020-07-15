#include <iostream>

int main() {
    // change the value of a pointer
    int i = 10, j = 20;
    int *p = &i; 
    int *q = &j;
    std::cout << "p:" << p << " " << *p << std::endl;
    std::cout << "q:" << q << " " << *q << std::endl;

    // change the value of a pointer
    p = q;
    std::cout << "p:" << p << " " << *p << std::endl;
    std::cout << "q:" << q << " " << *q << std::endl;

    // change the value to which the pointer points
    *p = 100;
    std::cout << "p:" << p << " " << *p << std::endl;
    std::cout << "q:" << q << " " << *q << std::endl;

    return 0;
}
