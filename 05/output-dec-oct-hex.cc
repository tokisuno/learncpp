#include <iostream>
// Print values in decimal, octal, or hexadecimal

int main() {
    int x { 12 };

    std::cout << x << '\n';             // base10 (dec)
    std::cout << std::hex << x << '\n'; // base16 (hex)
    std::cout << x << '\n';             // base16 (hex)
    std::cout << std::oct << x << '\n'; // base8  (oct)
    std::cout << std::dec << x << '\n'; // base10 (dec)
    std::cout << x << '\n';             // base10 (dec)

    // * makes change to i/o manipulator
    // * is set as such for future output unless it is changed again
}
