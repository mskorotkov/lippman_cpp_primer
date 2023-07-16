int main() {
    int ival = 1.01;    // OK
    int &rval1 = 1.01;  // [Error] cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    int &rval2 = ival;  // OK
    int &rval3;         // [Error] 'rval3' declared as reference but not initialized
    return 0;
}
