#include <iostream>

double getNum() {
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    return x;
}

char getOp() {
    std::cout << "Enter an operator: ";
    char a{};
    std::cin >> a;

    return a;
}

double doMath(double x, double y, char a) {
    switch (a) {
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '+':
            return x + y;
        case '-':
            return x - y;
        default:
            std::cout << "";
            break;
    }
    return 0;
}

int main() {
    double x { getNum() };
    double y { getNum() };
    char a { getOp() };

    std::cout << doMath(x, y, a) << '\n';

    return 0;
}
