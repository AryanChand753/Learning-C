#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operation)(int, int);

    operation = add;
    printf("Sum: %d\n", operation(3, 4));

    operation = subtract;
    printf("Difference: %d\n", operation(7, 3));

    return 0;
}
