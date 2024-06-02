#include <iostream>

int main() {
    unsigned int u { 5 };
    int s { static_cast<int>(u) };

    std::cout << s << '\n';

    return 0;
}

