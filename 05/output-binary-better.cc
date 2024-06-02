#include <iostream>
#include <format>   // C++20
#include <print>    // C++23

int main() {
    std::cout << std::format("{:b}\n", 0b1010);   // C++20
    std::cout << std::format("{:#b}\n", 0b1010);  // C++20

    std::println("{:b} {:#b}", 0b1010, 0b1010);   // C++23

    return 0;
}
