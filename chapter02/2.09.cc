#include <iostream>

int main() {
    // a.
    // std::cin >> int input_value; // error, you cannot initialize and assign an object directly from standard input
    int input_value;
    std::cin >> input_value;

    // b.
    // int i = { 3.14 }; // error, double cannot be narrowed to an int in initializer list
    double i = { 3.14 };
   
    // c.
    // double salary = wage = 9999.99; // error, use of undeclared identifier wage
    double salary, wage;
    salary = wage = 9999.99;

    // d.
    // int i2 = 3.14; // legal, but value in `i` will be truncated to `3`.
    double i2 = 3.14;

    return 0;
}
