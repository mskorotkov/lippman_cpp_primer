int main() {
    int i, *const cp;       // a) OK, [Error] uninitialized const 'cp'
    int *p1, *const p2;     // b) OK, [Error] uninitialized const 'p2'
    const int ic, &r = ic;  // c) [Error] uninitialized const 'ic', OK
    const int *const p3;    // d) [Error] uninitialized const 'p3'
    const int *p;           // e) OK
    return 0;
}
