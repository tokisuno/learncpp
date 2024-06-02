#include <iostream>
#include <string>
#include <string_view>

std::string_view firstAlphabetical(std::string_view s1, std::string_view s2) {
    return s1 < s2 ? s1 : s2;
}

int main() {
    // a and b exist in the scope of the caller.
    // function returns a view of either a or b back to the caller
    std::string a { "World" };
    std::string b { "Hello" };

    std::cout << firstAlphabetical(a, b) << '\n';

    return 0;
}
