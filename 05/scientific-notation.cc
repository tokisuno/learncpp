#include <iostream>

int main() {
    double pi { 3.14159 };      // double literal in std notation
    double avogadro { 6.02e23 };// double literal in scienfitic notation
    double electronCharge { 1.6e-19 }; // e can be negative

    std::cout << pi << '\n';
    std::cout << avogadro << '\n';
    std::cout << electronCharge << '\n';

    return 0;
}
