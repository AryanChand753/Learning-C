#include <stdio.h>

enum Weekday {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    enum Weekday today = Wednesday;

    if (today == Wednesday) {
        printf("It's the middle of the week!\n");
    }

    return 0;
}