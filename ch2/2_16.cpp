int main() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159; // d = 3.14159    i=0, r1=0, d=3.14159, r2=3.14159
    r2 = r1;      // d = i          i=0, r1=0, d=0, r2=0
    i = r2;       // i = d          i=0, r1=0, d=0, r2=0
    r1 = d;       // i = d          i=0, r1=0, d=0, r2=0

    return 0;
}
