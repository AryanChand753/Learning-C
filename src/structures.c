#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {2, 3};

    printf("Coordinates: (%d, %d)\n", p1.x, p1.y);

    return 0;
}