#include <iostream>

int five() {
    return 5;
}

int main() {
    constexpr double gravity { 9.8 };
    constexpr int sum { 4 + 5 };
    constexpr int something { sum };

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    // constexpr int myAge { age }; // age is not a const-exp
    // constexpr int f { five() };  // return of five() isn't const-exp
}
