int main() {
    int i = 0;

    const int v2 = 0;  // const is top-level

    int v1 = v2;       // const in v2 is ignored

    int *p1 = &v1, &r1 = v1;

    const int *p2 = &v2;       // const is low-level
    const int *const p3 = &i;  // right-most const is top-level, left-most is not
    const int &r2 = v2;        // const in reference types is always low-level

    return 0;
}
