#include <iostream>

#define NAME "Lucas"
#define PRINT_JOE
#define PRINT_BOB

int main() {
    std::cout << "My name is " << NAME << '\n';

#ifdef PRINT_JOE
    std::cout << "Joe\n";
#endif

#ifdef PRINT_BOB   //ifdef: if defined...
    std::cout << "Bob\n";
#endif

#ifndef PRINT_JAMES //ndef: if NOT defined...
    std::cout << "James\n";
#endif

#if 0
    std::cout << "gaming\n";
#endif

    return 0;
}
