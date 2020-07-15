int main() {
    int i = 0;

    // a.
    // double* dp = &i; // illegal, cannot initialize a double pointer with the address of an int

    // b.
    // int *ip = i; // illegal, cannot initialize an int pointer with an int directly

    // c.
    int *p = &i; // ok

    return 0;
}
