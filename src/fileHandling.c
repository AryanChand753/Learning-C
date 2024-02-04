#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");

    if (file != NULL) {
        fprintf(file, "Hello, File!\n");
        fclose(file);
    } else {
        printf("Error opening file.\n");
    }

    return 0;
}