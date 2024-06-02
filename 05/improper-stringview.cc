#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::string_view sv{};

    // nested block
    {
        // created std::string local to this block
        std::string s{ "Hello, world!" };
        // sv is now viewing s
        sv = s;
    }
    // nest is over, so s is destroyed
    // therefore sv is now viewing an invalid string

    std::cout << sv << '\n';
}
