#include "io.h"
#include <iostream>

int readNumber() {
    int num{};

    std::cout << "Enter an integer:";
    std::cin >> num;

    return num;
}

void writeNumber(int x) {
    std::cout << x << '\n';
}
