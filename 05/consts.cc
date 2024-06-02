#include <iostream>

int getNumber() {
    std::cout << "Enter a number";
    int y{};
    std::cin >> y;

    return y;
}

int main() {

    // non const
    int a { 5 };            // gen-ex
    double b { 1.2 + 3.4 }; // const-ex


    // const integral vars w const-ex init are comp-time constraints
    const int c { 5 };
    const int d { c };
    const long e { c + 2 };

    // other const variables are runtime constants
    const int f { a };
    const int g { a + 1 };
    const long h { a + c };
    const int i { getNumber() };

    const double j { b };   // not const
    const double k { 1.2 }; // const
}
