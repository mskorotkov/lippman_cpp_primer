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
                cerr << "Data must refer to same ISBN" << endl;
                return -1;
            }
        }
    } else {
        cerr << "No data!" << endl;;
        return -1;
    }
    
    cout << total;
    
    return 0;
}

/*
Input:
0-123-12345-X 1 30.0
0-123-12345-X 2 20.0
0-123-12345-X 3 10.0

Output:
0-123-12345-X 6 100 16.6667
*/
