#include <iostream>

int getHeight() {
    std::cout << "Enter the height of the tower in meters: ";
    int height{};
    std::cin >> height;

    return height;
}

double gravityCalc(double height, double i) {
    return height - 9.8 * ((i * i) / 2);
}

void ballHeight(double height) {
    double temp = height;
    for (int i = 0; i <= 5; i++) {
        std::cout << "At " << i << " seconds, the ball is at the height: " << 100 - temp << '\n';
        temp -= gravityCalc(temp, i);
    }
}

int main() {
    int x{ getHeight() };
    ballHeight(x);

    return 0;
}
