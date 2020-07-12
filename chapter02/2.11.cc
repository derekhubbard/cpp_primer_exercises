// a.
extern int ix = 1024; // definition

// b.
int iy; // definition

// c.
extern int iz; // declaration

int main() {
    // a.
    // extern int ix2 = 1024; // error, extern variable cannot have an initializer

    // b.
    int iy2; // definition

    // c.
    extern int iz2; // declaration

    return 0;
}
