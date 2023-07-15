#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
    Sales_item book1, book2;
    cin >> book1 >> book2;
    cout << book1 + book2;
    return 0;
}

/*
Input:
1-121-12345-X 3 20.0
1-121-12345-X 2 10.0

Output:
1-121-12345-X 5 80 16
*/
