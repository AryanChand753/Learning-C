#include <stdio.h>

int add(int a, int b);

int main() {
    int result = add(3, 4);
    printf("Sum: %d\n", result);

    return 0;
}
int add(int a, int b) {
    return a + b;
}