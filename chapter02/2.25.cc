#include <iostream>

int main() {
    // a. 
    int* ip, i, &r = i; 
    // ip is a pointer to an int, value undefined
    // i is an int, value undefined
    // r is a reference to the int i, value undefined
    
    // b.
    int i2, *i2p = 0;
    // i2 is an int, value is undefined
    // i2p is a pointer to an int, value is null

    // c.
    int* ip3, ip2; 
    // ip3 is a pointer to an int, value is undefined
    // ip2 is an int, value is undefined

    return 0;
}
