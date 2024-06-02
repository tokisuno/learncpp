#include <iostream>
#include <string>
#include <string_view>

std::string getName(int i) {
    std::cout << "Enter the name of person #" << i << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string_view name) {
    std::cout << "Enter age of " << name << ": ";
    int age{};
    std::cin >> age;

    return age;
}

void olderPerson(std::string_view name1, int age1, std::string_view name2, int age2) {
    int bigger{};
    int smaller{};
    std::string_view oldest{};
    std::string_view youngest{};

    if (age1 > age2) {
        bigger = age1;
        oldest = name1;

        smaller = age2;
        youngest = name2;

    } else {
        bigger = age2;
        oldest = name2;

        smaller = age1;
        youngest = name1;
    }
    
    std::cout << oldest << " (age " << bigger << ") is older than " << youngest << " (age " << smaller << ").\n";
    
}

int main() {
    const std::string name1{ getName(1) };
    const int age1 { getAge(name1) };

    const std::string name2{ getName(2) };
    const int age2 { getAge(name2) };

    olderPerson(name1, age1, name2, age2);

}
