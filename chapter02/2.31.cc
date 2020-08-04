int main() {
    int i = 0;
    const int v2 = 0; // low-level const
    int v1 = v2; // none, the const is dropped
    int *p1 = &v1, &r1 = v1; // p1: no const - the const was dropped, r1 = no const - the const was dropped
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2: low-level const, p3: top-level and low-level consts, r2: top-level const

    r1 = v2; // ok
    // p1 = p2; // illegal, cannot assign const int * to int *
    p2 = p1; // ok
    p1 = p3; // illegal, cannot assign const int *const to int *
    p2 = p3;

    return 0;
}
