#include <iostream>

// getQuantityPhrase
// OK returning C-style string literal from a function as std::string_view
constexpr std::string_view getQuantityPhrase(int apples) {
    if (apples < 0) {
        return "negative";
    } else if (apples == 0) {
        return "no";
    } else if (apples == 1) {
        return "a single";
    } else if (apples == 2) {
        return "a couple of";
    } else if (apples == 3) {
        return "a few";
    } else {
        return "many";
    }
}

// getApplesPluralized
constexpr std::string getApplesPluralized(int apples) {
    return apples == 1 ? "apple" : "apples";
}

int main() {
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have?: ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
