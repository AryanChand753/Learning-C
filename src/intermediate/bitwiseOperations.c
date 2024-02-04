#include <stdio.h>
// This will be very useful but confusing
int main() {
    unsigned int x = 5; // Binary: 0101
    unsigned int y = 3; // Binary: 0011

    printf("AND: %d\n", x & y);   // Binary: 0001 (1)
    printf("OR: %d\n", x | y);    // Binary: 0111 (7)
    printf("XOR: %d\n", x ^ y);   // Binary: 0110 (6)
    printf("Shift Left: %d\n", x << 1);  // Binary: 1010 (10)
    printf("Shift Right: %d\n", x >> 1); // Binary: 0010 (2)
    printf("NOT: %d\n", ~x);      // Binary: 1111 1111 1111 1111 1111 1111 1111 1010 (4294967290)

    return 0;
}
