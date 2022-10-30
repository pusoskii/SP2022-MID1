// Write a program that will compute the value of the mathematical expression: x = 3/2 + (5 – 46*5/12)

#include <stdio.h>

int main() {
    float x = 3.0 / 2 + (5 - 46 * 5 / 12.0);

    printf("%.2f", x);

    return 0;
}