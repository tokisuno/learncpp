#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::string s { "Hello, world!" };
    std::string_view sv { s };

    s = "Hello, universe!";
    std::cout << sv << '\n';

    // reinitializing sv = s re-validates string_view
    sv = s;
    std::cout << sv << '\n';

    return 0;
}
