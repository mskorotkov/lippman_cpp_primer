int main() {
    int null = 0, *p = null;
    // [Error] invalid conversion from 'int' to 'int*'

    int null = 0, *p = &null;
    // OK

    return 0;
}
