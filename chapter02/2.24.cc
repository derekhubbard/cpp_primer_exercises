int main() {
    int i = 42; // initialize int variable i to the value 42

    void *p = &i; // initialize void pointer p to the address of i, a void pointer can point to any type

    // long *lp = &i; // invalid, cannot initialize long pointer with an int pointer

    return 0;
}
