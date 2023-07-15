#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
    Sales_item total;
    if (cin >> total) {
        Sales_item book;
        while (cin >> book) {
            if (total.isbn() == book.isbn()) {
                total += book;
            } else {
                cout << total;
                total = book;
            }
        }
        cout << total;
    } else {
        cerr << "No data" << endl;;
        return -1;
    }
    return 0;
}
