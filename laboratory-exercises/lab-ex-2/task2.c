// Palindrome numbers
// Read a six-digit number from SI. On SO print 1 if the first is equal to the last,
// second is equal to the fifth, and third is equal to the fourth digit of that number.
// Otherwise, print 0.

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