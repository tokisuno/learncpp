#include <iostream>

int main() {
    // in most cases it's fine to use non-suffixed int literals
    // even when initializing non-int types

    int a { 5 };
    unsigned int b { 6 };
    long c { 7 };

    std::cout << 5 << '\n';   // 5 (no suffix) is type int
    std::cout << 5L << '\n';  // 5L is type long
    std::cout << 5u << '\n';  // 5u is type unsigned int

    std::cout << a << b << c << '\n';

    return 0;
}
