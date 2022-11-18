#include <stdio.h>

int main() {
    int initialNumber, tmpOne, tmpTwo, currentNumber;
    int initialNumberDigits = 0, currentNumberDigits = 0;
    scanf("%d", &initialNumber);
    tmpOne = initialNumber;

    while (tmpOne != 0) {
        tmpOne /= 10;
        initialNumberDigits++;
    }

    while (scanf("%d", &currentNumber)) {
        tmpTwo = currentNumber;
        while (tmpTwo != 0) {
            tmpTwo /= 10;
            currentNumberDigits++;
        }

        if (currentNumberDigits == initialNumberDigits) {
            printf("%d\n", currentNumber);
        }

        currentNumberDigits = 0;
    }
    return 0;
}