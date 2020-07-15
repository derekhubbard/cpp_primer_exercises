#include <iostream>

int main() {
    int i = 42; // assigns the value 42 to the int variable i
    int *p1 = &i; // assigns the address of i to the int pointer p1
    *p1 = *p1 * *p1; // assigns the object the pointer p1 is pointing to the value of the expression 42 * 42

    std::cout << *p1 << std::endl;

    return 0;
}
