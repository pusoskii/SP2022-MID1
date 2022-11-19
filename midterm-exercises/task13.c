#include <stdio.h>

int main() {
    int rangeStart, rangeEnd;

    scanf("%d%d", &rangeStart, &rangeEnd);

    for (int i = rangeStart; i <= rangeEnd; i++) {
        int tmp = i;
        int totalDigits = 0;
        int evenDigits = 0;

        while (tmp != 0) {
            int currentDigit = tmp % 10;
            tmp /= 10;

            if (currentDigit % 2 == 0) evenDigits++;
            totalDigits++;
        }

        if (evenDigits == totalDigits) {
            printf("%d", i);
            break;
        } else if (evenDigits != totalDigits && i == rangeEnd) {
            printf("NSN");
        } else {
            continue;
        }
    }

    return 0;
}