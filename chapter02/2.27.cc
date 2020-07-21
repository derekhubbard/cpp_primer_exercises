int main() {
    {
        // a.
        // int i = -1, &r = 0; // illegal, cannot initialize a non-const reference to an int
    }
    
    {
        // b.
        int i2 = 0;
        int *const p2 = &i2; // ok, initializes a const pointer, which points to an int
    }

    {
        // c.
        const int i = -1, &r = 0; // ok, initializes a const int variable named i, as well as a const int reference with an initiales value of 0
    }

    {
        // d.
        const int i2 = 0;
        const int *const p3 = &i2; // ok, initializes a const int pointer to a const int
    }
    
    {
        // e.
        const int i2 = 0;
        const int *p1 = &i2; // ok, initializes a pointer to a const int
    }
    
    {
        // f.
        // const int &const r2; // illegal, references cannot be defined as const
    }

    {
        // g.
        const int i = 0;
        const int i2 = i, &r = i; // ok, initializes a const int with a value of another variable, and then also initializes a reference with a const int value
    }

    return 0;
}
