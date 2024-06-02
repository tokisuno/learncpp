#include <iostream>

using namespace std;

// Google's C++ recommendation for unreferenced parameters
void doSomething(int /*count*/)
{
}

int getUserInput() {
    cout << "Enter an int: ";
    int input{};
    cin >> input;

    return input;
}

int add(int x, int y) {
    return x + y;
}

void printDoubledValue(int x) {
    cout << x << " doubled is " << x * 2 << '\n';
}

int main() {
    cout << add(1, 2) << '\n';

    printDoubledValue(getUserInput());

    return 0;
}
