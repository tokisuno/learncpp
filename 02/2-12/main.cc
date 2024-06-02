#include <iostream>
#include "square.h"

int main() {
    std::cout << getSquareSides() << " sides\n";
    std::cout
        << getSquarePerimeter(getSquarePerimeter(5))
        << '\n';
}
