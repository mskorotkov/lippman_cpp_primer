#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
    Sales_item prev_book;
    int n = 1;

    if (cin >> prev_book) {
        Sales_item book;
        while (cin >> book) {
            if (prev_book.isbn() == book.isbn()) {
                n += 1;
            } else {
                cout << "Transactions: " << prev_book.isbn() << " " << n << endl;
                n = 1;
            }
            prev_book = book;
        }
    } else {
        cerr << "No data!" << endl;
        return -1;
    }

    cout << "Transactions: " << prev_book.isbn() << " " << n << endl;

    return 0;
}

/*
Input:
0-123-12345-X 1 30.0
0-123-12345-X 5 29.9
1-123-12345-X 7 120.0
2-123-12345-X 3 130.0
3-123-12345-X 2 10.5
3-123-12345-X 4 10.3
3-123-12345-X 2 10.7

Output:
Transactions: 0-123-12345-X 2
Transactions: 1-123-12345-X 1
Transactions: 2-123-12345-X 1
Transactions: 3-123-12345-X 3
*/
