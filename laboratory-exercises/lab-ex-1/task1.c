// Write a program that will read two integers from SI and on SO will print their sum and product.

#include <stdio.h>

int main() {
    int a, b, sum, product;

    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
    printf("%d\n", a * b);
    return 0;
}