#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int count = num * 2;

    if (num > 0) {
        printf("The number is positive.\n");
        while (num > 0) {
            printf("%d", num);
            num--;
        }
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
        while (num < 0) {
            printf("%d", num);
            num++;
        }
    }

    for (int i = 1; i <= count; i++)
    {
        printf("%d", i);
    }
    

    return 0;
}
