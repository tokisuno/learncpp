#include <iostream>

bool isPrime(int x) {
    return x % 2 == 0;
}

int main() {
    std::cout << "Enter a number (0-9): ";
    int x{};
    std::cin >> x;

    if (x >= 0 || x <= 9) {
        if (isPrime(x))
            std::cout << "Prime\n";
        else
            std::cout << "Not prime\n";
    }
}
