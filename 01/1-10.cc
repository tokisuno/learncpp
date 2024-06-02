#include <iostream>

using namespace std;

int five() {
    return 5;
}

int main() {
    // all of these make use of an expression !
    int a { 2 };           // literal
    int b { 2 + 3 };       // computed
    int c { (2 * 3) + 4 }; // computed
    int d { b };           // variable
    int e { five() };      // function return value

    return 0;
}
