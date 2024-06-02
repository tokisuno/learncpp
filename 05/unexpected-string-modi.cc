#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::string s { "Hello, world!" };
    std::string_view sv { s }; // sv is viewing s

    s = "Hello, universe!"; // mods s, invalidates sv (s is still valid)

    std::cout << sv << '\n'; // undefined behaviour

    return 0;
}
