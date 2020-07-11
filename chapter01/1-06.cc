#include <iostream>

int main() 
{
    std::cout << "Enter two numbers:" << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    std::cout << "Result: ";
    std::cout << n1 * n2;
    std::cout << std::endl;
    std::cout << "The product of " << n1;
              << " and " << n2;
              << " is " << n1 * n2 << std::endl;
}
