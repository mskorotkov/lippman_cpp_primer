int main() {
    int i, *const cp;       // OK, [Error] uninitialized const 'cp'
    int *p1, *const p2;     // OK, [Error] uninitialized const 'p2'
    const int ic, &r = ic;  // [Error] uninitialized const 'ic', OK
    const int *const p3;    // [Error] uninitialized const 'p3'
    const int *p;           // OK
    return 0;
}
