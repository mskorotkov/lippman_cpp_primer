int main() {
    int x = 777;
    int y = 3;
    int *p = &x;  // p = 0x7afe14
    p = &y;       // p = 0x7afe10
    *p *= 5;      // y = 15
    return 0;
}
