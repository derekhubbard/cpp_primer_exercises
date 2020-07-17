int main() {
    // a.
    // const int buf; // illegal, default initialization of an object of const type `const int` not allowed
    
    // b.
    int cnt = 0; // ok

    // c.
    const int sz = cnt; // ok, copies the value of cnt to sz

    // d.
    ++cnt; // ok, adds one to the value of cnt
    // ++sz; // illegal, cannot increment a const object

    return 0;
}
