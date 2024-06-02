#include <iostream>

int main() {
    std::cout << "Input a char: ";

    char ch{};
    std::cin >> ch;

    std::cout << "You entered: " << static_cast<int>(ch) << '\n';

    return 0;
}
