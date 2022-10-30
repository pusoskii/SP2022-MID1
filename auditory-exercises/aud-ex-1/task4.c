// Write a program for computing the arithmetic mean of the numbers 3, 5 and 12.

#include <stdio.h>

int main() {
    int a = 3, b = 5, c = 12;
    float arithmeticMean = (a + b + c) / 3.0;

    printf("The arithmetic mean of %d, %d, %d is %.2f", a, b, c, arithmeticMean);

    return 0;
}