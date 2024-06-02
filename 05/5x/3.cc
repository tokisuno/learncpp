#include <iostream>


double getTowerHeight() {
    std::cout << "Enter the height of the towers in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;

    return towerHeight;
}

//  Made constexpr because it calculates a value from its inputs and returns it
//  Arithmetic can be done at compile time
//  If its args are constexpr, it can be called at compile time
//  In this case, it's called at rt since the arg towerHeight isn't constexpr
constexpr double calculateBallHeight(double towerHeight, int seconds) {
    const double gravity{ 9.8 }; // compile time constant
    
    // these can't be constexpr since not all their inits are constexpr.
    const double distanceFallen { (gravity * (seconds * seconds)) / 2.0 };
    const double currentHeight { towerHeight - distanceFallen };

    return currentHeight;
}

// output version of operator<< and operator>> don't support constexpr
void printBallHeight(double ballHeight, int seconds) {
    if (ballHeight > 0.0)
        std::cout << "@ " << seconds << " seconds, ball height = " << ballHeight << " meters\n";
    else
        std::cout << "@ " << seconds << " seconds, the ball is on the ground\n";
}

// output version of operator<< and operator>> don't support constexpr
void printCalculatedBallHeight(double towerHeight, int seconds) {
    double ballHeight { calculateBallHeight(towerHeight, seconds) };
    printBallHeight(ballHeight, seconds);
}

int main() {
    // can only be const because its initializer (towerHeight) isn't constexpr
    const double towerHeight { getTowerHeight() };

    printCalculatedBallHeight(towerHeight, 0);
    printCalculatedBallHeight(towerHeight, 1);
    printCalculatedBallHeight(towerHeight, 2);
    printCalculatedBallHeight(towerHeight, 3);
    printCalculatedBallHeight(towerHeight, 4);
    printCalculatedBallHeight(towerHeight, 5);

    return 0;
}
