#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int getValueFromUser() {
    cout << "Enter an integer: ";
    int input{};
    cin >> input;

    return input;
}

int returnFive() {
    return 5;
}

int main() {
    cout << returnFive() << '\n';

    int x { getValueFromUser() };
    int y { getValueFromUser() };

    printf("%d + %d = %d\n", x, y, x + y);

    return EXIT_SUCCESS;
}

