#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int first{};
    int second{};

    cout << "Enter first digit: ";
    cin >> first;


    cout << "Enter second digit: ";
    cin >> second;

    printf("%d + %d = %d\n", first, second, first + second);

    return 0;
}
