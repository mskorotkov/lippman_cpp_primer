int main() {
    int i = 42;
    void *p = &i;   // [OK] a 'void' pointer can point to any type
    long *lp = &i;  // [Error] invalid conversion from 'int*' to 'long int*' [-fpermissive]
    return 0;
}
