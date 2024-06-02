#include <iostream>
#include <string>
#include <string_view>

std::string_view getBoolName(bool b) {
    // these strings are local variables
    std::string t { "true" };
    std::string f { "false" };

    // local variables are destroyed at the end of a function
    // therefore, undefined behaviour occurs
    if (b)
        return t;

    return f;
}

int main() {
    std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n';

    return 0;
}
