#include <stdio.h>

union Value {
    int intValue;
    float floatValue;
    char stringValue[20];
    // Unions allow you to define a data type that can hold data of different types, but only one type at a time.
};

int main() {
    union Value data;

    data.intValue = 42;
    printf("Integer Value: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Float Value: %f\n", data.floatValue);

    return 0;
}