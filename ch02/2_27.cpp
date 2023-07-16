
int main() {
    // a)
    {
        int i = -1, &r = 0;
        // OK
        // [Error] cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    }

    // b)
    {
        int i2;
        int *const p2 = &i2;  // OK
    }

    // c)
    {
        const int i = -1, &r = 0;  // OK, OK
    }

    // d)
    {
        int i2;
        const int *const p3 = &i2;  // OK
    }

    // e)
    {
        int i2;
        const int *p1 = &i2;  // OK
    }


    // f)
    {
        const int &const r2;
        // [Error] 'const' qualifiers cannot be applied to 'const int&'
    }

    // g)
    {
        int i;
        const int i2 = i, &r = i;  // OK, OK
    }

    return 0;
}
