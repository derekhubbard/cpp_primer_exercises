int main() {
    int i, *const ip = &i;
    int *p1, *const p2 = p1;
    const int ic = 5, &r = ic;
    const int *const p3 = &ic;
    const int *p;

    // a.
    i = ic; // ok
 
    // b.
    // p1 = p3; // illegal, cannot assign const int *const to int *

    // c.
    // p1 = &ic; // illegal, cannot assign  const int * to int *

    // d.
    // p3 = &ic; // illegal, cannot assign to variable with const type

    // e.
    // p2 = p1; // illegal, cannot assign to variable with const type

    // f.
    // ic = *p3; // illegal, cannot assign to variable with const type

    return 0;
}
