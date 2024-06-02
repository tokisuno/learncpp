#include <iostream>

int main() {
    int x { 2 };
    int y { 3 };

    std::cout << ((x > y) ? x : y) << '\n';

    return 0;
}
