int main() {
    int i = 0;
    double* dp = &i;  // [Error] cannot convert 'int*' to 'double*' in initialization
    int *ip = i;      // [Error] invalid conversion from 'int' to 'int*' [-fpermissive]
    int *p = &i;      // OK
    return 0;
}
