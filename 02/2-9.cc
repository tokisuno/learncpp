#include <iostream>

void foo(int x) {
    std::cout << x << '\n';
}

int main() {
    foo(5);

    int x { 6 };
    std::cout << x << '\n';

    return 0;
}
