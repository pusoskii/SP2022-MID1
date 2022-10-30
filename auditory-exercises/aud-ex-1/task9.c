// Write a program that will print the sum of all the digits in a five-digit number read from SI.

#include<stdio.h>

int main() {
    char firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit;

    printf("Enter a five-digit number:\n");
    scanf("%c%c%c%c%c", &firstDigit, &secondDigit, &thirdDigit, &fourthDigit, &fifthDigit);
    printf("The sum is: %d", firstDigit + secondDigit + thirdDigit + fourthDigit + fifthDigit - 5 * 48);
    // 48 represents the ASCII code of the digit 0

    return 0;
}