#include <iostream>

int main() {
    // a magic number is a literal that either has unclear meaning or may need to be changed later
    // ex. vvvvv
    // const int maxStudentsPerSchool{ numClassrooms * 30 };
    // setMax(30);
    //
    // This can be rewritten as the following:
    const int maxStudentsPerClass{ 30 };
    const int totalStudents{ numClassrooms * maxStudentsPerClass };

    const int maxNameLength{ 30 };
    setMax(maxNameLength);

    // now the semantic meaning of each of the respective 30s is verbose!
}
