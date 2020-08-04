int main() {
    int i = 0;
    const int v2 = 0; // low-level const
    int v1 = v2; // none, the const is dropped
    int *p1 = &v1, &r1 = v1; // p1: no const - the const was dropped, r1 = no const - the const was dropped
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2: low-level const, p3: top-level and low-level consts, r2: top-level const

    return 0;
}
