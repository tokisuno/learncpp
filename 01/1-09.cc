#include <iostream>

using namespace std;

int main() {
    cout << "Hello world!" << '\n'; // Both of these are called
    cout << 5 << '\n';              // "literal constants"
                                    // * Values that are directly
                                    // inserted into code.

    int x { 69 };
    cout << x << '\n';

    return 0;
}
