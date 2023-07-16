int main() {
    int i = 0;
    double* dp = &i;  // a) [Error] cannot convert 'int*' to 'double*' in initialization
    int *ip = i;      // b) [Error] invalid conversion from 'int' to 'int*' [-fpermissive]
    int *p = &i;      // c) OK
    return 0;
}
