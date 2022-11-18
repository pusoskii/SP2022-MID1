#include <stdio.h>

int main() {
    int sixDigitNumber;

    scanf("%d", &sixDigitNumber);

    printf("%d", (sixDigitNumber / 100000 % 10 == sixDigitNumber % 10)
                 && (sixDigitNumber / 10000 % 10 == sixDigitNumber / 10 % 10)
                 && (sixDigitNumber / 1000 % 10 == sixDigitNumber / 100 % 10)
    );

    return 0;
}