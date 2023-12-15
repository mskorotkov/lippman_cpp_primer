int main() {
    int x = 777;
    int y = 3;
    int *p = &x;  // p = 000000A20D5BFA64, *p = 777
    p = &y;       // p = 000000ED35CFF984, *p = 3	
    *p *= 5;      // p = 000000ED35CFF984, *p = 15
    return 0;
}
