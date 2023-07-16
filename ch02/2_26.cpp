int main() {
    const int buf;       // a) [Error] uninitialized const 'buf'
    int cnt = 0;         // b) OK
    const int sz = cnt;  // c) OK
    ++cnt;               // d) OK
    ++sz;                // d) [Error] increment of read-only variable 'sz'
    return 0;
}
