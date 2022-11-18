#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {
        printf("Tik-Tak");
    } else if (number % 3 == 0) {
        printf("Tik");
    } else if (number % 5 == 0) {
        printf("Tak");
    } else {
        printf("Bad number");
    }

    return 0;
}