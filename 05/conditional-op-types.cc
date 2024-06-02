#include <iostream>

int main() {
    int x { 5 };
    // params 2-3 should be of the same type or be convertible into each other's fundamental types
    // otherwise type-casting must occur
    std::cout << ((x != 5) ? std::to_string(x) : std::string{"x is 5"}) << '\n';

    return 0;
}
