#include <iostream>

int main() {
    std::cout << 5.0 << '\n';   // returns double
    std::cout << 5.0f << '\n';  // returns float

    // float f { 4.1 }; causes issues since 4.1 is a double
    // therefore the suffix 'f' is required in this instance

    float f { 4.1f };
    double d { 4.1 };

    return 0;
}
