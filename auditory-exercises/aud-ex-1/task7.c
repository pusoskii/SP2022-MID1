// Write a program that reads from standard input two integers
// and prints their sum, difference, product and division remainder.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer:\n");
    scanf("%d", &a);
    printf("Enter second integer:\n");
    scanf("%d", &b);

    printf("The sum is %d\n", a + b);
    printf("The difference is %d\n", a - b);
    printf("The product is %d\n", a * b);
    printf("The division remainder is %d", a % b);

    return 0;
}