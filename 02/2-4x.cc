#include <iostream>

using namespace std;

int doubleNumber() {
    int x{};

    cout << "Enter int: ";
    cin >> x;

    return x * 2;
}

int main() {
    cout << doubleNumber() << '\n';

    return 0;
}
