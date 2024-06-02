#include <cstdio>

using namespace std;

int getInt();
int main() {
    int x { getInt() };
    int y { getInt() };

    printf("%d + %d = %d\n", x, y, x+y);

    return 0;
}
