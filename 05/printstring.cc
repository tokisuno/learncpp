#include <iostream>
#include <string>
#include <string_view>

// str makes an expensive copy of s
void printString(std::string str) {
    std::cout << str << '\n';
}

// creates a view of the argument
void printSV(std::string_view str) {
    std::cout << str << '\n';
}

int main() {
    printSV("Hello world!");

    std::string s{ "Hello world!" };
    printString(s);

    std::string s2{ "Hello, world!" };
    printSV(s2);

    // no risk the arg being viled will be modified or destroyed before our str parameter
    std::string_view s3 { s2 };
    printSV(s3);


    return 0;
}
