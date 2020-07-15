int main() {
    int i = 10;
    int *p = &i;

    if (p) {
        // this block will execute if the pointer p evaluates to true
        // any nonzero pointer will evaluate as true, all null and zero-value pointers will evaluate as false
    }

    if (*p) {
        // this block will execute if the value where the pointer p is pointing is true
    }

    return 0;
}
