#include <stdio.h>

int main() {
    int number, tmp, reversedNumber, lastDigit;

    scanf("%d", &number);

    int countDigits = 0;
    tmp = number;
    while (tmp != 0) {
        tmp /= 10;
        countDigits++;
    }

    if (countDigits != 3) {
        printf("Wrong input");
        return 0;
    }

    tmp = number;
    reversedNumber = 0;
    while (tmp != 0) {
        lastDigit = tmp % 10;
        reversedNumber *= 10;
        reversedNumber += lastDigit;
        tmp /= 10;
    }

    if (reversedNumber == number) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}