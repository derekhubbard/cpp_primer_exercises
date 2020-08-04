int main() {

    // a.
    // int i, *const ip; // illegal, default initialization of a const object

    // b.
    // int *p1, *const p2; // illegal, default initialization of a const object

    // c.
    // const int ic, &r = ic; // illegal, default initialization of a const object

    // d.
    // const int *const p3; // illegal, default initialization of a const object

    // e.
    const int *p; // ok

    return 0;
}
