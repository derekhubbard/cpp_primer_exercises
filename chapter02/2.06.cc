#include <iostream>

int main() {
    int month = 9, day = 7; // ok
    std::cout << month << " " << day <<  std::endl;

    int month = 09, day = 07; // error, invalid digit in 9 octal constant
    std::cout << month << " " << day <<  std::endl;
}

