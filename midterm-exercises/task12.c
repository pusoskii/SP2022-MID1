#include <stdio.h>

int main() {
    int numberOfPairs, firstNumber, secondNumber;

    scanf("%d", &numberOfPairs);

    for (int i = 0; i < numberOfPairs; i++) {

        scanf("%d%d", &firstNumber, &secondNumber);

        if (firstNumber % 10 == 0) {
            firstNumber /= 10;
            if (firstNumber > secondNumber) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            int numberOfDigits = 0;
            int tmp = firstNumber;
            while (tmp != 0) {
                tmp /= 10;
                numberOfDigits++;
            }

            int power = 1;
            for (int j = 1; j < numberOfDigits; j++) {
                power *= 10;
            }

            int firstNumberNew = firstNumber % 10;
            firstNumberNew *= power;
            firstNumberNew += firstNumber / 10;

            if (firstNumberNew > secondNumber) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}