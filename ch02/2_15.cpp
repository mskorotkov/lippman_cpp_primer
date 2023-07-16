int main() {
    int ival = 1.01;    // a) OK
    int &rval1 = 1.01;  // b) [Error] cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    int &rval2 = ival;  // c) OK
    int &rval3;         // d) [Error] 'rval3' declared as reference but not initialized
    return 0;
}
