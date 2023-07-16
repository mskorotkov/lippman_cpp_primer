#include <iostream>

int main() {
    int *p = nullptr;
    if (p) {
        std::cout << "The pointer p is not null" << std::endl;
    } else {
        std::cout << "The pointer p is null" << std::endl;
    }

    int x = 777;
    p = &x;

    if (*p) {
        std::cout << "The object pointed by the pointer is not false (which means the object is not null or zero etc.)";
    } else {
        std::cout << "The object pointed by the pointer is false (which means the object is null or zero etc.)";
    }

    return 0;
}
