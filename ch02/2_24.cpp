int main() {
    int i = 42;
    void *p = &i;   // [OK] a void pointer is a special pointer that can point to objects of any data type
    long *lp = &i;  // [Error] invalid conversion from 'int*' to 'long int*'
    return 0;
}
