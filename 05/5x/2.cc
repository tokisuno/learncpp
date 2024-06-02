#include <iostream>

constexpr int min { 16 };

int main() {
    std::cout << "How old are you?" << '\n';

    int age{};
    // std::uint8_t age{}; // char type, not numeric
    std::cin >> age;

    std::cout << "Allowed to drive in Texas: ";

    if (age >= min)
        std::cout << "Yes";
    else
        std::cout << "No";

    std::cout << ".\n";

    return 0;
}
