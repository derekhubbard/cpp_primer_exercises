int main() {
    // a.
    int ival = 1.01; // valid, but implicit conversion of initial value will be truncated to 1

    // b.
    // int &rval1 = 1.01; // invalid, reference must be initialized with an object and reference int cannot be bound to double value

    // c.
    int &rval2 = ival; // valid
   
    // d.
    // int &rval3; // invalid, reference variable must be initialized

    return 0;
}
